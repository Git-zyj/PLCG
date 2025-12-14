/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216310
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_12 = min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (((arr_8 [i_0] [i_1] [i_2]) - (((/* implicit */unsigned long long int) 1072168051U))))))), ((-(((3222799244U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [3] [i_2] [i_1] [i_0]))))))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3222799244U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14199))) : (arr_4 [i_0] [i_1])))) ? ((+(((((/* implicit */_Bool) (signed char)-114)) ? (arr_12 [(short)4] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) arr_4 [i_3] [(unsigned short)17])))))) : (((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        arr_15 [i_2] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1] [i_5 - 1] [i_5 - 1]);
                        var_14 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4193280LL)) || (((/* implicit */_Bool) 4193280LL)))))) / (var_8)));
                        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)5))));
                    }
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)47385);
}
