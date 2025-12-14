/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190057
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_1]))));
            arr_5 [i_0] [0U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned char)163))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((var_2) ? (((/* implicit */int) (unsigned short)219)) : (((/* implicit */int) (unsigned short)50487))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_10 [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((arr_0 [i_1]) ? (((((((/* implicit */int) var_13)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)163)) - (163))))) : (((int) (unsigned char)163))));
                arr_11 [(short)2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_3);
                arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_1]) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) > (0ULL)))) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_0]))));
                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) 191588811)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned char)92))));
            }
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)92))) ? (7074508079448552106ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -411453478)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))))));
        }
        for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((((arr_1 [(unsigned char)7]) * (((/* implicit */int) arr_0 [i_0])))) | (((/* implicit */int) var_2)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [3U] [i_3 + 2] [3U])) & (((/* implicit */int) arr_8 [9LL] [i_3 + 2] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_4]))))))) : (var_17)));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((691568222U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_4 [i_4])))))))) ? (((70368677068800LL) >> ((((-(var_11))) - (3710710792U))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 411453478)) ? (1765394240) : (((/* implicit */int) (unsigned char)93)))))));
                        var_24 ^= ((/* implicit */signed char) (unsigned short)10633);
                        arr_24 [i_4] [i_4] [i_4] = var_14;
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */int) var_2)) >> ((~((~(((/* implicit */int) (_Bool)0)))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_26 ^= ((/* implicit */int) arr_18 [i_5] [i_4]);
                        var_27 = ((((/* implicit */_Bool) arr_7 [i_3 + 3] [(signed char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_20 [i_3 - 1] [i_4] [(short)2] [i_4]));
                        var_28 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_4] [i_4] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 3])) % (((/* implicit */int) arr_26 [i_3 + 4] [i_5] [i_5] [i_3 + 4] [i_3 + 2] [i_3 - 1]))));
                    }
                    arr_27 [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_15 [i_5] [i_0]) > (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_0]))))) | (((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 1])))))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 52063123U)) % (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)17)), (arr_15 [i_5] [i_5])))) ? (((arr_18 [i_4] [i_0]) % (((/* implicit */long long int) 4242904173U)))) : (((/* implicit */long long int) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                    var_30 *= ((/* implicit */_Bool) var_9);
                }
            }
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1765394240)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)92))));
        }
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_32 = arr_9 [i_9] [i_8] [(signed char)9];
                var_33 = ((/* implicit */_Bool) arr_18 [i_0] [i_0]);
            }
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
            {
                var_34 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)53)))))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (-191588811) : (((/* implicit */int) arr_17 [i_0] [i_8] [i_10]))));
                /* LoopSeq 1 */
                for (signed char i_11 = 3; i_11 < 10; i_11 += 1) 
                {
                    arr_39 [i_11] [i_10] [i_8] [i_8] [i_0] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_22 [i_0] [i_8] [i_11 + 1] [i_11] [i_0])))) >> (((((int) var_11)) - (584256491)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        arr_43 [i_0] [i_11] [3] = (!(((/* implicit */_Bool) arr_18 [i_0] [i_8])));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)76))));
                    }
                    arr_44 [i_0] [i_8] [i_11] [i_11] [i_8] [i_0] = ((/* implicit */unsigned short) ((arr_16 [i_11 - 2] [i_11] [i_11 + 2] [i_11 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                }
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
            {
                arr_47 [(short)1] [i_8] [i_13] [i_0] = ((/* implicit */signed char) ((((unsigned int) var_8)) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_36 [(short)9] [i_8] [4ULL] [i_13]))))))));
                var_37 = ((/* implicit */_Bool) ((unsigned char) -191588811));
                var_38 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                arr_48 [i_13] [i_8] &= ((/* implicit */unsigned int) arr_34 [i_13] [i_8] [i_0]);
            }
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) * (52063123U)))))) ? (min((arr_18 [i_0] [i_8]), (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))));
            arr_49 [i_8] [i_0] [i_0] = ((/* implicit */signed char) (+(max((arr_46 [i_0]), (((/* implicit */long long int) 191588811))))));
        }
        arr_50 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_20 [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (arr_14 [i_0]) : (1765394240)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0])))))) : (min((((/* implicit */unsigned int) var_16)), (var_8)))))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_30 [i_0] [i_0] [i_0])) : (var_5)))));
        arr_51 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_18 [i_0] [i_0]), (((/* implicit */long long int) arr_32 [11U]))))) ? (-3060689064632151811LL) : (((/* implicit */long long int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        var_40 = arr_54 [i_14] [i_14];
        var_41 = ((/* implicit */_Bool) ((((min((var_11), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_14] [i_14]))))) ? (((((/* implicit */_Bool) ((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)64)))) : ((-(((/* implicit */int) var_6)))))) : (((/* implicit */int) min((arr_55 [i_14]), (arr_55 [i_14]))))));
        arr_56 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_14] [i_14])) ? (((/* implicit */int) arr_53 [i_14] [i_14])) : (((/* implicit */int) arr_53 [i_14] [i_14]))))) % (min((((/* implicit */long long int) arr_54 [i_14] [i_14])), (max((3060689064632151811LL), (((/* implicit */long long int) (_Bool)0))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            var_42 = ((/* implicit */_Bool) (-(arr_57 [i_14] [i_14] [i_14])));
            var_43 = ((/* implicit */unsigned long long int) (+(4192256U)));
        }
    }
    var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) 3396889136U)) % (((((/* implicit */long long int) var_8)) - (var_17))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (unsigned char)163)))))))));
    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (signed char)67)))))))) : ((-(0U)))));
    var_46 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) var_10))))), (max((((/* implicit */unsigned int) (signed char)9)), (var_8)))));
    var_47 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)3308)) : (((/* implicit */int) var_3))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_3))))) : ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))))))));
}
