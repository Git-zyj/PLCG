/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239232
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
    var_14 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_11 [i_3] [i_0] [i_3] [i_3] = ((((max((arr_10 [2] [11]), (((/* implicit */long long int) (_Bool)1)))) | (4611577255461171215LL))) + (((/* implicit */long long int) ((/* implicit */int) var_3))));
                    var_15 += ((/* implicit */unsigned short) ((signed char) -4611577255461171216LL));
                    var_16 = ((((/* implicit */_Bool) (~(max((4611577255461171203LL), (arr_7 [i_0] [i_1] [i_0] [(unsigned short)18])))))) ? (11036817329129093035ULL) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)224)) - (((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) (unsigned short)22))))));
                    arr_12 [i_1] [i_1] [(unsigned short)2] [i_0] = (signed char)96;
                }
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    var_17 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((arr_7 [i_2] [i_1] [i_2] [i_4]), (((/* implicit */long long int) (signed char)96))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)110), ((unsigned char)145))))) : (arr_0 [i_0] [i_4])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned long long int) min((arr_8 [i_0] [i_0] [(signed char)7] [i_0]), (-4975625697885718097LL)))))));
                        var_19 = ((/* implicit */unsigned char) ((unsigned int) (((+(((/* implicit */int) var_8)))) - (((/* implicit */int) (unsigned char)217)))));
                        var_20 = ((/* implicit */int) min((((((/* implicit */long long int) arr_1 [13LL] [i_0])) % (4611577255461171197LL))), ((+(min((var_9), (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_5] [i_5]))))))));
                        arr_19 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)12330)) && (((/* implicit */_Bool) 8456155959050083LL)))))));
                    }
                    for (short i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (((!(arr_6 [i_6 - 1] [i_6 - 1] [i_6 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) : (6LL)));
                        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_7 [i_4] [i_6 + 1] [i_0] [i_6 - 1])))) - (((((unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_5 [i_4])) + (103)))))));
                        var_23 = ((/* implicit */unsigned int) -27LL);
                    }
                    arr_23 [i_0] [i_1] [i_1] [20ULL] [i_1] = ((/* implicit */short) arr_16 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(short)17]);
                }
                for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    arr_28 [i_0] [i_1] [i_0] [i_1] [i_1] = (~(((((/* implicit */_Bool) ((unsigned long long int) arr_1 [(signed char)12] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_7))))) : ((~(arr_22 [7ULL] [i_1] [i_2] [(signed char)1] [(signed char)7]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        arr_32 [i_8] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (5729638321379089820LL)))))), (min((((7409926744580458580ULL) * (arr_16 [i_0] [i_0] [i_2] [i_7] [i_8] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)116)) * (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2])))))))));
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) min((arr_7 [i_0] [(signed char)17] [i_0] [i_8]), (((/* implicit */long long int) var_7))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) ((signed char) 144774036941169355ULL))) : (((/* implicit */int) var_1))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_1] [i_2] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)16935), (((/* implicit */short) (!(((/* implicit */_Bool) var_10))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)184)) + (((/* implicit */int) var_3))))) ? (max((var_12), (-2466812130654177258LL))) : ((-9223372036854775807LL - 1LL)))))))));
                    }
                }
                var_26 = ((/* implicit */long long int) arr_26 [i_0] [i_1] [i_2]);
            }
            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                var_27 = min((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_1] [i_1] [i_0] [i_9]) : (((long long int) var_6)))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) -173093473))));
                var_29 ^= ((/* implicit */unsigned short) -4611577255461171215LL);
            }
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                arr_39 [i_0] = ((/* implicit */int) (((((_Bool)1) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) || ((((!(((/* implicit */_Bool) var_2)))) && ((!(arr_26 [i_0] [(unsigned short)19] [4U])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    arr_42 [i_0] [i_1] [i_10] [i_0] = ((/* implicit */unsigned char) ((((arr_22 [i_0] [i_1] [i_1] [i_11] [(signed char)1]) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) == (((/* implicit */long long int) (~(((/* implicit */int) (signed char)0)))))));
                    arr_43 [i_1] [i_0] [i_11] = ((/* implicit */_Bool) var_2);
                    var_30 = ((/* implicit */_Bool) (~((~(11036817329129093035ULL)))));
                }
                for (short i_12 = 4; i_12 < 19; i_12 += 2) 
                {
                    var_31 = ((arr_20 [i_0] [i_0] [i_0] [i_10] [i_12]) + (max((3323479451640128508LL), (((/* implicit */long long int) (unsigned char)121)))));
                    arr_47 [i_0] [i_0] [i_1] [i_0] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_18 [i_12] [i_1] [i_10] [i_0]))) % (((((/* implicit */int) arr_18 [i_0] [i_0] [i_10] [i_0])) + (((/* implicit */int) arr_18 [i_0] [(short)20] [i_10] [i_0]))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_32 = ((/* implicit */signed char) 146752792);
                        arr_51 [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) ((((((var_1) ? (-3323479451640128514LL) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [20ULL] [i_10] [i_10]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (unsigned short)42878)) : (-1043820172)))))) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                }
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10] [i_10]))) - (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10]))))))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_15 = 3; i_15 < 20; i_15 += 1) /* same iter space */
                {
                    arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_5 [i_0])), (var_12)));
                    arr_57 [i_0] [i_14] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_10)));
                    var_34 += ((/* implicit */_Bool) min((((long long int) arr_31 [i_0] [i_1] [i_1] [i_15 - 2] [i_1])), (((/* implicit */long long int) (~(((/* implicit */int) arr_31 [i_0] [i_1] [i_14] [i_14] [i_15 - 2])))))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        arr_61 [i_0] [i_0] [i_0] [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned short) arr_18 [(_Bool)1] [(unsigned char)20] [i_14] [i_0]);
                        arr_62 [i_0] [i_0] [10LL] [i_15 - 1] [i_15 - 2] [i_15] [i_16] = ((/* implicit */unsigned char) (+(min((2251799813684992LL), (((/* implicit */long long int) (signed char)-87))))));
                        arr_63 [i_0] [i_1] [i_14] [i_15] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) | (max((((/* implicit */long long int) var_8)), (272678883688448LL))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)12307))))))));
                        var_35 -= ((/* implicit */_Bool) max(((-(var_10))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)86)), (var_2)))))))));
                    }
                }
                for (long long int i_17 = 3; i_17 < 20; i_17 += 1) /* same iter space */
                {
                    arr_67 [i_0] = ((/* implicit */int) (-(2584235693301251480LL)));
                    arr_68 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min(((-(max((((/* implicit */unsigned long long int) -3323479451640128509LL)), (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (var_12) : (((/* implicit */long long int) -1330344501))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_21 [i_0] [i_0] [i_14] [i_17] [i_1] [i_17]), (var_4))))) : (var_9))))));
                    var_36 = ((/* implicit */long long int) max((var_36), ((~((~(arr_10 [i_14] [i_17 - 3])))))));
                }
                /* vectorizable */
                for (long long int i_18 = 3; i_18 < 20; i_18 += 1) /* same iter space */
                {
                    arr_71 [i_0] [i_1] [(short)4] [i_0] [i_18] |= ((/* implicit */unsigned short) 9223372036854775807LL);
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) arr_66 [(signed char)6] [(signed char)6] [i_14] [i_18] [(signed char)6] [i_18])) ? ((-(arr_53 [(unsigned short)10] [10LL]))) : ((~(((/* implicit */int) arr_44 [i_18])))))))));
                    arr_72 [i_14] [i_14] [i_0] = (signed char)-87;
                }
                arr_73 [i_0] [17LL] = ((/* implicit */unsigned short) -4611577255461171226LL);
                arr_74 [i_0] [i_1] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_52 [i_0] [i_1] [i_1] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12406))) : (-3323479451640128486LL))) << ((((~(min((((/* implicit */unsigned long long int) (short)-12313)), (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14] [i_14]))))) - (18016786901168718559ULL)))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_52 [i_0] [i_1] [i_1] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12406))) : (-3323479451640128486LL))) << ((((((~(min((((/* implicit */unsigned long long int) (short)-12313)), (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14] [i_14]))))) - (18016786901168718559ULL))) - (4470357706165707321ULL))))));
                var_38 = ((/* implicit */long long int) arr_44 [i_0]);
            }
            arr_75 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_44 [(unsigned char)19]);
        }
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 21; i_19 += 3) /* same iter space */
        {
            arr_79 [i_0] = ((/* implicit */unsigned char) arr_18 [i_0] [i_19] [i_0] [i_0]);
            var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [(_Bool)1] [i_0])) ? (7546662663603437699LL) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [(signed char)7] [(signed char)1])))))) || (((/* implicit */_Bool) arr_37 [(signed char)20]))));
        }
        for (signed char i_20 = 0; i_20 < 21; i_20 += 3) /* same iter space */
        {
            arr_82 [(signed char)18] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_64 [(unsigned short)4] [i_20] [i_0] [i_20])) ^ (((/* implicit */int) arr_64 [i_0] [i_0] [i_20] [i_20])))) < (max((1753352267), (((/* implicit */int) arr_64 [i_0] [i_0] [i_20] [i_20]))))));
            arr_83 [4LL] [i_0] = ((/* implicit */long long int) var_8);
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (short)11076))));
            var_41 ^= ((/* implicit */_Bool) (-(((((-7546662663603437693LL) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_69 [i_0] [(unsigned char)14] [(unsigned char)14] [i_0]), (var_4))))) : (max((var_10), (((/* implicit */unsigned long long int) arr_21 [i_0] [(unsigned short)10] [i_0] [i_20] [i_20] [i_0]))))))));
            var_42 = ((/* implicit */long long int) (((-(arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_20] [i_20]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)117))))));
        }
        for (long long int i_21 = 2; i_21 < 20; i_21 += 2) 
        {
            var_43 = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)34)), (var_8))))));
            arr_88 [i_0] [i_0] [i_21] = arr_35 [i_0] [i_21];
            arr_89 [i_21] [(short)12] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)33419))))), (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)52058))))), (max((((/* implicit */long long int) (signed char)116)), (var_12)))))));
        }
    }
    var_44 = var_9;
}
