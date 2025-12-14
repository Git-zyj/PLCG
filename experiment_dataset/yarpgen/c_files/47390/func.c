/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47390
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
    var_10 = ((/* implicit */signed char) (short)10623);
    var_11 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)46015))))) && (((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (unsigned char)91)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 4])) != (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 3])) / (((/* implicit */int) arr_2 [i_1 - 4] [i_1 - 4]))))) : ((-(var_1)))));
                    var_12 = ((/* implicit */int) min((var_12), ((-(((/* implicit */int) ((short) var_4)))))));
                    arr_9 [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8773231016937283ULL)) ? (-2103198157) : (var_4)))) ? (min((((/* implicit */int) var_9)), (var_4))) : (((/* implicit */int) arr_7 [i_0] [i_0]))))));
                    var_13 += ((/* implicit */short) ((int) (-(2103198157))));
                }
                for (long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(var_0))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) ((arr_6 [i_1 + 3]) ? (((/* implicit */int) arr_6 [i_1 - 4])) : (var_0)))), (((((/* implicit */_Bool) (-(arr_1 [5ULL])))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [(unsigned char)20])) ? (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (3836909162U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_3]) && (((/* implicit */_Bool) (short)3127))))))))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_11 [i_1 - 1] [i_1 + 1])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_11 [i_1 - 1] [i_1 - 3])))))))));
                        var_17 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-113), ((signed char)-37))))) <= (458058133U)))) - (((/* implicit */int) ((((/* implicit */int) var_8)) <= (arr_12 [i_1 - 4] [i_1] [(signed char)9] [i_1 + 3]))))));
                        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_1] [i_6] [(signed char)18] [10] [i_6] = ((/* implicit */unsigned int) (short)12759);
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19510))))))))))))));
                            var_20 = ((/* implicit */long long int) (-(arr_1 [i_6])));
                            arr_21 [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) arr_10 [i_1 - 3] [i_1 + 3] [(unsigned char)2] [i_6 - 2])), (var_7))), (((/* implicit */unsigned short) min((arr_10 [i_1 - 2] [i_1 - 1] [i_5] [i_6 - 3]), (arr_10 [i_1 + 1] [i_1 - 4] [i_1] [i_6 - 1]))))));
                            var_21 = ((/* implicit */signed char) 3043801854408817359LL);
                        }
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 - 2])) >= (((/* implicit */int) arr_15 [i_5] [i_3])))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_17 [i_5] [i_3] [i_1] [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((((/* implicit */int) arr_16 [i_1 + 4] [i_1])) < (((((/* implicit */int) arr_22 [i_3] [i_1] [i_3] [i_0])) | (2103198156))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 - 4] [i_1 + 2] [i_3])) ? (arr_14 [i_1 + 2] [i_1] [i_1 - 3] [i_1]) : (arr_14 [i_1 - 4] [(short)19] [i_1 - 4] [i_7])))) : (min((10728420151948341305ULL), (((/* implicit */unsigned long long int) 458058134U)))))))));
                        var_25 ^= ((/* implicit */short) (~(458058133U)));
                    }
                    var_26 = ((/* implicit */unsigned short) (signed char)112);
                }
                for (long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_27 -= ((/* implicit */short) min(((+(((1401665849674006180LL) ^ (7986411964331640063LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)26573)))))));
                                arr_31 [i_0] [i_8] [i_0] [i_0] [(unsigned short)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_1])) ? (((((/* implicit */_Bool) arr_29 [i_9] [i_0] [i_8] [i_1 + 2] [i_8] [i_0] [(_Bool)1])) ? (arr_13 [i_1 + 2] [i_1] [i_1] [(signed char)1]) : (var_0))) : (arr_29 [(signed char)13] [i_10] [i_8] [i_1 + 2] [i_8] [i_0] [i_0])));
                                arr_32 [i_8] = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned int) arr_14 [i_1] [i_8] [i_8] [i_10])), (458058139U))));
                                arr_33 [(short)5] [i_0] [i_1] [(short)5] [i_0] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 1])) & (((/* implicit */int) arr_6 [i_1 - 2]))))) ? (min((arr_12 [i_1 - 1] [i_1 + 2] [i_1 + 4] [i_1 - 4]), (arr_12 [i_1 + 4] [i_1 - 3] [i_1 + 4] [i_1 - 2]))) : ((+(((/* implicit */int) arr_6 [i_1 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_11 = 1; i_11 < 19; i_11 += 1) 
                    {
                        arr_37 [i_0] [i_0] [i_8] [(unsigned char)19] [i_11] [i_8] = ((/* implicit */signed char) var_8);
                        var_28 ^= ((/* implicit */_Bool) ((long long int) var_7));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) (~(3836909168U)))) ? (((((/* implicit */int) var_8)) << (((((/* implicit */int) (short)-18166)) + (18171))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                            arr_44 [(unsigned char)4] [i_8] = arr_29 [i_0] [i_0] [i_8] [i_0] [i_0] [i_0] [i_0];
                            var_30 = ((/* implicit */_Bool) (~(arr_1 [i_0])));
                            arr_45 [i_0] [i_1 - 2] [i_0] [(short)6] [i_8] [i_13] = ((/* implicit */int) ((unsigned long long int) var_7));
                        }
                        for (unsigned char i_14 = 1; i_14 < 20; i_14 += 1) 
                        {
                            arr_48 [1ULL] [18] [i_8] [i_12] [i_14] = ((/* implicit */unsigned char) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)41734))))));
                            var_31 *= ((/* implicit */int) (!(arr_22 [i_0] [i_1] [i_0] [i_14 - 1])));
                        }
                        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            arr_52 [i_0] [i_8] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) arr_34 [i_15] [i_15] [i_15] [i_15])) : (1382834934077807233ULL))))));
                            arr_53 [i_0] [i_8] [i_8] [i_12] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-18410))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1 + 2] [i_8] [i_8] [14ULL])))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_1] [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_1 + 4])) % (((/* implicit */int) var_7))));
                        }
                        for (signed char i_16 = 1; i_16 < 18; i_16 += 1) 
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_16 [i_16 + 3] [(unsigned short)4]))));
                            var_34 += ((/* implicit */int) arr_6 [i_16 + 2]);
                            var_35 *= ((/* implicit */signed char) ((int) arr_15 [i_0] [i_0]));
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_12 [i_16] [i_16] [i_16 + 1] [i_16])) | ((~(458058133U))))))));
                            arr_56 [i_8] [11ULL] [8U] = var_7;
                        }
                        arr_57 [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1 - 2]))));
                        var_37 -= ((/* implicit */int) ((arr_17 [i_0] [i_0] [i_12] [i_12] [i_12]) >= (arr_17 [(_Bool)1] [i_1] [i_8] [i_12] [i_12])));
                    }
                }
                arr_58 [i_0] [i_1] = ((/* implicit */_Bool) max(((short)-12912), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)12)))))));
                var_38 += ((/* implicit */unsigned char) 1427538134);
            }
        } 
    } 
    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) 458058110U)), (17795110159473994257ULL))) : (((/* implicit */unsigned long long int) var_4))));
}
