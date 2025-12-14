/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41847
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned int) var_11)), (arr_2 [i_1]))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_10 [i_3]))));
                        var_21 = ((/* implicit */unsigned int) max((max((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))), (((int) arr_8 [i_0] [i_0])))), (min((arr_1 [i_1 - 2]), (((/* implicit */int) var_13))))));
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */unsigned short) ((arr_4 [i_0] [i_1 - 2] [i_1 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 21; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) var_1);
                        var_23 = ((/* implicit */_Bool) arr_3 [i_4 - 1]);
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        arr_16 [i_0] [i_1 + 1] [i_0] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned char)10])) && (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_5]))))), (max((arr_5 [i_1] [i_1 - 1] [i_2]), (((/* implicit */unsigned int) (_Bool)1)))))));
                        arr_17 [i_5] [i_1] [i_1] [i_0] = var_17;
                        var_24 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_12 [i_5] [(unsigned short)12] [i_1] [i_1] [(unsigned short)17])) * (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1])))) ^ (arr_15 [i_0] [i_1] [i_0] [i_0])));
                    }
                    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (~(arr_15 [19U] [i_1] [i_2] [i_2])))) & (min((((/* implicit */long long int) var_19)), (arr_4 [i_0] [i_1] [i_2]))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 1] [i_1 + 1])) & (((/* implicit */int) arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 2])))))));
                    var_26 = ((/* implicit */int) (short)6839);
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) -8023341252194814383LL);
    var_28 = ((/* implicit */long long int) var_15);
}
