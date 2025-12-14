/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235051
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [(short)11])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (short)32767)) : (2147483647)))))))));
                                var_18 = ((/* implicit */unsigned short) (+((+(((int) var_13))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_17 [i_6] = ((/* implicit */short) max((((/* implicit */unsigned int) (short)20020)), (1279351298U)));
                            arr_18 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) (((-(((((/* implicit */_Bool) (signed char)29)) ? (arr_13 [i_5] [i_1] [2ULL] [i_6]) : (((/* implicit */unsigned long long int) -2147483643)))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        for (long long int i_8 = 2; i_8 < 20; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)21207))))) ? ((-(((/* implicit */int) (signed char)27)))) : (((/* implicit */int) (short)0)))));
                            arr_33 [i_7] [i_8 - 1] [i_9] [i_10] &= ((/* implicit */short) (~(1264173233)));
                            var_20 &= ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (signed char)-60))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) (~(-1570254599)))) : (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_30 [i_7] [i_7] [i_7] [i_7] [(signed char)6])))))) ? (((((/* implicit */_Bool) max((1871292839897292283ULL), (((/* implicit */unsigned long long int) -1821822451))))) ? ((-(-1264173228))) : (((((/* implicit */_Bool) var_13)) ? (1264173235) : (((/* implicit */int) (_Bool)1)))))) : ((-(((arr_24 [i_7] [i_8] [i_8]) ^ (((/* implicit */int) arr_29 [i_7] [i_7] [i_8] [i_8]))))))));
                var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */int) arr_29 [i_8] [i_8 - 2] [i_7] [(short)19]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [10])) ? (arr_23 [(unsigned char)16] [i_8] [16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((min((1982596316184847472LL), (((/* implicit */long long int) (signed char)-35)))), (((/* implicit */long long int) ((unsigned int) var_8))))) : (((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (2517035848U))))))));
                arr_34 [11LL] [i_7] = (!(((/* implicit */_Bool) arr_32 [(_Bool)1] [i_8] [(signed char)4] [i_7])));
                arr_35 [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)8)) <= (((/* implicit */int) arr_22 [i_7]))))) / (max((-1264173236), (((((/* implicit */_Bool) (short)-13)) ? (-395061554) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
