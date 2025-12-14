/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247680
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) 6198372818775892895LL);
        var_21 -= (!(((/* implicit */_Bool) ((max((0ULL), (((/* implicit */unsigned long long int) 6198372818775892895LL)))) / (arr_1 [i_0])))));
        var_22 -= ((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)0))))));
    }
    for (short i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((long long int) var_8)) == (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
        arr_4 [(short)14] &= min((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1 + 1]))))), (((-6198372818775892895LL) + (((6198372818775892895LL) + (-6198372818775892894LL))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        var_24 *= ((/* implicit */signed char) (+(((unsigned int) max(((signed char)-112), (((/* implicit */signed char) var_13)))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 6198372818775892895LL))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (short i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)0)))) && (((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_5] [i_6]))));
                            var_26 = ((/* implicit */unsigned int) (_Bool)0);
                        }
                    } 
                } 
            } 
            var_27 -= ((/* implicit */short) (_Bool)1);
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) 0ULL))));
            arr_20 [2ULL] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % ((-9223372036854775807LL - 1LL))));
            arr_21 [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) (signed char)12);
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2 + 1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 1])))));
            /* LoopSeq 2 */
            for (short i_8 = 4; i_8 < 19; i_8 += 1) 
            {
                var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-3569639542673573949LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-14477)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)2] [i_8] [i_8 - 2]))) : ((-(16777216LL)))));
                arr_26 [i_7] [i_7] |= ((/* implicit */unsigned short) -56743268534953735LL);
            }
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 4) 
                {
                    arr_31 [i_7] [i_9] [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */short) (+(((unsigned long long int) 9223372036854775807LL))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-30)))))));
                }
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (short)-32611))));
            }
            var_33 = ((/* implicit */signed char) arr_16 [i_2] [i_2 - 1] [i_7] [i_7]);
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                var_34 = ((/* implicit */short) (+(arr_16 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1])));
                /* LoopSeq 2 */
                for (short i_12 = 1; i_12 < 17; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_39 [i_2] [i_2 + 1] [i_2 + 1] [1LL] [i_2] [i_2 + 1] = ((/* implicit */int) (short)-18588);
                        var_35 = ((/* implicit */unsigned long long int) ((long long int) -3388959074045653417LL));
                    }
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~(((/* implicit */int) arr_12 [i_2 - 1] [i_12 - 1] [i_12 + 3] [i_12])))))));
                }
                for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    var_37 = ((/* implicit */unsigned long long int) var_12);
                    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_11])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_14)))))));
                }
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3326219131U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_10))));
            }
            for (int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_17 = 2; i_17 < 16; i_17 += 2) 
                    {
                        arr_52 [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967295U)) % (var_2)));
                        arr_53 [(signed char)6] [i_7] [14ULL] [i_16] [16LL] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [10LL] [12LL] [i_17 + 1]))));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((long long int) ((((var_2) + (9223372036854775807LL))) >> (((var_8) - (2314283550098310506LL)))))))));
                    }
                    arr_54 [i_2] [i_7] [i_15] [i_2] = ((/* implicit */signed char) ((3326219131U) << (0U)));
                }
                /* LoopNest 2 */
                for (short i_18 = 2; i_18 < 18; i_18 += 2) 
                {
                    for (unsigned short i_19 = 2; i_19 < 19; i_19 += 2) 
                    {
                        {
                            arr_62 [i_19] [3LL] [i_15] [i_7] [18LL] = ((/* implicit */unsigned int) arr_27 [i_18] [2LL] [i_18]);
                            var_41 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-21958)) + (2147483647))) << (((((-3388959074045653417LL) + (3388959074045653440LL))) - (23LL)))));
                            arr_63 [18U] [18U] [i_15] [13LL] [i_19 + 1] = ((/* implicit */short) 7573256190727247398LL);
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */unsigned long long int) arr_49 [i_2 + 1] [i_2 + 1] [(short)14] [i_2 + 1] [3U] [i_7] [i_2]);
        }
        for (unsigned short i_20 = 4; i_20 < 19; i_20 += 3) 
        {
            var_43 = ((/* implicit */long long int) max((18446744073709551615ULL), (6ULL)));
            var_44 = ((/* implicit */long long int) max((var_44), (((long long int) (+(((/* implicit */int) ((short) var_0))))))));
            var_45 += ((/* implicit */unsigned char) (-(((0ULL) >> (((3388959074045653419LL) - (3388959074045653371LL)))))));
        }
        /* vectorizable */
        for (short i_21 = 0; i_21 < 20; i_21 += 1) 
        {
            arr_70 [i_21] = ((/* implicit */short) arr_30 [i_2]);
            var_46 += ((/* implicit */short) arr_36 [i_2] [i_2] [i_2] [i_21]);
        }
        var_47 = ((/* implicit */long long int) ((int) var_14));
    }
}
