/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30007
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((min((arr_5 [i_3] [i_3 + 1] [i_4 - 1] [i_4 - 1]), (arr_5 [i_1] [i_3 - 1] [i_4 + 1] [i_1]))) ? (((/* implicit */int) arr_5 [i_1] [i_3 - 2] [i_4 - 1] [i_3 - 2])) : ((-(((/* implicit */int) arr_5 [i_2] [i_3 - 2] [i_4 + 1] [i_4])))))))));
                                var_16 += ((/* implicit */short) ((min((arr_0 [i_4 + 1]), (arr_0 [i_4 + 1]))) < (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [10ULL]))) % (arr_0 [i_3 - 2]))), (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))) : (arr_3 [i_3])))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (max(((-(max((arr_4 [i_3] [i_1] [i_4 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_2] [i_3])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3 - 1] [(unsigned char)10] [i_3] [i_3 - 2] [i_3])) | (((/* implicit */int) max((arr_6 [i_1] [i_2] [i_4 - 1]), (((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_3 - 2] [i_3]))))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((arr_8 [(unsigned char)6] [(unsigned short)2] [(unsigned char)6]) | ((~((+(arr_0 [i_0]))))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) (((-(arr_7 [(_Bool)1] [i_1] [i_0] [i_5] [i_5] [i_5]))) % (((/* implicit */unsigned long long int) (((-(2147483630))) + (((arr_5 [(unsigned char)2] [i_1] [i_1] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_0] [i_0])))))))));
                    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_2 [i_0] [(unsigned char)1] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))))))));
                }
                var_21 = arr_4 [i_0] [i_0] [i_0];
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
}
