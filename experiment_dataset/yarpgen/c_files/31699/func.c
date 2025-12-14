/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31699
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
    var_20 = ((/* implicit */unsigned short) var_4);
    var_21 &= ((/* implicit */unsigned long long int) ((long long int) (!(var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_22 |= ((/* implicit */signed char) ((_Bool) ((arr_11 [i_0] [i_1] [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (13075953969480331664ULL))));
                        var_23 |= ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_2 [i_2]))) + (((/* implicit */int) arr_11 [10ULL] [10ULL] [i_0] [i_3]))));
                        arr_13 [i_2] [i_1] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */int) arr_3 [i_3]);
                        arr_14 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5370790104229219954ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0]))) : (var_14)));
                        arr_15 [i_2] = ((/* implicit */short) var_5);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            arr_20 [i_0] [i_0] [i_4] |= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_18 [i_4 + 1])) || (((/* implicit */_Bool) arr_19 [i_4] [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4 + 1])) ? (var_14) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_7]))));
                            var_25 = ((/* implicit */short) ((unsigned long long int) arr_18 [i_4 + 1]));
                            arr_30 [i_4] [i_6] = 5370790104229219957ULL;
                        }
                    } 
                } 
                arr_31 [i_0] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_9 [i_5] [i_4] [i_4 + 1]))));
            }
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                var_26 = ((/* implicit */int) (-(var_5)));
                var_27 = (!(((/* implicit */_Bool) ((short) var_7))));
            }
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            arr_38 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            arr_39 [i_9] [i_0] = ((/* implicit */int) (-((+(5370790104229219963ULL)))));
            arr_40 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_0])) ? (arr_34 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32408)))));
            var_28 = ((/* implicit */_Bool) ((short) 13075953969480331669ULL));
        }
        arr_41 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0] [i_0] [i_0]) : (4294967279U)));
        arr_42 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((5370790104229219991ULL) << (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)7] [i_0])) + (15709)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 13075953969480331640ULL)))) : (((var_19) ^ (var_13)))));
    }
    var_29 *= ((/* implicit */signed char) max((((5370790104229219952ULL) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (var_13)))))), (5370790104229219977ULL)));
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        for (short i_11 = 2; i_11 < 10; i_11 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_12 = 3; i_12 < 9; i_12 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_12 [i_10] [i_10] [i_10] [i_10] [i_12] [i_12])), (15ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_31 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_26 [i_10] [i_11] [i_12 - 3] [i_13] [i_14])) ? (((/* implicit */unsigned long long int) arr_10 [i_11])) : (7335913133451812672ULL))));
                                arr_54 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) 13075953969480331653ULL)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                                var_32 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_10] [i_11] [i_11] [i_13] [i_14] [i_12])) ? (((/* implicit */int) arr_45 [1ULL] [i_13])) : (((/* implicit */int) arr_46 [i_12 - 2] [i_14])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                                var_33 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_46 [i_10] [i_10]), ((_Bool)1)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)55))))) ? (((/* implicit */int) (unsigned short)621)) : (((/* implicit */int) ((short) var_15)))))));
                                arr_55 [i_10] [(unsigned short)4] [i_12] [i_12] [i_14] [i_14] = ((/* implicit */unsigned long long int) (signed char)124);
                            }
                        } 
                    } 
                    arr_56 [i_12] [i_12] [i_11 - 2] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_18)) ? (13075953969480331636ULL) : (arr_47 [i_10]))))))));
                    var_34 = max((((/* implicit */unsigned long long int) ((_Bool) (!(arr_36 [i_10] [i_12] [i_10]))))), (((((var_12) < (13075953969480331640ULL))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))));
                }
                /* vectorizable */
                for (int i_15 = 3; i_15 < 9; i_15 += 2) /* same iter space */
                {
                    arr_59 [i_15] = ((/* implicit */_Bool) arr_52 [i_15 + 3] [i_11 + 2]);
                    arr_60 [i_15] [i_11] [i_11] [i_10] &= ((/* implicit */signed char) ((arr_21 [i_10]) - (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        arr_64 [i_10] = ((/* implicit */unsigned char) ((arr_46 [i_15 + 1] [i_11]) ? (((/* implicit */int) arr_46 [i_10] [i_15 + 1])) : (((/* implicit */int) arr_46 [i_11] [(short)10]))));
                        var_35 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                        arr_65 [i_10] [i_15] [i_15] [i_16] [i_15] = ((/* implicit */signed char) var_10);
                    }
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        arr_68 [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */short) arr_17 [i_15 + 2] [i_15]);
                        var_36 = arr_4 [(signed char)5] [i_17];
                        arr_69 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 13075953969480331649ULL))) ? (5370790104229219991ULL) : (5370790104229219991ULL)));
                    }
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        arr_74 [i_18] [i_15] [i_11] [i_10] [i_10] = ((short) arr_19 [i_10] [i_11 + 2]);
                        arr_75 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_57 [i_15 - 2] [i_15 + 3] [i_15 + 2])) : (((/* implicit */int) arr_57 [i_11 + 2] [i_11 + 1] [i_11 + 1]))));
                        arr_76 [i_10] [i_11 + 2] [i_15] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_18))));
                        var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_72 [i_15 + 2] [i_11 + 1] [i_11] [(_Bool)1] [(short)8]))));
                    }
                    for (int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        arr_79 [i_11] &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) 0LL)) ^ (7799449119141157024ULL))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_11] [i_11] [i_11] [i_11 + 2]))) ? (((var_7) + (var_6))) : (((((/* implicit */_Bool) arr_70 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) arr_17 [i_11] [i_19])) : (arr_73 [i_10] [i_11] [i_15 + 1] [i_10])))));
                    }
                }
                arr_80 [i_10] = ((/* implicit */unsigned char) arr_52 [(signed char)6] [i_11 + 1]);
                arr_81 [i_11] [i_11] [i_10] = ((/* implicit */unsigned int) arr_6 [i_10] [i_11]);
            }
        } 
    } 
}
