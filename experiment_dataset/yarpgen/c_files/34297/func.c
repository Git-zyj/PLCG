/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34297
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
    var_19 = ((/* implicit */_Bool) var_18);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
            arr_7 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_1]));
            var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
            arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) : (((/* implicit */int) (short)32750))));
            arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_2 [i_0]);
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_2] [i_0] [i_0])) : ((~(var_5)))));
            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2])) : (var_12)))) ? (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (short)-32741)) : (((/* implicit */int) (short)0)))) : ((~(var_2)))));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                var_22 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
                arr_16 [i_3 + 1] = ((/* implicit */_Bool) var_17);
                arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_3 - 1] [i_3 + 1] [i_3 + 1]))));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_2] [i_3 - 1]))))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_23 [i_5] [i_4] [i_4] [i_3 - 1] [i_3 - 1] [i_2] [i_5] = arr_12 [i_0] [i_2];
                        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0]))) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 2] [i_2])) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_3 - 1]))));
                    }
                    var_25 &= ((/* implicit */unsigned long long int) arr_22 [i_2] [i_4]);
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_3 - 1])))));
                }
            }
            for (signed char i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                arr_27 [i_0] = ((/* implicit */unsigned short) var_7);
                arr_28 [i_0] [i_2] [i_6 + 3] = ((/* implicit */signed char) arr_4 [i_0] [i_2] [i_6]);
            }
        }
        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
        {
            var_27 -= ((/* implicit */signed char) ((int) arr_0 [i_7]));
            arr_32 [i_0] [i_7] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-32751))))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_7] [i_8])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                arr_35 [i_0] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_7] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_34 [i_0] [i_7] [i_8]))));
                arr_36 [i_0] [i_0] = ((/* implicit */int) var_0);
                var_29 = var_10;
                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_7] [i_7] [i_0] [i_0]))));
            }
            for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                arr_39 [i_0] [i_9 + 2] [i_9 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                arr_40 [i_9 + 2] [i_7] [i_7] [i_0] = ((((/* implicit */_Bool) var_8)) ? (((arr_4 [i_0] [i_7] [i_9 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_7] [i_7] [i_9 + 1]))) : (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
                arr_41 [i_0] [i_7] [i_9 + 2] [i_9 - 1] = ((/* implicit */_Bool) arr_22 [i_9] [i_0]);
                arr_42 [i_9 + 1] [i_7] [i_7] = ((/* implicit */long long int) arr_4 [i_0] [i_7] [i_9]);
            }
            var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65526))));
        }
        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_31 [i_0]))));
    }
    var_33 += ((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)9), (((/* implicit */unsigned short) (short)0)))))));
    var_34 = ((/* implicit */int) var_1);
}
