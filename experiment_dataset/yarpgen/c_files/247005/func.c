/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247005
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
    for (long long int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((long long int) (signed char)-23));
                var_16 |= ((/* implicit */unsigned char) ((int) ((_Bool) arr_2 [10] [10])));
            }
        } 
    } 
    var_17 = ((/* implicit */int) 13061012008505941921ULL);
    var_18 = ((/* implicit */unsigned short) var_3);
    var_19 |= ((/* implicit */int) ((short) 858975888U));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        for (int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned long long int) arr_14 [i_2] [i_5]);
                        var_21 |= ((/* implicit */signed char) ((unsigned long long int) 1105361019U));
                        var_22 -= ((/* implicit */int) arr_5 [i_2 - 1]);
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) (unsigned char)54);
                        var_24 = ((/* implicit */unsigned long long int) arr_5 [i_4]);
                        arr_18 [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_11 [i_3]);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */short) arr_14 [i_2] [22U]);
                        var_26 = arr_8 [i_2];
                        var_27 |= ((/* implicit */unsigned int) ((long long int) arr_16 [i_2] [i_2] [i_2]));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_28 += ((/* implicit */signed char) -627215196837594098LL);
                            var_29 = ((/* implicit */unsigned long long int) arr_17 [i_2 + 1] [9LL] [i_3] [i_3]);
                        }
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_30 ^= ((/* implicit */int) arr_24 [i_2] [i_9] [i_2] [i_3] [i_2] [i_9] [i_2]);
                            var_31 = arr_12 [i_2] [i_2] [i_3];
                        }
                        var_32 = ((/* implicit */short) arr_9 [i_3]);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) 627215196837594097LL))));
                        var_34 |= ((/* implicit */unsigned short) ((signed char) (unsigned char)30));
                    }
                    for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */int) arr_12 [i_3] [i_2 - 1] [i_3]);
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 4; i_12 < 23; i_12 += 2) 
                        {
                            var_36 = ((/* implicit */_Bool) ((signed char) arr_16 [(unsigned char)16] [(unsigned char)16] [i_12]));
                            var_37 = ((/* implicit */_Bool) 627215196837594093LL);
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) ((unsigned long long int) 0U)))))));
                        }
                        var_39 -= ((/* implicit */signed char) ((int) ((_Bool) (unsigned char)30)));
                    }
                    var_40 = ((/* implicit */_Bool) (signed char)-7);
                }
                for (unsigned int i_13 = 1; i_13 < 21; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 2; i_14 < 22; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            {
                                var_41 *= ((unsigned int) (_Bool)1);
                                var_42 = ((/* implicit */int) 858975888U);
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned long long int) ((int) arr_24 [i_2] [i_2 - 1] [i_3] [i_3] [i_13] [i_3] [(_Bool)1]));
                    var_44 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) (short)7168)));
                }
                for (signed char i_16 = 2; i_16 < 20; i_16 += 1) 
                {
                    var_45 = ((/* implicit */int) arr_20 [i_2 - 1]);
                    var_46 = ((/* implicit */unsigned char) 9165535072417682244LL);
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (short i_18 = 4; i_18 < 22; i_18 += 2) 
                        {
                            {
                                var_47 = ((/* implicit */int) arr_14 [i_3] [i_16]);
                                var_48 = ((/* implicit */signed char) -6800110122179254078LL);
                                var_49 = ((/* implicit */unsigned short) ((_Bool) arr_21 [i_3]));
                            }
                        } 
                    } 
                    var_50 += ((/* implicit */long long int) (short)-17628);
                }
                arr_54 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) 9176244569916390529ULL));
            }
        } 
    } 
}
