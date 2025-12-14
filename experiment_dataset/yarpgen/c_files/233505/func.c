/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233505
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */unsigned int) ((int) ((int) min((arr_1 [i_0] [i_1 + 1]), (((/* implicit */unsigned short) arr_6 [i_2] [i_1] [i_0 + 1] [i_2]))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_4);
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), (var_12)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                            {
                                arr_23 [i_3] [i_3] [i_3] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_6] [i_4]))));
                                arr_24 [i_3] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_11 [i_3])))))), (var_10)));
                            }
                            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                            {
                                var_15 = ((/* implicit */long long int) var_13);
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) 4042110358376628543ULL)) ? (2147483647U) : (2147483654U)))));
                            }
                            arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967277U)) <= (15032097199313424923ULL)))) & (((/* implicit */int) arr_18 [i_3] [i_5] [i_5] [i_4]))));
                            /* LoopSeq 2 */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (unsigned char)74))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_11)))))), (min((((/* implicit */unsigned short) arr_31 [i_6] [i_5])), (var_5))))))));
                                arr_33 [i_3] [i_3] [i_3] [i_5] [i_3] &= ((/* implicit */unsigned short) arr_14 [i_3] [i_4]);
                                arr_34 [i_3] [i_3] [i_5] [i_6] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned int) var_4))))) != (arr_21 [i_9] [i_6] [i_9] [i_9] [i_4] [i_3])));
                            }
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                            {
                                arr_38 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) 1925347361)) : (((/* implicit */unsigned int) ((min((arr_11 [i_10]), (arr_35 [i_10] [i_5] [i_3] [i_3]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3])) || (((/* implicit */_Bool) (unsigned char)163))))))))));
                                arr_39 [i_10] [i_4] = ((/* implicit */long long int) var_0);
                            }
                            arr_40 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
                arr_41 [i_4] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (arr_17 [i_4] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
}
