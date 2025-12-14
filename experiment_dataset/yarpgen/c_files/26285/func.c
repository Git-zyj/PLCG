/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26285
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
    var_18 = ((/* implicit */signed char) min((max((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)26385))))))), (((/* implicit */int) ((unsigned char) var_17)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 3] [i_4] [i_3 + 3] [i_4])) ? (((int) arr_10 [i_3 + 1] [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3])) : (((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 3] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 3] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 3] [i_3] [i_3] [i_3]))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [i_3 + 3] [i_3 + 1] [i_3 + 2] [i_3] [i_3]), (arr_10 [i_3 + 3] [i_3 + 1] [i_3 + 2] [(short)5] [i_2])))) || (((/* implicit */_Bool) (-(arr_4 [i_3] [i_3] [i_3 - 1]))))));
                            arr_15 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((short)-12898), (((/* implicit */short) var_16)))))))), (((((/* implicit */_Bool) (short)-996)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-996))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_4 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */int) var_15)) | (((/* implicit */int) arr_5 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)996))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-571)) ? (var_6) : (arr_4 [i_0] [i_1] [i_0]))) <= (((/* implicit */unsigned long long int) var_13)))))));
        }
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 3; i_6 < 19; i_6 += 3) 
            {
                for (int i_7 = 2; i_7 < 17; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_29 [i_8] [i_5] [i_6] [i_7] [i_5] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7607053367307738297LL)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_17 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_5] [i_0] [i_8] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_17 [i_5]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_6] [i_6]))) % (arr_8 [i_5]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_6] [i_7 + 1] [i_6] [i_0] [i_0])) | (((/* implicit */int) arr_20 [i_8] [i_5] [i_5]))))) ? (((((/* implicit */int) arr_24 [i_6] [i_5] [i_6] [i_5])) ^ (((/* implicit */int) (short)996)))) : ((~(((/* implicit */int) var_9))))))));
                            arr_30 [i_8] [i_7] [i_0] [i_5] [i_0] = ((/* implicit */int) ((max((min((arr_4 [i_0] [i_0] [i_6 - 1]), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) min(((short)-996), (((/* implicit */short) var_12))))))) >> (((((/* implicit */int) arr_23 [i_7 - 2] [i_8] [i_7 - 2] [i_8])) >> (((((((/* implicit */_Bool) arr_6 [(short)14] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_6])))) + (67)))))));
                            arr_31 [i_8] [i_7] [i_5] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? ((-(arr_11 [i_0] [i_5] [i_6 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_0] [i_8] [i_7] [i_5])) || (((/* implicit */_Bool) 921710634)))) && ((!(((/* implicit */_Bool) 8191LL))))))))));
                        }
                    } 
                } 
            } 
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_17 [i_5])))) % (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((arr_14 [i_5] [i_5] [i_0] [i_0] [i_0]) % (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0] [i_5] [i_5]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) var_16)) : (arr_28 [i_0] [i_5] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_5] [i_0] [i_5] [i_5]))) : (((unsigned long long int) 9ULL))))));
            arr_33 [i_0] = ((/* implicit */short) arr_23 [i_0] [i_0] [i_0] [i_5]);
        }
        arr_34 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))) - (((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0])) % (min((((/* implicit */unsigned long long int) arr_25 [i_0] [i_0])), (arr_4 [i_0] [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (long long int i_9 = 3; i_9 < 20; i_9 += 3) /* same iter space */
        {
            arr_37 [i_0] [i_0] [i_9] = ((max((arr_3 [i_9] [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [15ULL] [i_0] [i_0] [i_0] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9] [i_9] [i_0] [i_0]))) : (arr_2 [i_0])))))) >> (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(signed char)20] [i_0] [(signed char)20] [i_9 - 3])))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)988)) ? (((/* implicit */int) arr_9 [1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_9] [i_9 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_14 [i_0] [i_0] [i_0] [i_9] [i_9])))) : (((((/* implicit */_Bool) 415928986)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8181LL)) ? (308495168) : (((/* implicit */int) (short)988))))))))));
        }
        for (long long int i_10 = 3; i_10 < 20; i_10 += 3) /* same iter space */
        {
            arr_41 [i_10] [i_10] = ((/* implicit */signed char) min((min((((/* implicit */long long int) 885980091)), (arr_8 [i_10 - 3]))), (min((arr_8 [i_10 - 1]), (arr_8 [i_10 - 3])))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 4294967288U))) || (((/* implicit */_Bool) 9852011596950818504ULL))));
            var_23 ^= min((((/* implicit */int) ((signed char) min((((/* implicit */long long int) var_12)), (arr_6 [i_0] [i_0]))))), ((-(((/* implicit */int) (signed char)88)))));
            /* LoopSeq 2 */
            for (short i_11 = 2; i_11 < 19; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 1; i_12 < 20; i_12 += 2) 
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_10] [i_11 + 2] [i_12 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_10] [i_12]))) / (7245511518796227860LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))), ((-(arr_39 [i_11]))))))));
                    arr_49 [i_0] [i_10] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_11 + 1] [i_11 + 1] [i_11 + 1])), (arr_40 [i_12])))) ? (min((1053061660942791496ULL), (((/* implicit */unsigned long long int) arr_38 [i_12] [i_12] [i_12])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_10] [(signed char)19] [i_12])))))) ? (((min((arr_18 [i_0] [i_10] [i_0]), (((/* implicit */long long int) arr_47 [i_0] [i_11] [i_12])))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */long long int) ((((((/* implicit */int) ((signed char) var_8))) + (2147483647))) << (((arr_11 [i_10 - 1] [i_11 + 2] [i_12 + 1]) - (2201342749394296149LL))))))));
                    arr_50 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_11 - 1])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_11] [i_12 - 1])))) : (((/* implicit */int) ((((((/* implicit */long long int) arr_47 [i_12 + 1] [i_11] [i_10])) <= (-7687452447546753510LL))) && (((4294967295U) >= (((/* implicit */unsigned int) var_0)))))))));
                }
                var_25 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_11 + 2] [i_11] [i_11 + 2]))))) / (((/* implicit */int) ((unsigned char) arr_20 [i_11] [i_11 + 2] [i_11 + 2])))));
                var_26 = ((/* implicit */int) arr_46 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]);
                var_27 = ((/* implicit */signed char) var_0);
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_11 - 2] [i_11 + 1] [i_10 - 2] [i_10 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_10 - 1] [i_11] [i_11])))))) : (((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_11])) ? (arr_14 [i_0] [i_0] [i_10] [i_10 + 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-94)))))))) ? (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (short)27538)) ? (((((/* implicit */_Bool) -854117402)) ? (arr_25 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_43 [i_0] [i_11 - 2] [i_11 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)94)))))))));
            }
            for (short i_13 = 4; i_13 < 18; i_13 += 2) 
            {
                /* LoopSeq 4 */
                for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    arr_57 [i_0] [i_10] [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)93))))) ? (((/* implicit */long long int) max((arr_28 [i_0] [i_0] [i_10] [i_13] [i_14]), (arr_36 [i_13 + 3] [i_13 + 3] [i_10])))) : (((long long int) arr_12 [i_0] [i_10] [i_0] [i_14])))) << (((((min((((8191LL) * (((/* implicit */long long int) ((/* implicit */int) var_16))))), (((/* implicit */long long int) max((((/* implicit */short) arr_23 [i_14] [i_13] [i_0] [i_0])), (arr_51 [i_13] [i_13] [16LL] [16LL])))))) + (376845LL))) - (43LL)))));
                    arr_58 [i_10] [i_13] [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_13 - 2])) | (((/* implicit */int) arr_17 [i_13 - 4]))))) ? (((/* implicit */unsigned long long int) -885980091)) : (((unsigned long long int) ((((/* implicit */int) (signed char)-68)) | (((/* implicit */int) var_7))))));
                    var_29 ^= ((/* implicit */short) (-(((/* implicit */int) ((short) arr_12 [i_0] [i_10] [i_13] [i_10])))));
                    var_30 = ((/* implicit */short) 2536145880572505462LL);
                }
                /* vectorizable */
                for (short i_15 = 1; i_15 < 19; i_15 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)11] [i_0]))) : (3834800765997339715LL))))));
                    var_32 = ((/* implicit */signed char) arr_28 [i_0] [i_0] [i_0] [i_13 - 3] [i_0]);
                    arr_62 [i_10] = ((/* implicit */int) arr_12 [i_15] [i_13] [i_0] [i_0]);
                }
                for (short i_16 = 1; i_16 < 19; i_16 += 2) /* same iter space */
                {
                    var_33 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)20))))));
                    var_34 = ((/* implicit */signed char) arr_13 [i_16 + 1] [i_16] [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1] [i_16 + 1]);
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_0])) ? (((long long int) arr_36 [i_16 + 1] [i_13 - 3] [i_10])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_0] [i_10 + 1] [i_16 + 2])) >> (((/* implicit */int) arr_17 [i_0])))))))))));
                }
                for (short i_17 = 1; i_17 < 19; i_17 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        var_36 = ((/* implicit */signed char) (+(2187042056318297829LL)));
                        arr_69 [i_0] [i_10] [i_10] [i_17 + 2] [i_18] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_10 [i_17 - 1] [i_17 - 1] [i_18] [i_17 - 1] [i_10 + 1])) | (((/* implicit */int) arr_20 [i_17 + 1] [i_13 + 1] [i_0]))))));
                        arr_70 [i_0] [i_0] [i_10] [(short)16] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_61 [i_0] [i_10 - 3] [i_13 - 3] [i_17])) | (((/* implicit */int) var_4)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_10])))))));
                    }
                    arr_71 [i_10] = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */int) arr_52 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) ((short) ((arr_22 [i_0] [i_10] [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                    var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_13 + 1] [i_10] [i_13 - 4] [i_17 + 2]))) < (((((/* implicit */_Bool) 3834800765997339712LL)) ? (((/* implicit */long long int) 2147483647)) : (134458835432792668LL))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) arr_48 [i_0] [i_0])), ((short)511)))) ? (arr_59 [i_17] [i_10 + 1] [i_13 + 1] [i_17 + 2]) : (((((/* implicit */_Bool) -1749901146)) ? (0LL) : (-5023389577799091599LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_23 [i_0] [i_10 - 1] [i_0] [i_17]), (arr_52 [i_0] [i_10 - 3] [i_13])))))));
                    var_38 = ((/* implicit */long long int) max((var_38), (((((/* implicit */_Bool) ((arr_47 [i_10] [i_13 - 3] [i_17 + 1]) / (arr_47 [i_10] [i_13 - 2] [i_17 + 1])))) ? (max((((((/* implicit */_Bool) 2147483647)) ? (-134458835432792669LL) : (3725475196625354416LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_10] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_17] [i_17] [i_17 + 2])))))));
                }
                arr_72 [i_0] [i_10] [i_13 - 3] [i_13 - 3] = ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (-5854209405127289698LL));
                var_39 = ((/* implicit */int) min((max((((/* implicit */long long int) -804408951)), (8191LL))), (((/* implicit */long long int) (~(917579276))))));
            }
        }
        for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 1; i_20 < 20; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_22 = 1; i_22 < 18; i_22 += 2) 
                        {
                            arr_83 [i_22] [i_19] [i_22] [i_22] [i_19] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                            var_40 = arr_17 [i_20 + 1];
                            arr_84 [i_22] [i_22] = ((/* implicit */int) min((max((8919983042644386978LL), (((/* implicit */long long int) arr_17 [i_20 + 1])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_20 - 1])))))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) >= (max((((/* implicit */unsigned int) -1)), (367295574U))))))));
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)122)) ? (-3725475196625354416LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
                        }
                        for (unsigned char i_23 = 4; i_23 < 20; i_23 += 3) 
                        {
                            var_43 = ((/* implicit */long long int) min((var_43), (min((((/* implicit */long long int) ((short) (-(arr_22 [18LL] [i_21] [i_23 - 4]))))), (((((/* implicit */_Bool) min((arr_19 [(short)17] [(short)17] [i_23 - 3]), (((/* implicit */long long int) arr_26 [i_0] [i_19]))))) ? (((((/* implicit */_Bool) arr_8 [i_19])) ? (arr_45 [i_0] [i_21] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -536110455607198130LL)) ? (((/* implicit */int) arr_61 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_51 [i_23 - 2] [i_21] [i_19] [i_0])))))))))));
                            var_44 = ((((/* implicit */_Bool) 3725475196625354413LL)) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_16)))), (((/* implicit */int) ((signed char) (signed char)-33)))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_23] [i_0] [i_0] [i_0]))) + (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_73 [i_0]) : (arr_55 [i_23 - 1] [i_21] [i_20 - 1] [i_19] [i_0])))))));
                        }
                        arr_89 [i_19] [i_19] [i_20] [i_21] [i_20] = ((/* implicit */long long int) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) arr_80 [i_20 - 1] [i_20] [i_20 + 1] [i_20 + 1] [i_20 + 1]))));
                        arr_90 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_82 [i_0] [i_0] [i_0] [i_0] [i_21])) ? (((/* implicit */long long int) var_0)) : (arr_44 [i_19] [i_20] [i_20]))) % (arr_6 [i_19] [i_21])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_20])) ? (arr_4 [i_0] [i_0] [i_20 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134458835432792668LL)) ? (arr_25 [i_0] [i_20]) : (arr_3 [i_0] [i_0] [i_0])))) : (var_6))) : (max((((((/* implicit */_Bool) -917579276)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_21]))) : (9873821848576099284ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16649470281926180369ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_21] [i_21] [i_20] [i_19] [(signed char)14]))) : (var_3))))))));
                        var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20] [i_20 - 1])) ? (((/* implicit */int) arr_80 [i_20 + 1] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1])) : (((/* implicit */int) arr_80 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1])))))));
                    }
                } 
            } 
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_65 [i_0] [i_0] [i_0] [i_0] [i_19] [i_19]), (arr_8 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-46), ((signed char)-119))))) : (min((((/* implicit */unsigned long long int) -3845611679113421830LL)), (var_2)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-63)) && (((/* implicit */_Bool) (short)988)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -134458835432792656LL)) || (((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_19] [i_19]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
            arr_91 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_19] [i_19] [i_19] [i_0] [i_0]) >> (((((/* implicit */int) var_7)) - (32354)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_76 [i_19] [i_19])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_19]))) : (((((/* implicit */_Bool) -839197438)) ? (arr_43 [i_0] [i_0] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_19] [i_0])))))));
        }
        var_47 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_19 [i_0] [i_0] [i_0]), (min((var_3), (((/* implicit */long long int) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (max((min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_67 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((+(arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (int i_24 = 0; i_24 < 21; i_24 += 4) /* same iter space */
    {
        arr_94 [(short)17] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) 7916972721725333178LL))))) << (((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_65 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) : (14757785396137430672ULL))) + (((/* implicit */unsigned long long int) arr_93 [i_24] [i_24])))) - (9152388753856399542ULL)))));
        arr_95 [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 2LL)) && (((/* implicit */_Bool) (signed char)110))))) | (((/* implicit */int) ((signed char) (signed char)-11)))))) ? (((((/* implicit */int) (signed char)-124)) ^ (((/* implicit */int) min((arr_53 [i_24] [i_24] [i_24] [i_24]), (((/* implicit */short) (signed char)-99))))))) : (((/* implicit */int) (signed char)31))));
    }
}
