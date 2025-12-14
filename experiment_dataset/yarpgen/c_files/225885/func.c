/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225885
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) / (((/* implicit */int) min((var_0), (var_4)))))))))));
    var_12 = (((((-(var_3))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned char) var_1))) - (116))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (signed char)102)) | (((/* implicit */int) (signed char)63)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? ((-(min((((/* implicit */int) (unsigned short)56796)), (var_10))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 + 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)173)))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [(short)9])) <= (((/* implicit */int) arr_8 [i_2] [i_2] [i_1]))))))))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (2907038812176933069LL) : (arr_7 [i_1 - 1]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) (signed char)63)) >= (((/* implicit */int) ((arr_1 [i_1]) || ((_Bool)1)))))))));
            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? ((+(((/* implicit */int) arr_11 [i_1])))) : (((((/* implicit */int) arr_11 [i_3])) >> (((/* implicit */int) arr_1 [i_1 - 2]))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8739)) >> (((/* implicit */int) (unsigned char)4)))))));
            var_20 = ((/* implicit */unsigned int) 2907038812176933066LL);
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_1 [i_1 - 4]) ? (((/* implicit */int) arr_9 [9] [9])) : (((/* implicit */int) var_0))))) / (arr_7 [i_1 - 4]))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_17 [i_5] = ((((/* implicit */int) arr_15 [i_4])) < (((((/* implicit */int) arr_14 [i_4 + 1])) ^ (((/* implicit */int) arr_14 [i_4 + 1])))));
            var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_14 [i_4])), ((~(((/* implicit */int) arr_14 [i_5]))))));
            var_23 = ((short) min((var_9), (arr_13 [i_4 + 1])));
            var_24 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_13 [i_5]))))));
            var_25 -= ((/* implicit */long long int) min((min((((int) (short)4773)), (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_13 [i_4]))))))), (((/* implicit */int) (unsigned short)56793))));
        }
        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) var_10);
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_19 [i_4] [i_4] [i_4 + 1]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_7]) ? (-6585505224626412111LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4 + 1] [i_7])))))) && (((/* implicit */_Bool) (unsigned char)85))));
            var_29 = ((/* implicit */int) ((((-2147483626) / (((/* implicit */int) arr_16 [i_4] [i_4 + 1])))) <= (((2147483626) - (((/* implicit */int) (unsigned short)7))))));
            arr_22 [i_4 + 1] = arr_18 [i_4 + 1] [i_4 + 1];
            arr_23 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_4] [i_4]))));
            /* LoopSeq 3 */
            for (long long int i_8 = 1; i_8 < 17; i_8 += 2) 
            {
                var_30 = ((((/* implicit */_Bool) arr_25 [i_8] [i_4 + 1] [i_4 + 1] [i_7])) ? (((/* implicit */int) arr_25 [i_8 - 1] [i_4] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) var_2)));
                arr_26 [i_4 + 1] [i_4 + 1] [i_7] [i_8 + 1] = ((/* implicit */_Bool) arr_15 [i_8 - 1]);
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    for (short i_10 = 4; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_31 -= ((/* implicit */unsigned int) 6450794545238589468LL);
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((unsigned int) arr_29 [i_4] [i_4 + 1] [i_4] [i_4] [i_4] [i_10 + 1] [i_10])))));
                            var_33 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) var_9)))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_8 - 1] [i_4])) ? (((/* implicit */int) arr_25 [i_7] [i_8] [i_8] [i_8 - 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)61)))))));
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (~(((/* implicit */int) ((arr_28 [i_8] [i_7] [i_7] [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))))))));
            }
            for (long long int i_11 = 1; i_11 < 17; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 1) 
                {
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483626)) ? (((((/* implicit */int) var_4)) << (((arr_30 [i_12 - 3] [i_7]) - (1012779136))))) : (((/* implicit */int) arr_35 [i_4] [i_4 + 1] [i_11] [i_11] [i_12] [i_12 - 1]))));
                    var_37 = ((/* implicit */signed char) var_1);
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 2; i_13 < 16; i_13 += 2) 
                    {
                        arr_38 [i_4] [i_7] [i_4] [i_4] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_11 - 1] [i_13] [(_Bool)1])) % (((/* implicit */int) arr_19 [i_11 - 1] [i_11 - 1] [i_13]))));
                        var_38 = ((/* implicit */long long int) ((unsigned int) arr_30 [i_11 - 1] [i_4 + 1]));
                        var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_11 + 1] [i_13 + 2] [i_11]))));
                        var_40 ^= arr_31 [i_4] [(_Bool)1] [i_11 - 1] [(_Bool)1];
                    }
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        arr_41 [i_12] [i_7] [10ULL] [10ULL] [i_7] = ((/* implicit */long long int) arr_30 [i_11] [i_12]);
                        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (signed char)-64))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        var_42 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_4] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) : (arr_28 [i_4] [i_4] [i_4] [i_15]))));
                        var_43 = ((/* implicit */unsigned char) ((signed char) ((arr_30 [i_4 + 1] [(short)17]) - (((/* implicit */int) var_5)))));
                        var_44 = ((/* implicit */unsigned short) ((unsigned int) arr_18 [i_12 + 1] [(short)1]));
                        arr_44 [13U] [i_7] [i_12] [i_15] [i_15] [i_12] [i_12] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2147483625)))) ? (((/* implicit */int) arr_13 [i_4 + 1])) : (((/* implicit */int) arr_42 [i_4] [i_7] [i_11 + 1] [i_7] [i_7] [i_12 + 1] [i_7]))));
                    }
                }
                arr_45 [i_4] [i_7] [i_11] [i_11] = ((/* implicit */unsigned char) arr_43 [i_4 + 1] [16LL] [i_4] [i_11 + 1] [i_11] [0LL] [i_11 - 1]);
                /* LoopNest 2 */
                for (short i_16 = 2; i_16 < 17; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        {
                            arr_50 [i_11] [i_7] [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) ((2907038812176933069LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_16] [i_16 - 2] [i_11] [i_4] [i_16]))))));
                            arr_51 [i_7] [i_4] = ((/* implicit */unsigned long long int) arr_15 [i_4]);
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_11 + 1] [i_11 + 1] [i_4 + 1])) / (((/* implicit */int) arr_27 [i_11 - 1] [i_11 + 1] [i_4 + 1])))))));
                /* LoopSeq 3 */
                for (short i_18 = 2; i_18 < 14; i_18 += 2) 
                {
                    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2907038812176933066LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49431))) : (-2907038812176933070LL)));
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) (unsigned char)251))));
                    var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [i_4 + 1] [i_7] [i_4 + 1])) || (((/* implicit */_Bool) arr_46 [i_4] [i_4])))))));
                }
                for (signed char i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_19] [i_7] [i_7])) ? (((/* implicit */int) arr_13 [i_4])) : (arr_30 [i_7] [i_11 + 1])))) ? (((((/* implicit */_Bool) arr_16 [i_7] [i_11])) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) arr_15 [i_4])))))))));
                    arr_56 [i_4] = ((/* implicit */short) (-(((/* implicit */int) (!((_Bool)1))))));
                }
                for (unsigned char i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        var_50 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_4] [i_4 + 1] [i_11 + 1])) & ((~(((/* implicit */int) (_Bool)1))))));
                        var_51 ^= ((/* implicit */unsigned char) arr_29 [i_4] [i_4] [i_7] [i_4] [i_20] [i_21] [i_20]);
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_52 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_8)) - (23))))) >= (((var_6) & (((/* implicit */int) (unsigned char)90))))));
                        var_53 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_59 [i_4] [i_7] [i_4] [i_20] [i_22])) <= (((/* implicit */int) var_9))))) > (((/* implicit */int) ((_Bool) arr_20 [i_7])))));
                        var_54 |= ((/* implicit */short) (+(((unsigned long long int) (unsigned char)194))));
                        var_55 = ((/* implicit */unsigned char) arr_55 [i_4] [i_7] [i_11] [i_20] [i_22]);
                    }
                    var_56 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) < (((((/* implicit */int) (unsigned char)152)) - (((/* implicit */int) (_Bool)1))))));
                }
            }
            for (signed char i_23 = 1; i_23 < 15; i_23 += 2) 
            {
                var_57 = ((/* implicit */long long int) arr_19 [i_7] [i_7] [i_4]);
                var_58 ^= ((arr_28 [i_4 + 1] [i_23 + 2] [i_23 + 2] [i_23]) - (arr_28 [i_4 + 1] [i_23 + 1] [(_Bool)1] [i_4 + 1]));
            }
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_59 -= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_67 [i_4 + 1] [i_4 + 1])) ^ (((/* implicit */int) arr_67 [i_4 + 1] [i_4 + 1])))), (((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) arr_67 [i_4 + 1] [i_4 + 1]))))));
            arr_71 [i_4 + 1] [i_4 + 1] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_15 [(unsigned char)13])) >= (((/* implicit */int) ((_Bool) arr_52 [i_4] [i_24])))))) > (arr_43 [i_4 + 1] [i_24] [i_4] [i_4] [i_4] [i_24] [i_4 + 1])));
            var_60 = ((/* implicit */unsigned short) max((var_60), (((/* implicit */unsigned short) min((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1971739710283222291ULL))))), (arr_30 [i_4] [i_24]))))));
        }
    }
}
