/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247219
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 3231152169U)) : (var_1))) - (3231152159ULL)))))) ? (max((var_14), (((/* implicit */int) var_3)))) : (min((((/* implicit */int) var_9)), (((((/* implicit */int) var_12)) - (((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7976390877360457846ULL)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (signed char)103)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))) < (min((((/* implicit */unsigned int) arr_0 [i_0])), (7U)))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((arr_3 [i_1] [i_0]) ? (((arr_0 [i_1]) - (arr_0 [i_0]))) : (arr_0 [i_0])));
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0])) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (min((((/* implicit */unsigned long long int) -1409863445)), (13534038413666999840ULL)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 2] [i_4 + 2] [i_4])) ? (((((/* implicit */_Bool) 11386419965558988587ULL)) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 2] [i_4 - 2] [i_4])) : (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_4 - 2] [i_4])))) : (((((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 1] [i_4 - 3] [i_4])) >> (((((/* implicit */int) (unsigned short)40172)) - (40169)))))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0])))) + (((/* implicit */int) arr_9 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_0] [i_2] [i_3]), (arr_3 [i_2] [i_0]))))) : (min((((/* implicit */long long int) arr_5 [i_0] [i_2] [i_3])), (arr_12 [i_0] [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (-1409863421) : (((/* implicit */int) (unsigned short)32756)))))));
                        var_24 &= ((/* implicit */int) 10217263637758347065ULL);
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) arr_3 [i_2] [i_0])) : (((/* implicit */int) (unsigned short)40172)))), (((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [i_0]))))) ? (arr_4 [i_0] [i_2]) : (((/* implicit */unsigned long long int) min((-8078508840341978847LL), (((/* implicit */long long int) 1409863445)))))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_2]))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6ULL)) || (((/* implicit */_Bool) (unsigned char)254))));
            arr_17 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_5] [i_5])) ? (arr_10 [i_0]) : (arr_10 [i_0])));
        }
        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_20 [i_0] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) : (arr_4 [i_0] [i_6]))), (((((/* implicit */_Bool) arr_20 [i_0] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20041))) : (arr_4 [i_0] [i_6])))));
            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_6] [i_6])) ? (arr_12 [i_6] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_6] [i_0])))))) ? (arr_5 [i_6] [i_0] [i_0]) : (((/* implicit */int) arr_9 [i_6]))))) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_6])) : (((((13534038413666999862ULL) << (((((/* implicit */int) (short)-31106)) + (31113))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20718))))));
            var_30 = max((min((arr_10 [i_0]), (((/* implicit */unsigned long long int) ((arr_3 [i_6] [i_0]) ? (((/* implicit */int) (unsigned short)8042)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_6] [i_6] [i_6]))))))), (arr_10 [i_0]));
        }
        arr_21 [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
    }
    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7]))) - (((((13534038413666999850ULL) > (((/* implicit */unsigned long long int) arr_22 [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (short)-12019))))) : (((((/* implicit */_Bool) arr_0 [i_7])) ? (1944842783055874211ULL) : (((/* implicit */unsigned long long int) arr_19 [i_7])))))))))));
        var_32 = arr_18 [i_7] [i_7];
        arr_25 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_7])) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57221)) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7] [i_7]))) != (1228877112U))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            arr_28 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8])) ? (arr_4 [i_7] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57221)))))) ? (arr_20 [i_7] [i_8] [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 3 */
            for (unsigned short i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                var_33 = ((((/* implicit */_Bool) (unsigned short)61843)) ? (((((/* implicit */_Bool) arr_24 [i_7] [i_8])) ? (arr_5 [i_7] [i_7] [i_8]) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_12 [i_7] [i_9])) ? (517140667) : (((/* implicit */int) (unsigned short)8042)))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 14; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        {
                            arr_38 [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_10] [i_8] [i_11] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31105))) : (arr_20 [i_7] [i_8] [i_9])))) ? (((((/* implicit */_Bool) (unsigned short)40163)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (arr_22 [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11] [i_10] [i_9] [i_8] [i_7])))));
                            var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)36)) ? (8746908786365292285ULL) : (((/* implicit */unsigned long long int) 106591784U)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) arr_30 [i_7] [i_8] [i_7])))))));
                            arr_39 [i_7] [i_10] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) arr_36 [i_8] [i_11]);
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 106591784U)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 6972648424888099289LL)) ? (((((/* implicit */_Bool) -4963854531085983582LL)) ? (arr_20 [i_7] [i_8] [i_9]) : (arr_24 [i_9] [i_7]))) : (((/* implicit */unsigned int) ((774507246) ^ (((/* implicit */int) (signed char)122))))))))));
                var_37 = ((/* implicit */int) ((((/* implicit */int) arr_11 [i_7] [i_8] [i_9] [i_8])) > (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_12 = 3; i_12 < 12; i_12 += 1) 
            {
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 3621132904750860999ULL)) ? (13334788027683186203ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1724)))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    for (unsigned char i_14 = 4; i_14 < 13; i_14 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_7 + 1])) << (((((/* implicit */int) arr_32 [i_14 - 4] [i_8] [i_12])) - (48608)))));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) | (((((/* implicit */_Bool) 6376085752954506544ULL)) ? (((/* implicit */unsigned long long int) 9110028606069811351LL)) : (arr_4 [i_7] [i_12])))));
                            var_41 *= ((/* implicit */unsigned int) arr_1 [i_7]);
                            arr_49 [i_7] [i_13] [i_12] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_7])) ? (arr_10 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_12] [i_12] [i_7])))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned long long int) arr_46 [i_12] [i_12] [i_12] [i_8] [i_7]);
                arr_50 [i_7] [i_8] [i_8] [i_7] = ((/* implicit */unsigned long long int) arr_12 [i_7] [i_8]);
            }
            for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
            {
                var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) arr_2 [i_15] [i_8] [i_7]))));
                var_44 = ((/* implicit */unsigned int) 1890868876);
                var_45 *= ((/* implicit */int) (_Bool)1);
                var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)39653)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_7] [i_8] [i_8] [i_7]))))))) : (0ULL)));
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1845662022)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5208722657030563770LL)))) ? (((((/* implicit */_Bool) arr_43 [i_7] [i_8] [i_8] [i_15] [i_15])) ? (((/* implicit */long long int) arr_43 [i_7] [i_7] [i_7] [i_8] [i_15])) : (5208722657030563770LL))) : (arr_15 [i_8] [i_7])));
            }
        }
        var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2737471762U)) ? (((/* implicit */int) arr_41 [i_7] [i_7] [i_7] [i_7 + 1])) : (((/* implicit */int) arr_7 [i_7]))));
    }
}
