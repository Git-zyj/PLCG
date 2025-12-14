/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20649
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
    var_17 = ((/* implicit */signed char) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)252))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */short) var_1);
            var_18 = ((/* implicit */unsigned char) var_16);
        }
        for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_19 = ((/* implicit */short) arr_7 [i_0] [i_2]);
            arr_11 [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_2]))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_3] [i_3])), ((+(((/* implicit */int) arr_12 [i_3]))))));
        /* LoopSeq 3 */
        for (short i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            var_21 *= ((/* implicit */signed char) min((min((arr_13 [i_4 + 2] [i_4 + 2]), (arr_16 [(unsigned short)6]))), (((/* implicit */short) max((arr_15 [i_4 + 3] [i_4 + 3] [12ULL]), (arr_15 [i_4 - 1] [i_4 + 1] [(short)2]))))));
            var_22 = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_4]);
            arr_17 [i_4] = min((arr_14 [i_4]), (((/* implicit */unsigned int) max((arr_13 [i_3] [i_4]), (((/* implicit */short) var_8))))));
        }
        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_23 ^= ((/* implicit */short) (~(((/* implicit */int) min((arr_15 [i_5 + 4] [i_5 + 4] [0ULL]), (arr_15 [i_5 + 4] [i_5] [(_Bool)1]))))));
            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_14 [i_5 + 3]), (var_14))))));
            arr_20 [i_5 + 1] = ((/* implicit */unsigned int) min((((/* implicit */short) arr_12 [i_3])), (min((((/* implicit */short) arr_15 [4ULL] [i_5] [4ULL])), (min((arr_13 [i_5] [i_3]), (arr_13 [i_3] [i_3])))))));
        }
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_16 [0ULL]))))));
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_5))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) arr_19 [i_7]);
        var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), ((~(var_7)))));
        var_29 *= ((/* implicit */short) arr_14 [i_7]);
        var_30 = ((/* implicit */signed char) min((arr_19 [i_7]), (((/* implicit */unsigned int) arr_13 [i_7] [i_7]))));
        var_31 ^= ((/* implicit */unsigned char) min((min((637824506U), (((/* implicit */unsigned int) (unsigned char)128)))), (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))), (arr_14 [i_7])))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_32 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), ((-(min((var_7), (((/* implicit */unsigned long long int) arr_31 [i_8] [i_8]))))))));
            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_0))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            arr_34 [0] = ((/* implicit */unsigned short) var_13);
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned short) arr_28 [i_11]);
                var_35 = ((/* implicit */unsigned short) arr_35 [i_8] [i_10] [i_10] [i_10]);
            }
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
            {
                arr_39 [i_8] [i_8] [i_8] [i_12] = ((/* implicit */_Bool) arr_32 [(_Bool)1] [i_10]);
                var_36 = ((/* implicit */long long int) var_16);
            }
        }
        for (int i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */short) min(((~(((/* implicit */int) (short)287)))), (((/* implicit */int) min((arr_42 [i_13]), (arr_42 [i_13]))))));
            var_38 = ((/* implicit */unsigned long long int) arr_31 [i_8] [i_13]);
        }
        for (int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
        {
            var_39 ^= ((/* implicit */_Bool) arr_37 [i_8]);
            var_40 = min((((/* implicit */unsigned long long int) arr_33 [i_8] [i_8])), (16499693050957337089ULL));
        }
        arr_47 [i_8] |= ((/* implicit */unsigned long long int) var_4);
        var_41 = ((/* implicit */long long int) arr_45 [i_8]);
        var_42 = ((/* implicit */short) min((var_42), (min((arr_31 [i_8] [i_8]), (max((arr_31 [i_8] [i_8]), (((/* implicit */short) arr_42 [(short)6]))))))));
    }
}
