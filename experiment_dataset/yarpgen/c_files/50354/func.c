/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50354
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
    var_14 = ((/* implicit */signed char) max((((var_7) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))))), (((/* implicit */unsigned long long int) ((signed char) 16563831772121643837ULL)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_1 + 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                arr_10 [i_0 + 1] [i_0] [i_0] = var_2;
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) ((_Bool) var_8)))));
            }
            var_15 = ((/* implicit */unsigned long long int) ((signed char) arr_9 [i_0] [i_1]));
            arr_12 [i_0] = ((((/* implicit */_Bool) 17425930391402173803ULL)) ? (arr_2 [i_0] [i_1 - 1]) : (arr_2 [i_0] [i_1 - 1]));
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_16 = ((/* implicit */signed char) ((9419351313268882138ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1 - 1] [12ULL])))));
                var_17 |= ((/* implicit */signed char) ((arr_14 [i_0] [i_1 + 1] [i_3]) >= (9027392760440669475ULL)));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    arr_17 [i_0 - 1] [i_0] [(signed char)12] [(signed char)10] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)74)) && (((/* implicit */_Bool) var_12))))) + (((/* implicit */int) arr_1 [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 1])) == (((/* implicit */int) arr_9 [i_0] [i_1 + 1]))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((arr_14 [i_0] [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) >= (arr_7 [i_0] [i_0 + 2] [i_0] [i_1 - 1]))))));
                        var_20 = arr_16 [i_0] [i_0] [i_0] [i_5];
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_3] [i_0] = ((/* implicit */signed char) var_10);
                        var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)127)) ? (9419351313268882154ULL) : (arr_2 [i_0] [i_1])))));
                        arr_23 [i_0] [i_1] [(signed char)7] [i_0] [i_6] = (((-(arr_7 [i_6] [i_4] [i_1] [(signed char)15]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_1 - 1]))));
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) var_12);
                        arr_26 [i_1] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_11)))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        var_23 ^= ((((/* implicit */int) arr_9 [i_4] [i_4])) >= (((/* implicit */int) arr_9 [i_4] [(_Bool)1])));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 13301077368007719600ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)98)))))))));
                        var_25 += ((signed char) (signed char)7);
                        arr_30 [i_0] [i_3] [i_4] [i_3] [(signed char)5] [i_1] [i_0] = ((/* implicit */signed char) arr_14 [i_0 + 2] [i_1] [i_3]);
                    }
                }
                for (signed char i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 2) /* same iter space */
                    {
                        var_26 -= ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) var_3)))));
                        arr_36 [i_0] [i_3] [i_0] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((15438505595224790695ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_9))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 2) /* same iter space */
                    {
                        arr_41 [i_0] [i_1] [i_3] [(_Bool)1] [i_11] = ((/* implicit */_Bool) ((signed char) arr_0 [i_11 - 1]));
                        var_28 |= ((/* implicit */unsigned long long int) (signed char)98);
                        arr_42 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-46))))));
                        arr_45 [i_0] [i_1] [i_3] = ((signed char) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_5))));
                        var_30 = ((/* implicit */signed char) (_Bool)1);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_0 - 1] [i_12 - 1] [i_0 + 1] [i_1 - 1] [i_1 - 1])) & (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_0] [(signed char)5] [(signed char)5])) : (((/* implicit */int) arr_27 [i_0] [i_12 - 1] [i_0 + 2] [i_0] [i_0] [i_0] [i_1 - 1]))));
                    }
                    arr_46 [i_0] [i_0] = (signed char)-102;
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 = ((signed char) arr_40 [i_0] [i_3] [i_13]);
                        var_34 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1]))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) - (((/* implicit */int) ((signed char) var_8)))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_47 [i_9] [i_1] [i_1] [i_1 - 1] [i_0 - 1])) * ((-(((/* implicit */int) var_9))))));
                        var_37 = ((/* implicit */unsigned long long int) ((((arr_40 [i_0] [i_0] [i_0 + 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-35)) + (2147483647))) >> (((((/* implicit */int) (signed char)111)) - (107))))))));
                    }
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        arr_57 [i_15] [i_0] [i_3] [i_9] = ((/* implicit */unsigned long long int) var_3);
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (~(arr_50 [i_0] [i_3] [i_15] [i_9] [i_15] [i_0]))))));
                    }
                    for (signed char i_16 = 1; i_16 < 16; i_16 += 2) 
                    {
                        var_39 = ((unsigned long long int) arr_27 [i_16] [9ULL] [(_Bool)1] [i_16 + 2] [7ULL] [7ULL] [i_0]);
                        var_40 *= ((/* implicit */_Bool) arr_33 [i_16 + 3] [i_16 + 2] [i_1 - 1] [i_0 - 1]);
                    }
                    arr_60 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((arr_50 [i_0] [i_0 - 1] [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                }
                var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_17 = 1; i_17 < 17; i_17 += 2) 
            {
                var_42 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))) : (((unsigned long long int) var_12))));
                var_43 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-127)) + (2147483647))) << (((((((/* implicit */int) (signed char)-37)) + (63))) - (26))))) != (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (signed char)-78)) + (86)))))));
                arr_63 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-64))));
                arr_64 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_61 [i_17] [i_17 - 1] [i_1 + 1] [i_1]));
            }
            for (signed char i_18 = 3; i_18 < 18; i_18 += 2) 
            {
                var_44 = ((/* implicit */signed char) ((unsigned long long int) var_12));
                arr_67 [i_18 - 3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                var_45 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_51 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]))));
                /* LoopSeq 1 */
                for (signed char i_19 = 3; i_19 < 18; i_19 += 2) 
                {
                    var_46 = ((((/* implicit */_Bool) arr_66 [i_0 - 1] [i_1 + 1] [i_18] [i_18 - 2])) ? ((+(12115466227146472488ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))));
                    arr_70 [i_19] [i_0] [i_1] [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) arr_62 [(signed char)14] [i_1] [i_18]))) + (2147483647))) << (((((((/* implicit */int) arr_6 [(signed char)7] [i_1 - 1] [i_18] [(signed char)7])) + (109))) - (30)))));
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) ((arr_59 [i_0 + 2] [i_0 + 2]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))))))));
                        arr_73 [i_0] [i_0] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_14 [i_0] [i_0] [i_18 - 3])))));
                        var_48 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) arr_61 [i_19] [i_1] [(signed char)1] [i_19]))) + (2147483647))) << (((((/* implicit */_Bool) 15637282467368610966ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0]))) : (arr_62 [(_Bool)1] [(_Bool)1] [i_20])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) arr_61 [i_19] [i_1] [(signed char)1] [i_19]))) + (2147483647))) << (((((((/* implicit */_Bool) 15637282467368610966ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0]))) : (arr_62 [(_Bool)1] [(_Bool)1] [i_20]))) - (1ULL))))));
                        var_49 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (8866758148460429395ULL))))));
                    }
                    for (signed char i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        var_50 -= ((/* implicit */signed char) arr_21 [i_21]);
                        var_51 += ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_1 + 1] [i_18 + 1] [i_0 + 1]))));
                    }
                }
            }
            for (signed char i_22 = 3; i_22 < 17; i_22 += 2) 
            {
                arr_78 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_58 [i_0] [i_1] [i_22] [(signed char)14] [i_1] [i_22]);
                var_52 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_0 - 1])) / (((/* implicit */int) arr_59 [i_0 + 2] [i_1]))));
                var_53 |= (!(((/* implicit */_Bool) (signed char)-79)));
                var_54 ^= ((/* implicit */signed char) (!(arr_1 [(signed char)4])));
            }
        }
        arr_79 [i_0] = ((/* implicit */_Bool) min((((arr_51 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_0] [i_0] [i_0]))))))), (((/* implicit */int) ((_Bool) ((_Bool) 16546413113829566372ULL))))));
    }
}
