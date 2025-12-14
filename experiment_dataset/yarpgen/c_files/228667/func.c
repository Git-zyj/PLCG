/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228667
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
    var_16 = var_12;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [12U] [i_1] [i_3] [i_1] = var_13;
                                var_17 &= var_14;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_7)), (((max((24U), (((/* implicit */unsigned int) (_Bool)1)))) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_15 [(unsigned short)18] [i_6] [i_1] [i_2 + 1] [(signed char)0]))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_12)))) || (((/* implicit */_Bool) min((arr_19 [i_2] [i_2 - 2] [i_2] [i_5] [i_6] [i_6] [i_5]), (arr_19 [9U] [i_2 - 2] [i_0] [i_5] [i_6] [(unsigned short)2] [i_5]))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [(unsigned short)7] [i_1] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_14)), (arr_4 [i_2 - 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((min((((/* implicit */unsigned int) var_8)), (var_6))), (((/* implicit */unsigned int) arr_9 [17U] [i_8] [i_7])))))));
                arr_28 [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_10 [i_7])) != (((/* implicit */int) arr_10 [i_7])))));
                arr_29 [i_7] [i_8] = ((/* implicit */unsigned long long int) ((signed char) 3353211395U));
            }
        } 
    } 
    var_21 *= ((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
}
