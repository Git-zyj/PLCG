/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27545
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_9)))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */int) arr_8 [i_0] [(signed char)16] [(unsigned char)15] [i_2]))))) ? (((/* implicit */unsigned long long int) (~(var_14)))) : (arr_2 [i_0]))) - (18446744071799821633ULL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        var_20 += ((/* implicit */_Bool) -5119087500226605737LL);
                        arr_13 [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] [i_1]);
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_4))));
                        var_22 = ((/* implicit */unsigned int) arr_6 [i_3]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 += ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_0 [i_2]) >= (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_0 + 2]))))), ((-(((/* implicit */int) min(((short)-21356), (((/* implicit */short) arr_7 [i_1] [i_2] [i_1])))))))));
                        var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [5U])))) : (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                        var_25 = ((long long int) ((((/* implicit */_Bool) arr_4 [21ULL] [i_1])) ? (max((var_6), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_0] [i_4])))) : (((/* implicit */long long int) var_16))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    {
                        var_26 = min((((((/* implicit */long long int) ((/* implicit */int) arr_9 [(short)4] [i_5] [i_6] [i_7] [i_6] [i_6]))) | (((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_7]))))));
                        arr_24 [i_0 - 1] [i_5] [i_6] [(unsigned short)1] [(unsigned char)12] [i_5] = ((/* implicit */unsigned short) arr_10 [i_0] [6] [i_5] [i_6] [i_7] [i_7]);
                        arr_25 [i_0] [i_5] [i_6] [i_7] = var_15;
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (short)-21356))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_5] [(_Bool)1] [(_Bool)1]))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_9))))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))))))));
                    }
                } 
            } 
        } 
        var_28 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (max((((/* implicit */long long int) arr_19 [i_0] [(short)18])), (-3031099789546773363LL))) : (min((9223372036854775807LL), (((/* implicit */long long int) arr_1 [i_0])))))));
        var_29 -= max((((/* implicit */long long int) var_2)), (var_3));
        var_30 += ((/* implicit */unsigned short) max((var_1), (((/* implicit */short) arr_15 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) ((arr_15 [i_8] [i_8] [i_8] [i_8]) ? (((((/* implicit */int) ((signed char) var_15))) | (var_14))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_18)), (var_7)))))))));
        var_32 ^= ((/* implicit */unsigned char) var_13);
    }
    for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                {
                    arr_37 [i_9] [i_9] [i_11] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) (unsigned char)12)))));
                    /* LoopSeq 3 */
                    for (short i_12 = 2; i_12 < 8; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((arr_23 [i_9]), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_34 [i_9] [i_9] [i_11]))))) : (min((((/* implicit */unsigned int) arr_6 [i_9])), (var_16)))))));
                        var_34 -= ((/* implicit */short) ((unsigned short) (~(max((arr_35 [i_9] [i_11] [i_9]), (((/* implicit */unsigned int) -1862362435)))))));
                        var_35 &= ((/* implicit */unsigned int) arr_38 [i_10]);
                        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                    }
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) min((((unsigned long long int) 2147483647)), (((/* implicit */unsigned long long int) var_10)))))));
                        arr_44 [i_9] [i_11] [i_11] [i_10] [i_9] [i_9] = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_6 [i_13])) : (max((max((((/* implicit */int) var_0)), ((-2147483647 - 1)))), (((/* implicit */int) (short)14331)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_38 += ((/* implicit */unsigned char) var_2);
                            var_39 = ((/* implicit */unsigned long long int) var_4);
                            arr_47 [i_9] [i_9] [i_10] [i_13] [7U] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9)))) || ((!(((/* implicit */_Bool) arr_6 [i_9]))))));
                        }
                        var_40 &= ((((((/* implicit */_Bool) arr_43 [4] [i_13])) ? (var_3) : (((/* implicit */long long int) (~(var_11)))))) + (((/* implicit */long long int) ((arr_16 [i_9] [i_10] [i_9]) | (((/* implicit */int) (short)6332))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_15 = 2; i_15 < 9; i_15 += 1) 
                        {
                            arr_51 [i_9] [i_10] [i_11] [i_13] [i_15] = ((/* implicit */int) (-(arr_41 [i_9] [i_10] [i_9] [i_13] [i_11])));
                            var_41 = ((/* implicit */_Bool) ((short) arr_17 [i_15] [i_9] [i_11] [i_9] [i_9] [i_9]));
                            var_42 ^= ((/* implicit */signed char) var_11);
                            var_43 = ((/* implicit */long long int) var_0);
                        }
                        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            var_44 ^= ((min((((/* implicit */unsigned int) ((unsigned short) arr_26 [i_9] [i_9]))), ((~(var_16))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)197))))));
                            var_45 = ((/* implicit */long long int) (unsigned char)136);
                            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_39 [i_11] [i_10] [i_11] [i_13]), (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_9] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9] [i_9] [i_11] [i_9]))) : (min((((/* implicit */unsigned long long int) arr_54 [i_16])), (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */unsigned long long int) arr_50 [i_10] [i_10] [i_9] [(unsigned short)1] [i_16] [i_9])) : (arr_17 [i_9] [i_9] [i_10] [i_11] [i_11] [i_16]))))))))));
                            var_47 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_38 [i_9]))));
                            arr_56 [(_Bool)1] [i_9] [i_11] [i_13] [i_16] = ((/* implicit */long long int) arr_54 [i_9]);
                        }
                    }
                    for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        var_48 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? (arr_1 [i_10]) : (((/* implicit */unsigned int) (-(arr_39 [i_9] [i_9] [i_11] [i_17]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(((/* implicit */int) arr_36 [i_17] [i_10]))))))) : (((max((arr_1 [i_9]), (((/* implicit */unsigned int) var_10)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_32 [2U] [(unsigned char)2] [i_11])) : (((/* implicit */int) (short)127)))))))));
                        var_49 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((unsigned int) 0U)))) ^ (max((((/* implicit */int) ((_Bool) arr_48 [i_11] [i_11] [i_10] [i_11]))), (((((/* implicit */int) var_15)) << (((/* implicit */int) arr_12 [i_9] [i_10] [i_11] [(unsigned char)2] [i_10] [(unsigned short)8]))))))));
                        var_50 = ((/* implicit */unsigned long long int) (short)-21356);
                        /* LoopSeq 1 */
                        for (int i_18 = 1; i_18 < 8; i_18 += 4) 
                        {
                            var_51 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_9] [i_17])))))));
                            var_52 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (arr_50 [i_9] [i_10] [i_11] [i_11] [i_17] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65)))))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) (unsigned char)190)))));
                            var_53 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)54916)) : (((/* implicit */int) ((_Bool) var_10))));
                            var_54 = ((/* implicit */short) min(((-(((16015726554171084813ULL) ^ (((/* implicit */unsigned long long int) arr_61 [i_18] [i_17] [i_9] [i_9] [i_10] [i_9])))))), (max((arr_48 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned long long int) (short)-21356))))));
                        }
                    }
                    var_55 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((+(-2147483647))), (((/* implicit */int) (!(arr_12 [i_11] [(short)3] [i_9] [i_9] [i_9] [i_9]))))))), (((((long long int) arr_49 [i_9])) | (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-88)))))))));
                }
            } 
        } 
        var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_9])) ? (arr_54 [0LL]) : (((/* implicit */int) (short)-27261))))), (max((14328516092789738161ULL), (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */int) (short)21355))))))))))));
    }
    var_57 = (!(((/* implicit */_Bool) var_7)));
}
