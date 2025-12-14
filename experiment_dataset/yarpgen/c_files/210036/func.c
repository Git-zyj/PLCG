/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210036
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                {
                    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) var_4)) : ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) ((_Bool) var_12)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -401962053076882671LL)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), ((~(arr_12 [i_1] [(short)4] [i_4] [i_4])))));
                                var_17 = ((/* implicit */int) var_13);
                                arr_15 [i_4] = ((/* implicit */short) (((!(arr_13 [i_2] [i_1] [i_4] [i_4 - 1] [i_3] [i_4 - 1]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (0)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((-9223372036854775804LL), (((/* implicit */long long int) arr_1 [i_1] [(unsigned char)8])))))))), (-6507584324850559174LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_18 = ((unsigned char) 1040187392);
                                arr_23 [i_0] [i_2] [i_5] [i_5] [i_6 - 2] [i_1] [(short)12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_1] [i_2 + 1] [i_5] [i_6 - 2])), ((unsigned short)65535))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_2), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (max((((/* implicit */long long int) (unsigned char)249)), (-9223372036854775801LL))))), (((/* implicit */long long int) var_6))));
}
