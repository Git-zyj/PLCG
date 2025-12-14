/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51813
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
    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (4575657221408423936ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
            {
                var_12 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 2]);
                var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1] [i_2 + 1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (2326672656452044129ULL) : (((/* implicit */unsigned long long int) var_5)))))));
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_14 [i_0 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_2]) : (arr_11 [i_2])));
                    var_15 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_10 [i_0 - 1] [i_2] [i_3])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 3292336338782945371ULL)))))));
                }
                for (long long int i_4 = 2; i_4 < 8; i_4 += 4) /* same iter space */
                {
                    arr_18 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    arr_19 [i_0] [i_2] [2ULL] [i_0] = (-(var_3));
                    var_16 = ((/* implicit */unsigned int) arr_1 [i_4 - 1]);
                }
                for (long long int i_5 = 2; i_5 < 8; i_5 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */long long int) var_6);
                    arr_24 [i_0 + 1] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */long long int) ((var_6) <= (((/* implicit */int) arr_23 [i_2]))));
                    var_18 ^= ((/* implicit */signed char) ((var_6) + (((/* implicit */int) var_1))));
                }
                /* LoopSeq 4 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        arr_29 [i_0] [i_1] [i_2] [i_2] [i_7 - 1] = ((/* implicit */int) arr_8 [i_0] [2LL] [i_0] [i_0 - 2]);
                        arr_30 [i_2] = ((/* implicit */long long int) var_2);
                        arr_31 [i_7 - 3] [i_2] [(unsigned char)4] [i_2] [(signed char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((3292336338782945373ULL) / (18446744073709551598ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3292336338782945373ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) : (14703923684451846037ULL)));
                        var_20 = (-(((/* implicit */int) (signed char)-1)));
                        var_21 ^= ((/* implicit */unsigned long long int) ((signed char) var_4));
                        arr_34 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_8] [i_8])) % (var_5)));
                        var_22 += ((unsigned char) var_6);
                    }
                    for (signed char i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_32 [i_2] [i_2] [i_2 - 2] [0LL] [i_2] [i_0] [i_2])) : (((/* implicit */int) ((unsigned char) 15154407734926606244ULL))))))));
                        var_24 ^= ((/* implicit */long long int) var_1);
                    }
                    var_25 = ((/* implicit */int) arr_0 [i_2 - 2]);
                }
                for (unsigned char i_10 = 1; i_10 < 9; i_10 += 2) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_10]))) : (18446744073709551608ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
                    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30)))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_28 ^= ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) var_4)))));
                    var_29 ^= ((/* implicit */unsigned long long int) (+(0)));
                    arr_42 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4575657221408423936ULL))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) arr_12 [i_2]);
                    arr_46 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 1846602788U)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-21)) - (282472489))))));
                }
            }
            for (unsigned char i_13 = 2; i_13 < 8; i_13 += 1) /* same iter space */
            {
                arr_50 [i_0] [5U] [i_1] [0LL] = ((/* implicit */unsigned long long int) var_1);
                var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_1 [i_13])));
            }
            arr_51 [i_0] = ((/* implicit */unsigned long long int) (((+(var_9))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            arr_52 [i_1] [i_1] [i_1] &= ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))) <= (33776997205278720LL)))) : ((-(((/* implicit */int) var_7)))));
            var_32 ^= ((/* implicit */long long int) ((var_2) & (((/* implicit */unsigned long long int) -9223372036854775799LL))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 3; i_14 < 8; i_14 += 1) 
        {
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15154407734926606244ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2221415496U))))) : (((/* implicit */int) var_1))));
            var_34 ^= ((/* implicit */unsigned char) (~(3609735120U)));
        }
    }
    for (unsigned int i_15 = 2; i_15 < 10; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
        {
            arr_61 [i_15] [i_15] [i_15 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
            arr_62 [i_15 - 1] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_16])) ? (((unsigned long long int) 5222471113278023925ULL)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
            /* LoopNest 3 */
            for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 2; i_18 < 9; i_18 += 4) 
                {
                    for (long long int i_19 = 0; i_19 < 11; i_19 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) (((+(2147483647))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) var_8)))))));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((var_9) + (((/* implicit */unsigned long long int) 6U)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (-(((/* implicit */int) var_7)))))));
            var_38 ^= ((/* implicit */unsigned long long int) ((var_1) || (((/* implicit */_Bool) (signed char)127))));
            var_39 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0))));
            var_40 = ((/* implicit */signed char) var_8);
        }
        arr_72 [i_15] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */unsigned long long int) arr_69 [i_15] [i_15] [i_15] [i_15] [i_15])) : ((+(5222471113278023934ULL))))));
    }
    for (unsigned int i_21 = 3; i_21 < 21; i_21 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 2) 
        {
            var_41 ^= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) 4711426206841377280LL))))), (min(((unsigned char)105), (var_8)))))) <= (((((/* implicit */_Bool) 7141438277938399768LL)) ? (((/* implicit */int) (signed char)-62)) : (2147483647)))));
            arr_79 [i_21] [i_21] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5222471113278023930ULL))))), (var_8)));
            arr_80 [18U] [i_22] = arr_74 [i_21];
            arr_81 [i_21] [(_Bool)1] = ((unsigned long long int) (~(max((var_6), (((/* implicit */int) var_1))))));
        }
        /* vectorizable */
        for (int i_23 = 1; i_23 < 21; i_23 += 3) 
        {
            arr_85 [i_21] |= ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-52));
            var_42 ^= ((/* implicit */long long int) ((var_3) < (((((/* implicit */unsigned long long int) arr_74 [i_21])) | (5641070660307214300ULL)))));
            arr_86 [i_23 + 1] [i_23] = ((/* implicit */unsigned long long int) ((_Bool) var_2));
        }
        for (long long int i_24 = 1; i_24 < 21; i_24 += 1) 
        {
            arr_89 [i_21] = ((/* implicit */unsigned long long int) ((unsigned int) ((((var_6) > (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) var_10)))));
            var_43 = (!((!(((/* implicit */_Bool) var_4)))));
            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) + (-8748202418075711426LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))))));
        }
        /* vectorizable */
        for (unsigned char i_25 = 1; i_25 < 20; i_25 += 1) 
        {
            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned char)32))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_91 [i_21] [i_21] [i_21 - 2])) - (((/* implicit */int) (unsigned char)32))))))))));
            /* LoopSeq 1 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_94 [i_21] [(_Bool)1] [i_21] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_83 [10ULL] [i_21] [i_21 - 2])) && (((/* implicit */_Bool) arr_90 [i_21] [i_21]))));
                var_46 = ((/* implicit */unsigned char) ((arr_92 [i_21] [i_25 - 1] [i_21] [i_26]) ? (var_3) : (6310742128718005270ULL)));
            }
            arr_95 [i_21 - 3] [i_21 + 1] [i_21 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_75 [i_21 - 1] [i_25])) ? (((/* implicit */int) var_4)) : (var_6)));
        }
        arr_96 [(unsigned char)1] [i_21] = ((/* implicit */int) var_9);
    }
}
