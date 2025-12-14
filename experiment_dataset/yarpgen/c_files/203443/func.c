/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203443
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
    var_18 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)242))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)248)))) : (var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((short) (unsigned char)27));
                                arr_15 [i_2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 33554431)) && (((/* implicit */_Bool) 2097151U)))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9113589877499382748LL))))) : (((/* implicit */int) (unsigned char)16))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) ^ (234905410U))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1]);
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                arr_23 [i_7] [i_7] [i_7] [i_5] [i_7] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), (-1LL)));
                                var_21 = ((/* implicit */short) ((long long int) arr_5 [i_0] [i_0]));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_12 [i_6] [i_1] [i_5] [i_6] [i_7] [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_6] [4ULL] [(unsigned short)4] [4ULL] [(unsigned short)14] [i_6]))) : (((/* implicit */int) max((arr_12 [i_5] [i_1] [(signed char)22] [i_6] [i_6] [i_7]), (arr_12 [i_5] [i_1] [i_5] [i_6] [i_7] [i_6])))))))));
                                arr_24 [i_7] = ((/* implicit */int) max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_7])), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_7] [i_6] [i_5] [i_1] [i_0] [9]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0]))))) : (arr_18 [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
