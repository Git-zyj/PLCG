/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34424
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_12 = var_9;
                                arr_16 [i_2] [i_1] [i_3] [i_0] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_2)) ? (arr_11 [i_3 + 1] [i_1] [i_0 - 1] [i_2 + 1] [i_3 - 2] [i_4 - 2]) : (arr_11 [(unsigned char)7] [(_Bool)1] [i_1] [i_2] [i_3 + 1] [i_4 - 2]))), (min((-1253374113482195774LL), (((/* implicit */long long int) max((arr_9 [i_0] [i_1] [i_0] [i_0] [i_1]), (((/* implicit */short) (signed char)-90)))))))));
                            }
                        } 
                    } 
                    arr_17 [(_Bool)1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [10])) / (((/* implicit */int) (signed char)-84))))) : (max((var_6), (((/* implicit */unsigned int) 1511726735))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1]))) : (max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [(_Bool)0] [0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [6]))) : (-1253374113482195757LL))), (((/* implicit */long long int) ((unsigned int) arr_10 [i_1] [(unsigned char)7] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)31))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1731000466U)) : (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) var_3))))) ? (var_4) : (((((/* implicit */_Bool) var_0)) ? (((var_10) - (((/* implicit */int) (short)7609)))) : (((/* implicit */int) var_11))))));
}
