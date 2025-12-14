/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38565
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    var_16 = arr_2 [i_2];
                    var_17 = ((/* implicit */short) min(((-(var_8))), (((/* implicit */long long int) min((((/* implicit */int) var_5)), (arr_1 [i_0]))))));
                }
                for (short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_1])) + (2147483647))) << (((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3]))))) - (16907912563357028777ULL)))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_4 [i_0]))));
                    var_19 = ((/* implicit */short) arr_5 [i_1] [i_1]);
                    var_20 = ((/* implicit */signed char) arr_2 [i_0]);
                    var_21 = (unsigned short)65535;
                    var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35996)) || (((/* implicit */_Bool) arr_11 [i_0]))))) >> (((/* implicit */int) var_12))))), (max((((/* implicit */unsigned int) (_Bool)0)), (2693244788U)))));
                }
                arr_13 [i_0] |= ((/* implicit */_Bool) arr_6 [i_0]);
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        var_23 ^= ((/* implicit */signed char) (-(arr_15 [i_5 + 4] [i_5 + 1] [i_5 + 4] [i_5 + 2])));
                        var_24 = ((/* implicit */signed char) arr_16 [i_5]);
                        var_25 = ((/* implicit */int) ((long long int) arr_15 [i_5 + 3] [i_5] [(signed char)3] [i_5]));
                        arr_19 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_1] [i_1] [i_5])) ? (((/* implicit */int) arr_18 [i_5 - 1] [i_1] [i_1] [i_5 + 4])) : (((/* implicit */int) arr_14 [i_5 - 1] [(_Bool)1] [i_4] [i_5]))));
                        var_26 = ((/* implicit */short) arr_15 [i_4] [i_5] [i_5 + 3] [i_5]);
                    }
                    for (unsigned short i_6 = 4; i_6 < 17; i_6 += 3) 
                    {
                        var_27 -= ((/* implicit */int) 5U);
                        arr_23 [i_0] [i_1] [i_4] [i_6] = (i_1 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-38)) ? (((((/* implicit */int) arr_5 [i_1] [i_1])) << (((((/* implicit */int) (short)24449)) - (24431))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_18 [i_6] [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)35996)))))) / (((((/* implicit */int) var_15)) | (((/* implicit */int) arr_20 [i_4] [i_4]))))))) : (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-38)) ? (((((((/* implicit */int) arr_5 [i_1] [i_1])) + (2147483647))) << (((((((/* implicit */int) (short)24449)) - (24431))) - (18))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_18 [i_6] [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)35996)))))) / (((((/* implicit */int) var_15)) | (((/* implicit */int) arr_20 [i_4] [i_4])))))));
                        arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_20 [i_0] [(_Bool)1]);
                        arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_6 + 1])) % (((/* implicit */int) arr_9 [i_4] [i_4] [i_1]))));
                    }
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (unsigned short)12))));
                    var_29 = ((/* implicit */unsigned short) arr_6 [i_4]);
                }
            }
        } 
    } 
    var_30 = ((/* implicit */short) var_12);
    var_31 |= ((/* implicit */short) var_2);
}
