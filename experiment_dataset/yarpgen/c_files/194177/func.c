/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194177
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_19 = var_14;
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)0)) : (arr_5 [i_2 + 1])));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                {
                    var_21 = ((/* implicit */int) var_16);
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 3; i_4 < 20; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 1] = ((/* implicit */_Bool) (unsigned char)63);
                        arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_3] [(unsigned short)6] [i_3 + 2] [i_3] [i_3] [i_3] [i_2])) ^ (((/* implicit */int) (_Bool)0))));
                    }
                }
                var_22 += ((/* implicit */unsigned char) var_16);
            }
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_5] [i_0] [8ULL] [i_5] [i_5])) ? (arr_10 [i_0] [i_0] [i_5] [i_5]) : (((/* implicit */int) var_10))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) arr_15 [i_0] [i_0] [6LL] [6LL] [i_0] [i_0] [i_5])) - (194))))))));
            arr_21 [i_0] [i_5] = ((/* implicit */long long int) ((arr_7 [i_5] [i_5] [i_5] [i_5]) ^ (((/* implicit */int) (_Bool)1))));
        }
        arr_22 [6LL] = (_Bool)0;
        var_24 |= ((/* implicit */_Bool) arr_19 [i_0] [i_0]);
        arr_23 [i_0] [i_0] = ((/* implicit */_Bool) var_2);
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_6])))) ? ((-(arr_10 [i_6] [i_6] [i_6] [(_Bool)1]))) : ((~(((/* implicit */int) var_6))))));
        var_26 = ((/* implicit */long long int) (~((+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))))))));
    }
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 2121073505)) ? (arr_9 [i_7] [(_Bool)1] [(unsigned char)14] [i_7]) : (var_0)));
        arr_30 [i_7] [i_7] = arr_26 [i_7] [i_7];
        var_28 = ((/* implicit */int) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned short)7654))))) ^ (var_5)))));
    }
    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(-9479735)))))) ? (((/* implicit */int) ((max((((/* implicit */int) arr_8 [i_8] [i_8] [i_9])), (697942683))) <= (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_11))))))))));
            arr_39 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) -15LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)6)) != (var_18)))))) : (((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) var_1)), (arr_4 [i_8] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))))));
            arr_40 [i_9] [i_9] = ((unsigned char) min((((int) (unsigned short)43896)), (arr_11 [i_8] [i_9] [i_8] [i_9] [i_8])));
            var_30 -= ((/* implicit */unsigned long long int) var_17);
        }
        arr_41 [i_8] = ((/* implicit */long long int) var_4);
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((18446744073709551604ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))))))))));
    }
}
