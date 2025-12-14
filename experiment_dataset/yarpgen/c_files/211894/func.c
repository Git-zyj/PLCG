/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211894
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)219)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))), (((/* implicit */int) ((arr_3 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28038)) && (((/* implicit */_Bool) var_0)))))))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            var_17 *= ((/* implicit */unsigned int) var_3);
            var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-39)) + (67)))));
            var_19 = ((/* implicit */int) -8603004801302195689LL);
            var_20 = ((/* implicit */long long int) ((signed char) arr_3 [i_1 - 1] [i_1 - 1]));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))) ? (max((((/* implicit */unsigned int) (unsigned short)17955)), (1353884580U))) : (arr_3 [i_0] [i_0])));
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned char) var_7)), ((unsigned char)127))));
                arr_12 [i_0] [i_2] [i_3] = ((unsigned int) var_13);
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_22 = ((/* implicit */signed char) var_7);
                    var_23 = ((/* implicit */long long int) min((((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), ((~((~(var_16)))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_12);
                    var_24 = ((/* implicit */int) var_5);
                }
            }
            var_25 = max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) arr_6 [i_2])));
            var_26 = ((/* implicit */_Bool) ((signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) ^ (1353884580U)))));
        }
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            var_27 += ((((((/* implicit */_Bool) arr_7 [i_0])) && (((var_7) || (((/* implicit */_Bool) (unsigned short)47581)))))) && (((/* implicit */_Bool) max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) 3373455405U)))))))));
            var_28 = ((/* implicit */signed char) 3373455405U);
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_29 |= ((/* implicit */signed char) min((8603004801302195689LL), (((/* implicit */long long int) (+(((((/* implicit */_Bool) 2941082716U)) ? (var_16) : (arr_9 [i_0] [i_0] [i_0]))))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) arr_10 [i_0] [i_6] [i_7])), ((-(8603004801302195689LL)))))));
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_7] [i_7]))) : (var_12))))))));
                var_32 = ((/* implicit */signed char) max((var_32), (var_11)));
                var_33 += ((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) ((unsigned short) -1LL)))))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_13))))));
            }
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 7; i_8 += 3) 
        {
            var_34 = ((/* implicit */signed char) min((var_34), (((signed char) ((((/* implicit */unsigned long long int) -730464159563360647LL)) > (18446744073709551614ULL))))));
            var_35 = ((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0]));
        }
        for (int i_9 = 2; i_9 < 7; i_9 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_10 = 1; i_10 < 7; i_10 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */_Bool) max((arr_18 [i_9 - 1] [i_9 - 1]), ((+(arr_18 [i_9 - 2] [i_9 + 1])))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    var_37 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_8 [i_9 + 1] [i_9 + 1] [i_9 + 1]), (arr_8 [i_9 + 2] [i_9 - 2] [i_9 + 2]))))));
                    var_38 = ((/* implicit */long long int) (unsigned short)65535);
                    arr_33 [i_0] [i_10] [i_10 + 2] = ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) arr_26 [i_0] [i_0] [i_10 + 2]))), ((-(arr_16 [i_10] [i_10 - 1] [i_10 - 1])))));
                }
            }
            for (signed char i_12 = 1; i_12 < 7; i_12 += 3) /* same iter space */
            {
                var_39 ^= ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9 - 1] [i_12 - 1]))) : (arr_35 [i_0]))), (min((((/* implicit */long long int) var_13)), (-8603004801302195695LL)))))));
                var_40 = ((/* implicit */unsigned int) var_7);
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_41 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((-(var_16))))));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    arr_45 [i_14] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + ((+(0LL)))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 1; i_15 < 8; i_15 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) arr_44 [i_0] [i_9 - 2] [i_9 + 1] [i_15 - 1])) / (((/* implicit */int) max((arr_44 [i_9] [i_9 - 2] [i_9 + 1] [i_15 + 2]), (((/* implicit */short) var_10))))))))));
                        var_43 = var_5;
                    }
                }
                for (signed char i_16 = 3; i_16 < 7; i_16 += 2) 
                {
                    var_44 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) arr_44 [i_16 + 1] [i_16 + 1] [i_9 + 2] [i_16 + 1]))) : ((-(((/* implicit */int) arr_44 [i_16 + 2] [i_13] [i_9 - 1] [i_16 + 2]))))));
                    var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_49 [i_16 + 1] [i_13] [i_9 + 2] [i_0])))) == (arr_35 [i_13]))))));
                    arr_53 [i_0] [i_0] = ((((/* implicit */_Bool) (((!(arr_25 [i_0] [i_9 - 2] [i_13]))) ? (((/* implicit */long long int) arr_20 [i_9 + 1] [i_0] [i_16 - 3])) : (((((/* implicit */_Bool) var_16)) ? (-8603004801302195689LL) : (((/* implicit */long long int) arr_9 [i_0] [i_9 + 2] [i_0]))))))) ? (var_16) : (2502763242U));
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 3; i_17 < 9; i_17 += 1) 
                    {
                        var_46 = max((arr_10 [i_17 - 3] [i_17 - 3] [i_16 + 2]), ((-(arr_10 [i_16 - 3] [i_17 - 1] [i_16 - 3]))));
                        var_47 += max((max((-1), (((/* implicit */int) ((signed char) var_8))))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_25 [i_9] [i_9 + 1] [i_9 - 2])), ((unsigned char)219)))));
                        var_48 = ((/* implicit */long long int) var_15);
                    }
                    for (unsigned char i_18 = 3; i_18 < 9; i_18 += 3) 
                    {
                        var_49 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) ((unsigned short) arr_3 [i_13] [i_16 + 2]))) : ((+(((/* implicit */int) (_Bool)0)))))))));
                        var_50 = ((/* implicit */unsigned short) var_14);
                    }
                    arr_58 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned int) min((((_Bool) 3576618233U)), (((((/* implicit */_Bool) (signed char)103)) || (((/* implicit */_Bool) ((unsigned long long int) var_9)))))));
                }
            }
            for (int i_19 = 4; i_19 < 7; i_19 += 3) 
            {
                var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) (unsigned char)10))));
                var_52 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((unsigned char) -5354407243696418124LL))) <= ((+(((/* implicit */int) var_1)))))));
            }
            arr_61 [i_9] [i_9 - 2] = ((/* implicit */long long int) -9);
            arr_62 [i_9 - 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_11)) & (((/* implicit */int) var_1)))) == (((((/* implicit */_Bool) arr_27 [i_9 + 1])) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) var_4))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_53 = ((/* implicit */_Bool) -1LL);
            var_54 -= ((/* implicit */int) arr_43 [i_0]);
            var_55 ^= -1;
        }
        for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 1) 
        {
            var_56 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) == (8603004801302195697LL))))));
            var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_10))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)40007))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0]))))), (9378716326355560955ULL))))))));
            arr_68 [i_21] = ((/* implicit */unsigned int) (+(max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) var_10))))));
            /* LoopSeq 3 */
            for (int i_22 = 1; i_22 < 9; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 10; i_23 += 3) 
                {
                    for (unsigned int i_24 = 2; i_24 < 8; i_24 += 2) 
                    {
                        {
                            var_58 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_55 [i_24 + 2] [i_24 - 1] [i_24 + 2] [i_24 - 1] [i_24 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_55 [i_24 + 2] [i_24 - 2] [i_24 + 2] [i_24 + 1] [i_24 - 2])))));
                            var_59 = ((((/* implicit */_Bool) 8068698935675199107ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (((((arr_0 [i_22]) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))) ? (min((((/* implicit */unsigned int) arr_75 [i_21] [i_23] [i_23] [i_22 + 1] [i_21] [i_21] [i_21])), (var_12))) : (min((3865127422U), (((/* implicit */unsigned int) arr_20 [i_22] [i_21] [i_24 + 2])))))));
                        }
                    } 
                } 
                var_60 = ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_10), ((signed char)116))))) < (((((/* implicit */_Bool) 6571958603896726742LL)) ? (4000996098U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) ? (((/* implicit */int) arr_19 [i_0])) : (((/* implicit */int) var_15)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_25 = 0; i_25 < 10; i_25 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_26 = 0; i_26 < 10; i_26 += 1) 
                    {
                        var_61 = ((/* implicit */unsigned char) var_5);
                        var_62 = ((/* implicit */signed char) (-(3267607884U)));
                        var_63 *= ((/* implicit */_Bool) 8589934591LL);
                        var_64 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_22 + 1])) * (((/* implicit */int) var_8))));
                    }
                    var_65 -= ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_55 [i_21] [i_25] [i_0] [i_21] [i_0])))));
                    arr_81 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) arr_57 [i_22 + 1] [i_25] [i_22 + 1] [i_25] [i_25])) : ((+(((/* implicit */int) var_11))))));
                    arr_82 [i_0] [i_21] = ((/* implicit */unsigned int) arr_8 [i_22 + 1] [i_0] [i_0]);
                }
                for (unsigned short i_27 = 2; i_27 < 7; i_27 += 2) 
                {
                    arr_86 [i_21] [i_22 - 1] [i_21] [i_21] [i_21] = ((/* implicit */int) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)55)) || (((/* implicit */_Bool) min((-1LL), (6763011412832110003LL)))))))));
                    var_66 = min((((unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((/* implicit */unsigned long long int) (unsigned char)4)));
                    arr_87 [i_0] [i_21] [i_22 - 1] [i_21] = ((/* implicit */unsigned short) (signed char)-77);
                    var_67 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_11)))));
                }
            }
            for (signed char i_28 = 0; i_28 < 10; i_28 += 2) 
            {
                var_68 = min(((~(arr_27 [i_28]))), (((/* implicit */int) (signed char)31)));
                arr_90 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_85 [i_0] [i_21] [i_21] [i_0] [i_21] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_21] [i_28] [i_21] [i_0] [i_28]))) : (4850715275957488903LL)))) ? (min((min((((/* implicit */long long int) var_12)), (1099511627775LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 718349062U))))), (var_8)))))));
                var_69 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min(((unsigned char)144), (((/* implicit */unsigned char) var_7))))) ? (((/* implicit */int) arr_66 [i_0] [i_21] [i_0])) : (((/* implicit */int) var_7)))));
                var_70 = ((/* implicit */int) 3363760835306857446LL);
            }
            for (int i_29 = 2; i_29 < 9; i_29 += 3) 
            {
                arr_93 [i_0] [i_0] [i_21] = ((signed char) -1LL);
                var_71 = ((/* implicit */int) (_Bool)0);
            }
        }
        for (unsigned int i_30 = 2; i_30 < 9; i_30 += 1) 
        {
            arr_97 [i_30 + 1] [i_0] [i_0] = ((/* implicit */_Bool) max((arr_84 [i_0] [i_0] [i_30 - 2] [i_0]), (((/* implicit */int) arr_5 [i_0] [i_30 - 1] [i_30 - 2]))));
            arr_98 [i_0] [i_30 - 2] [i_30 + 1] = ((/* implicit */int) ((unsigned long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_30 - 2] [i_0] [i_30 - 1] [i_0]))) : (718349063U))));
        }
    }
    var_72 = ((/* implicit */int) var_0);
}
