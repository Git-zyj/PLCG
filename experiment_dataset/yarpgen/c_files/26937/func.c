/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26937
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = min((min((((/* implicit */int) (signed char)-56)), (-1830392415))), (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)0)))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((5131383101236443042LL), (((/* implicit */long long int) max((-1198458033), (((/* implicit */int) (unsigned short)8281)))))));
                    arr_12 [i_0] [i_0 - 2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((unsigned short)57255), ((unsigned short)8281)))), (min((855058232U), (855058236U)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            arr_16 [i_3] [i_0 - 2] = ((/* implicit */unsigned short) (short)-22774);
            /* LoopSeq 3 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
            {
                arr_19 [(unsigned char)6] = ((/* implicit */_Bool) 855058225U);
                arr_20 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) 855058236U);
                arr_21 [i_0] [(short)8] = ((/* implicit */unsigned char) (short)31589);
            }
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_14 = ((/* implicit */signed char) 855058225U);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) 855058204U);
                            var_16 = ((/* implicit */unsigned long long int) (unsigned char)245);
                            var_17 = ((/* implicit */signed char) (unsigned short)29174);
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_18 = 855058204U;
                var_19 = ((/* implicit */int) 4170528462U);
            }
        }
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (unsigned char)166);
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (unsigned short)8276))));
            var_22 = 855058232U;
        }
        for (unsigned char i_11 = 2; i_11 < 15; i_11 += 4) 
        {
            arr_39 [(_Bool)1] = ((/* implicit */int) (signed char)84);
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
                {
                    arr_45 [i_9] [i_11] [i_11 - 1] [i_11] [i_13] = ((/* implicit */unsigned char) 3439909062U);
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 2; i_14 < 16; i_14 += 3) 
                    {
                        var_23 = ((/* implicit */short) (unsigned short)57267);
                        arr_48 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) (unsigned short)65529);
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 6681268227906086972ULL))));
                    }
                    arr_49 [i_9] [16ULL] = ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        arr_54 [i_9] [i_11] [i_12] [i_13] [i_11] [i_11 + 1] [i_12] = ((/* implicit */unsigned char) (short)32690);
                        var_25 -= ((/* implicit */_Bool) 855058209U);
                    }
                    arr_55 [i_13] [i_12] [i_11] [i_9] = ((/* implicit */short) (_Bool)1);
                }
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) 1855055189);
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) 4294967295U))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
                {
                    arr_61 [i_17] [i_11] [(unsigned char)4] = ((/* implicit */short) (signed char)-14);
                    var_28 = ((/* implicit */_Bool) 422607132U);
                }
                for (unsigned int i_18 = 0; i_18 < 17; i_18 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_19 = 1; i_19 < 15; i_19 += 3) 
                    {
                        arr_66 [i_19] [i_19] = ((/* implicit */short) (_Bool)1);
                        arr_67 [i_19] [i_9] [i_12] [i_11] [i_19] = ((/* implicit */_Bool) (unsigned short)57255);
                        var_29 = ((/* implicit */_Bool) (signed char)-23);
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (_Bool)1))));
                        var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_32 = ((/* implicit */short) 1780518159);
                        var_33 = ((/* implicit */int) (short)-7722);
                    }
                    arr_70 [i_18] [i_12] [i_11] [i_9] = ((/* implicit */_Bool) (unsigned char)0);
                    arr_71 [i_18] [(unsigned short)11] [i_11] [i_18] = ((/* implicit */int) (unsigned short)54964);
                }
            }
            for (int i_21 = 4; i_21 < 16; i_21 += 2) 
            {
                var_34 *= (short)7712;
                var_35 = ((/* implicit */unsigned long long int) (short)-22774);
            }
        }
        for (unsigned char i_22 = 0; i_22 < 17; i_22 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_23 = 0; i_23 < 17; i_23 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_24 = 0; i_24 < 17; i_24 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 17; i_25 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) 2082664712U);
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) 0))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 4; i_26 < 15; i_26 += 4) 
                    {
                        var_38 = ((/* implicit */long long int) 3408685433479875322ULL);
                        var_39 = ((/* implicit */unsigned long long int) (short)22774);
                    }
                }
                for (short i_27 = 0; i_27 < 17; i_27 += 3) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned int) (short)14231);
                    arr_88 [i_9] [(unsigned short)11] [i_22] [i_23] [i_22] [i_27] = ((/* implicit */unsigned char) (unsigned short)15294);
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) 3439909091U))));
                }
                /* LoopNest 2 */
                for (unsigned short i_28 = 0; i_28 < 17; i_28 += 4) 
                {
                    for (unsigned long long int i_29 = 1; i_29 < 16; i_29 += 4) 
                    {
                        {
                            arr_95 [i_29 - 1] [i_29] [i_23] [i_29] [i_9] = ((/* implicit */unsigned int) -1561266811);
                            arr_96 [i_9] [i_9] [i_29 + 1] [i_28] [i_28] [i_23] [i_29] = ((/* implicit */unsigned char) (short)22769);
                            var_42 = ((/* implicit */int) 7017453138881905857ULL);
                            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) 1595862099U))));
                            var_44 ^= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                var_45 = ((/* implicit */short) (_Bool)1);
            }
            for (unsigned char i_30 = 1; i_30 < 16; i_30 += 3) 
            {
                arr_99 [i_9] [i_22] [i_30] = (short)-7730;
                arr_100 [i_9] [i_9] [i_30 + 1] [i_30] = (_Bool)1;
                var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) 1063840175U))));
            }
            var_47 = ((/* implicit */short) (unsigned short)6);
        }
    }
    var_48 *= ((/* implicit */_Bool) var_11);
    var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) max((var_3), (min((((/* implicit */unsigned long long int) var_6)), (var_10))))))));
    var_50 = ((/* implicit */unsigned int) var_11);
    var_51 &= ((/* implicit */int) var_7);
}
