/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51571
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_9 [5U] [5U] [5U] [i_2] [5U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))) > ((~(min((arr_5 [i_3] [i_2] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]))))))));
                            var_18 = ((long long int) arr_4 [(short)5] [i_1] [i_1] [8U]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 2] [i_1] [i_1])) ? (max((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [(unsigned short)1] [i_1] [i_1 + 1]))), (((/* implicit */unsigned int) arr_8 [(unsigned short)3] [i_1] [i_0] [i_1])))) : (arr_1 [(unsigned short)18])))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_6)))))))))));
                arr_10 [i_0] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((arr_1 [i_1 + 3]), (((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 1] [i_1 - 1]))))) ? (max((((/* implicit */unsigned long long int) arr_7 [(unsigned short)5] [(unsigned short)6] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 3])), (arr_6 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_0])) ? (((/* implicit */int) ((unsigned short) 0U))) : (((/* implicit */int) ((short) arr_7 [i_1] [i_0] [i_0] [i_0] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_14);
    var_22 = ((/* implicit */unsigned long long int) var_1);
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((var_12) > (max((((/* implicit */unsigned int) var_11)), (var_3))))))));
}
