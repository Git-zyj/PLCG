/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26095
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) arr_1 [i_0]);
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_8 [i_1 - 1] [i_1 + 4] [i_3 + 1] [i_3 - 1]))));
                    }
                    for (int i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        arr_16 [(signed char)0] [i_1 + 3] [i_1 + 3] = ((/* implicit */short) max((arr_5 [i_1 + 4] [i_4 + 1]), (arr_5 [i_1 + 1] [i_4 - 1])));
                        var_21 = ((/* implicit */signed char) max((min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)65535))), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_4] [i_4 + 1] [i_0] [i_4]))));
                        var_22 = ((/* implicit */unsigned long long int) max((arr_13 [i_4]), (((/* implicit */int) max((arr_9 [i_1] [i_1] [(signed char)14] [i_4 - 1] [(signed char)14] [5U]), (((/* implicit */signed char) (_Bool)1)))))));
                    }
                    arr_17 [2] [i_1] [2] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0] [(short)9] [i_0]))));
                    var_23 |= ((/* implicit */int) (+(arr_8 [i_0] [i_0] [i_1] [(short)14])));
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_24 = max((arr_19 [i_1 + 1] [i_1 - 1] [i_1 + 3]), ((~(((/* implicit */int) (signed char)-1)))));
                    var_25 = ((/* implicit */unsigned int) arr_0 [(short)4]);
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_5 [i_0] [i_1]))));
                    var_27 = min((arr_3 [i_1 - 1]), (min((arr_3 [i_1 + 4]), (arr_3 [i_1 + 3]))));
                }
                var_28 = ((/* implicit */unsigned int) arr_1 [i_0]);
                arr_22 [i_1 + 3] [i_0] [i_0] = ((/* implicit */signed char) arr_18 [4] [9U] [4]);
                arr_23 [i_0] [i_1 + 2] = ((/* implicit */unsigned char) arr_13 [i_0]);
            }
        } 
    } 
    var_29 |= var_4;
}
