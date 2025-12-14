/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194845
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
    var_12 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned int) 281474974613504LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (min((var_11), (((/* implicit */unsigned int) var_2)))))), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (min((((/* implicit */unsigned int) ((arr_0 [i_0 + 3]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 2]))))), (min((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (var_6)))))));
        var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) < (min((((/* implicit */long long int) var_7)), (-3895001051221818705LL)))))), ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 3])) : (((/* implicit */int) (_Bool)0))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) >> (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_15 = ((/* implicit */signed char) (unsigned char)173);
        arr_4 [i_0] = ((/* implicit */signed char) min((min((776669402U), (((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_0 - 1])))), (((/* implicit */unsigned int) ((int) arr_2 [i_0 + 3] [i_0 + 1])))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_6 [i_1])), (3895001051221818703LL))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3895001051221818705LL)))) ? (((arr_6 [i_1]) + (((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1]))))) : (min((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_8)))), ((+(((/* implicit */int) arr_5 [i_1]))))))));
        arr_9 [i_1] [(_Bool)1] |= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [8ULL])), (((long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((signed char) arr_7 [i_2] [i_2]));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            arr_15 [i_2] [i_3] = ((/* implicit */_Bool) arr_7 [i_2] [i_2]);
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_19 ^= ((/* implicit */_Bool) arr_16 [i_3] [i_3 - 1] [i_3 + 1] [8U]);
                arr_18 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_2] [i_3] [i_2])) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (-1001726800088120232LL))))));
            }
            for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                var_20 = ((/* implicit */_Bool) var_1);
                var_21 ^= ((/* implicit */signed char) ((unsigned int) arr_16 [i_3 + 1] [i_3 + 1] [i_5 - 1] [8ULL]));
            }
            var_22 = ((/* implicit */unsigned int) (((((_Bool)1) || ((_Bool)1))) || (arr_11 [i_2] [i_2])));
            var_23 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_17 [i_2] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3895001051221818716LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [14LL])) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_13 [i_2])))))))) ? (((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) (signed char)-35)) : (-1724908154)))))) : (((arr_20 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) << (((arr_20 [i_6 + 1] [i_6 + 1] [i_6] [i_6]) - (129973762U)))))));
            var_25 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_6 + 1])) ? (((/* implicit */long long int) arr_19 [i_6 + 1] [i_2] [i_6 + 1])) : (var_4))));
        }
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 1; i_8 < 18; i_8 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) arr_30 [(signed char)0] [i_7] [i_8]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    arr_33 [i_9] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (!(arr_29 [i_2])));
                    var_27 += ((/* implicit */long long int) (unsigned char)8);
                    var_28 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (short)32756)))))) >= (((unsigned int) (signed char)-96))));
                    var_29 = ((long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (-3895001051221818716LL) : (((/* implicit */long long int) 4294967285U))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_26 [i_2] [i_7]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_17 [i_2] [(unsigned char)19] [i_2])) : (((/* implicit */int) ((signed char) 0U)))));
                    arr_36 [i_2] [i_2] [i_7] [3LL] [i_10] = ((/* implicit */unsigned int) arr_29 [i_2]);
                    arr_37 [i_2] [i_2] [i_2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3676765809U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_13 [i_2])) : (arr_6 [i_8 + 3])));
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_31 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [(short)10] [i_7])) >> (((((/* implicit */int) arr_23 [i_8])) + (27031)))));
                    arr_42 [14LL] [i_7] [(_Bool)0] [14U] |= ((/* implicit */_Bool) arr_23 [18LL]);
                    arr_43 [(unsigned char)19] [(unsigned char)19] [i_7] [i_2] [i_11] [i_11] = ((/* implicit */long long int) ((arr_29 [i_2]) || (arr_29 [i_2])));
                }
                arr_44 [i_2] [(_Bool)1] [i_8 + 3] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) (_Bool)1)))));
            }
            arr_45 [i_2] [i_7] [i_2] = var_5;
            /* LoopNest 3 */
            for (unsigned int i_12 = 3; i_12 < 21; i_12 += 3) 
            {
                for (unsigned int i_13 = 1; i_13 < 20; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_41 [i_2])) != ((~(((/* implicit */int) var_0))))))) >> (((((((/* implicit */_Bool) 893874205U)) ? (arr_39 [i_13 + 2] [i_13 + 1] [(short)13] [(short)13]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))) + (7163419107972530595LL)))));
                            var_33 = ((/* implicit */long long int) arr_25 [i_13] [i_12]);
                            arr_53 [i_2] [i_13] [i_12] [i_7] [i_2] = ((/* implicit */_Bool) ((int) var_8));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_15 = 3; i_15 < 20; i_15 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_56 [i_15 - 2])))) != (((/* implicit */int) arr_34 [0LL] [i_2] [i_2] [i_15]))));
            arr_57 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_48 [i_15 - 1] [i_2] [i_2] [i_2])), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_15 - 3] [i_15 - 2]))) : (((((/* implicit */_Bool) arr_48 [(_Bool)1] [9] [(_Bool)1] [18ULL])) ? (653225274300686010LL) : (((/* implicit */long long int) 9U))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) arr_51 [8LL] [i_15]))))), (((((/* implicit */_Bool) -1724908132)) ? (arr_14 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
            arr_58 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */long long int) ((short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (3512793998U))) ? (((arr_26 [i_2] [i_15]) << (((arr_46 [i_2]) - (1441833928U))))) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_2] [i_2]))))))) : (((/* implicit */long long int) ((short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (3512793998U))) ? (((arr_26 [i_2] [i_15]) << (((((arr_46 [i_2]) - (1441833928U))) - (166014281U))))) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_2] [i_2])))))));
        }
        var_35 = ((/* implicit */signed char) ((short) arr_16 [i_2] [i_2] [i_2] [i_2]));
        var_36 -= ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)117)), (((((/* implicit */_Bool) arr_48 [(signed char)6] [5U] [i_2] [(signed char)6])) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_34 [i_2] [i_2] [(signed char)14] [i_2]))))));
    }
    var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
}
