/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204641
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((unsigned char) min((arr_11 [i_0] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0])))))))))));
                                var_18 -= ((/* implicit */unsigned int) arr_2 [i_3] [i_4]);
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((max((arr_7 [i_4] [i_2] [i_0]), (((/* implicit */unsigned int) ((signed char) arr_5 [i_0] [i_4] [i_0]))))), (max((max((arr_5 [i_0] [i_4] [i_0]), (arr_5 [i_0] [i_4] [i_4]))), (min((arr_11 [i_4] [i_0] [i_3] [i_3] [i_4]), (arr_5 [i_0] [i_0] [i_0]))))))))));
                                var_20 ^= ((/* implicit */int) ((signed char) (unsigned char)53));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_0] |= ((unsigned int) min((max((arr_3 [0U] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0]))), (arr_3 [i_0] [i_0] [i_2])));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) max((arr_1 [i_0]), (arr_2 [i_0] [i_0])))), (arr_3 [i_0] [i_0] [i_0]))), (min((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((signed char) arr_6 [i_0] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) arr_2 [i_0] [i_1])), (max((arr_17 [i_0] [i_1] [i_1] [i_0] [i_6]), (((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_5] [i_0] [i_6])))))));
                                arr_19 [i_0] [i_0] [i_1] [i_0] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_1] [(unsigned char)11])))))), (arr_3 [i_0] [i_1] [i_0])));
                                arr_20 [i_0] [i_5] [i_1] [i_1] [i_1] [i_0] [i_0] &= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (signed char)-123)), (9U))), (arr_5 [i_0] [i_0] [i_0])));
                                arr_21 [i_0] [i_0] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) min((arr_5 [i_1] [i_1] [i_1]), (max((min((((/* implicit */unsigned int) arr_18 [i_1] [i_1] [6U] [1U] [i_1])), (arr_4 [i_5]))), (((/* implicit */unsigned int) max((arr_10 [i_0] [(unsigned char)8] [(unsigned char)8] [i_5]), (((/* implicit */unsigned char) arr_1 [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((((unsigned int) var_13)), (max((4294967290U), (((/* implicit */unsigned int) 1))))));
}
