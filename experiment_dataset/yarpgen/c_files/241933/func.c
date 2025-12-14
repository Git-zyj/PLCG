/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241933
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) var_3);
                var_16 = ((/* implicit */_Bool) 5529144276311922603ULL);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2 - 1] [i_2 - 1] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (5529144276311922603ULL))), (((((/* implicit */unsigned long long int) arr_1 [i_2 - 1])) + (var_10))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) min((((signed char) var_3)), (((/* implicit */signed char) arr_7 [i_2])))));
    }
    /* vectorizable */
    for (long long int i_3 = 4; i_3 < 15; i_3 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 - 4])) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) (!(var_1))))));
        var_18 += ((/* implicit */unsigned long long int) ((((4294967292U) != (arr_12 [i_3 - 4]))) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3])))));
    }
    for (long long int i_4 = 4; i_4 < 15; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_16 [i_4])), (var_13)))) || (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) arr_14 [i_4 - 3] [i_4 - 3])) : (var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_4])))))))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 = (((+(arr_20 [i_4] [i_4]))) != (429266962U));
                var_21 = ((/* implicit */unsigned short) (_Bool)0);
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (short i_8 = 2; i_8 < 16; i_8 += 1) 
                    {
                        {
                            arr_26 [i_4] [i_5] [i_8] [i_5] [i_8] = ((/* implicit */unsigned long long int) var_9);
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) & (3865700333U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_8]))))) : (((/* implicit */int) arr_0 [i_4 - 4]))));
                            arr_27 [i_8] [i_8] [i_5] [i_8] [i_4] = arr_17 [i_4 - 2] [i_4 - 3];
                        }
                    } 
                } 
                arr_28 [i_5] [i_6] = (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (4294967286U))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (unsigned int i_10 = 2; i_10 < 14; i_10 += 1) 
                {
                    {
                        arr_36 [i_4] [i_5] [i_5] [i_10 + 2] = ((/* implicit */_Bool) var_3);
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(arr_34 [i_4] [i_4] [i_4] [i_4]))))));
                        var_24 += ((/* implicit */unsigned long long int) ((arr_19 [i_4 - 2] [i_10 - 2] [i_10 - 2] [i_10]) % (((/* implicit */long long int) 4294967292U))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 14; i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned short) 2147483136U);
                            arr_47 [i_14] [i_14] [i_12] [i_14] [i_4 + 1] = ((/* implicit */unsigned char) arr_39 [i_4 - 2]);
                            var_26 ^= ((/* implicit */unsigned int) arr_21 [i_14]);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 2147484142U)) || (((/* implicit */_Bool) var_5))))) % (((/* implicit */int) var_12))));
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 14; i_15 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                arr_53 [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((+(5529144276311922603ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                var_28 = (!(((/* implicit */_Bool) arr_15 [i_15 - 1])));
            }
            var_29 = (~(var_10));
            arr_54 [i_15] |= ((/* implicit */long long int) ((((4294967292U) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2147450880)))) : (((unsigned int) arr_49 [i_15]))));
        }
        var_30 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : (arr_52 [i_4 - 4] [i_4 + 2] [i_4 + 2] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10)));
        var_31 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_42 [i_4 - 4]) % (((/* implicit */long long int) 429266962U))))), (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13))) - (22U)))) + (min((6507478482583998410ULL), (((/* implicit */unsigned long long int) 3865700309U))))))));
    }
}
