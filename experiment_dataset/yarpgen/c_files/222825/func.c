/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222825
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
    var_14 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 2])), (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 1])))))))));
                    var_16 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_0 - 1])), (arr_0 [i_0 + 3] [i_0 - 2])))) ? (((/* implicit */int) min((arr_6 [i_0 - 3]), (var_6)))) : (((/* implicit */int) min((arr_6 [i_0 - 3]), (arr_6 [i_0 - 2])))));
                    var_17 -= ((((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 3])))) <= (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_2])) : (((/* implicit */int) arr_6 [i_0 + 1])))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0 - 2] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) : (((((/* implicit */int) arr_3 [i_0 - 1] [3U] [i_0 - 1])) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1]))))));
                }
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned short) max((arr_9 [i_0 + 2]), (min((((/* implicit */signed char) arr_6 [i_0 + 3])), (var_12)))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                            {
                                var_20 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) min(((_Bool)1), ((_Bool)1))))), (((unsigned int) var_4))));
                                var_21 -= ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_3] [i_3] [i_5]);
                                arr_17 [i_0 + 3] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) min((arr_11 [i_4] [i_5]), (min((6021742636814034942LL), (((/* implicit */long long int) (_Bool)1))))));
                                var_22 = arr_11 [i_3] [i_5];
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 3]))))) : (((unsigned int) var_10))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned long long int) min(((short)11627), (((/* implicit */short) (_Bool)1))));
                                var_25 = ((/* implicit */_Bool) min((arr_4 [i_1] [i_4]), (((unsigned char) var_10))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                            {
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 2] [i_1]))));
                                arr_22 [i_0] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_7])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_7])) : (var_10))) / (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_0 - 3]))));
                                var_27 = ((/* implicit */unsigned char) ((var_0) - (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 2]))));
                                var_28 = ((/* implicit */long long int) ((unsigned char) (signed char)-9));
                                var_29 = ((/* implicit */short) ((unsigned int) arr_10 [i_0 - 1] [i_1] [i_4]));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
