/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26314
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
    var_11 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_2 - 3] [i_1] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_0 - 1])))) + (((/* implicit */int) arr_6 [i_2 - 2] [i_1] [i_0 + 2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_13 = -560016734;
                                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) << ((((((-(1873553039))) + (1873553056))) - (17)))))), (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)35)), (var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) -1873553059)) : (851332594U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_0])))))));
                                var_15 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_8)), (var_1))))), (arr_10 [i_4] [i_3] [i_2 + 1] [i_0] [i_0])));
                                arr_12 [i_1] [i_3] [i_2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
                                arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32767))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (signed char)7);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_1] = (unsigned short)12044;
                                arr_21 [i_1] = ((/* implicit */unsigned short) ((long long int) arr_19 [(short)5] [(short)5] [i_0] [i_0] [i_0]));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_1] [i_1])) + (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_1] [1U] [i_2 - 3])) ? (((/* implicit */int) (unsigned short)21655)) : (((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), ((-(min(((+(1873553053))), (((/* implicit */int) var_9))))))));
    var_18 = ((/* implicit */int) ((var_10) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)19)))))));
}
