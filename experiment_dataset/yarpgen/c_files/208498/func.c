/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208498
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((min((8463169984303330458ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 318571074U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) <= (var_16))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (1987707897) : (((/* implicit */int) (unsigned char)206))))) ? (((((/* implicit */_Bool) (short)-26021)) ? (0ULL) : (((/* implicit */unsigned long long int) var_17)))) : (((((/* implicit */_Bool) 20ULL)) ? (arr_3 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [14] [i_1])))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) / (9ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (-(((((_Bool) 9214659863835149685LL)) ? (arr_3 [i_0] [i_0] [(signed char)3]) : (9983574089406221158ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_16 [(unsigned char)15] [(signed char)15] [i_2] [i_4] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2]))))) : (((/* implicit */int) arr_5 [i_2] [i_5 - 1] [i_5 + 1]))));
                            var_22 |= (-(((/* implicit */int) ((short) (unsigned char)151))));
                            var_23 = ((/* implicit */int) ((2880228178225622572LL) == (((/* implicit */long long int) ((/* implicit */int) (short)510)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) var_8);
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_11 [i_2] [(signed char)15] [i_3]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_3);
    var_27 = ((/* implicit */unsigned long long int) var_1);
}
