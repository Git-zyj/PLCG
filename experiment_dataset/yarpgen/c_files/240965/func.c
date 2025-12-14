/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240965
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
    var_17 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (-3078515844912912162LL) : (((/* implicit */long long int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) var_9);
                    var_20 = ((/* implicit */short) ((arr_9 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) : (var_5)));
                    var_21 += ((/* implicit */long long int) arr_4 [i_1]);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) max((-3078515844912912143LL), (((/* implicit */long long int) arr_11 [0LL]))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_24 [i_3] [i_3] [i_6] [i_3] = ((((/* implicit */_Bool) (-(-4)))) ? (((/* implicit */unsigned long long int) arr_14 [i_3])) : (((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_4 + 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_4])) : (arr_21 [i_3] [i_4] [i_5]))));
                        var_23 ^= ((/* implicit */unsigned short) (-(var_15)));
                    }
                } 
            } 
            arr_25 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_14 [i_4 - 1]) : (arr_14 [i_4 + 1])))) ? (((arr_14 [i_4 + 1]) / (arr_14 [i_4 + 3]))) : ((-(arr_14 [i_4 + 3])))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 3; i_7 < 22; i_7 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_26 [i_3] [i_7] [i_7 + 1]))));
            /* LoopSeq 2 */
            for (int i_8 = 2; i_8 < 23; i_8 += 4) 
            {
                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) var_14)) ? (673588330U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [20ULL] [i_7] [5]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7 + 1] [i_8 + 2])))));
                var_26 = var_3;
                arr_31 [i_3] [i_7] [i_8] = ((((/* implicit */_Bool) arr_16 [i_7 + 2] [i_7 + 3] [i_7 - 3])) ? (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_3] [i_3]))) : (-3078515844912912143LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7 + 2]))));
                arr_32 [i_3] [(_Bool)1] [i_8] [(short)9] = ((/* implicit */long long int) arr_23 [0] [(short)20] [i_8] [i_8 - 1] [i_8 - 1]);
                var_27 = ((/* implicit */long long int) arr_22 [i_7 + 2] [i_7 + 2] [i_7 - 3] [i_8 + 2] [i_3] [i_8]);
            }
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                arr_37 [i_7 - 2] [(unsigned char)10] [i_9] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_3]))));
                var_28 = ((((/* implicit */_Bool) arr_15 [i_3] [i_9] [i_9])) ? (arr_15 [i_3] [i_3] [i_9]) : (arr_15 [i_3] [i_7] [12LL]));
                var_29 = ((/* implicit */int) ((unsigned int) arr_33 [i_3] [i_7 - 3]));
            }
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_30 = ((/* implicit */_Bool) var_8);
            arr_41 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) == (((/* implicit */int) (unsigned char)181))));
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)0)))))))));
            arr_42 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_3] [i_3] [i_3])) ? (arr_35 [i_10] [i_10] [i_10]) : (arr_35 [i_10] [0U] [19LL])));
        }
        var_32 = ((/* implicit */long long int) arr_29 [i_3] [i_3] [(unsigned short)12] [i_3]);
    }
}
