/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197756
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_14 [i_1] [i_1] [i_2] [i_1] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-3)) ^ (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1] [i_3]))));
                            arr_15 [i_4] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-98))));
                            var_10 = ((/* implicit */signed char) ((arr_12 [i_0] [i_2 + 1]) == (((/* implicit */int) arr_13 [i_2 - 2]))));
                        }
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_18 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (signed char)-19))));
                            arr_19 [i_0] [3LL] [12U] [i_2 - 1] [i_3] [3LL] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2])), (max((((/* implicit */int) min((((/* implicit */short) arr_17 [i_0] [i_0])), (arr_13 [i_0])))), (arr_12 [(short)5] [i_1])))));
                        }
                        var_11 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) max(((unsigned char)223), ((unsigned char)192)))) : (((((/* implicit */int) arr_6 [i_3] [(_Bool)1] [5U])) / (((/* implicit */int) arr_10 [i_3]))))))));
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_17 [i_2 + 1] [i_2 + 1]), (((/* implicit */signed char) arr_9 [i_0] [i_1] [i_0] [i_3]))))) ? (var_6) : (max((((/* implicit */unsigned int) var_4)), (0U))))))));
                        var_13 += ((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)56)))), (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 2] [i_2 + 2]))));
                    }
                    var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) ((var_7) && (var_7))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2418799753U)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_10 [i_1]))))) ? (((/* implicit */int) (signed char)-19)) : (((((/* implicit */int) arr_3 [i_1] [i_1])) ^ (arr_12 [i_1] [i_2])))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (signed char)18))));
    }
    var_16 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_27 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) (short)-9339)), (arr_26 [i_6] [i_8])))) ^ (arr_21 [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_8])) != (((/* implicit */int) (unsigned char)63))))) != (((/* implicit */int) arr_22 [i_7] [i_8])))))) : (var_2)));
                    var_17 *= ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-16)), (arr_26 [i_6] [i_7])));
                    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_2)) ? (arr_20 [i_6]) : (3739833326U))), (min((arr_20 [i_8]), (((/* implicit */unsigned int) arr_23 [i_6] [i_7] [i_7]))))));
                    arr_28 [i_6] [i_6] = ((/* implicit */long long int) (~((~(((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) var_9)))))))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_19 = max((((((/* implicit */_Bool) arr_29 [i_6] [(unsigned char)2] [i_6] [(signed char)12] [i_6])) ? (((/* implicit */long long int) arr_25 [i_6] [i_7] [i_8] [i_8])) : (((((/* implicit */_Bool) arr_26 [i_6] [i_6])) ? (arr_21 [i_6]) : (((/* implicit */long long int) arr_20 [9U])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_6] [i_6]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 3; i_10 < 22; i_10 += 2) 
                        {
                            arr_34 [21U] [i_7] [i_8] [i_10] [i_10] = ((/* implicit */signed char) ((((arr_33 [i_6] [i_7] [i_7] [i_6] [i_6]) + (2147483647))) << (((arr_25 [i_6] [i_7] [i_9] [(unsigned char)2]) - (1076975839U)))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1493558746)) ? (259130100U) : (555133969U)));
                            var_21 *= ((/* implicit */short) (_Bool)1);
                        }
                        arr_35 [i_7] = ((((/* implicit */int) min((arr_30 [8LL] [i_7] [13] [i_7] [8LL]), (arr_30 [i_6] [(short)19] [i_8] [i_8] [i_8])))) ^ (((/* implicit */int) arr_30 [i_6] [(short)8] [i_8] [i_9] [i_9])));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((3154704810U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6] [i_8] [i_9])))))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-57))))) ? (arr_33 [i_6] [15U] [(_Bool)1] [i_6] [i_6]) : (((/* implicit */int) arr_23 [(short)19] [(short)12] [i_8])))))));
                    }
                }
                var_23 = (-(((((/* implicit */_Bool) arr_21 [i_6])) ? (max((arr_26 [i_6] [i_7]), (((/* implicit */int) arr_23 [i_6] [i_7] [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [(unsigned char)6] [(unsigned char)6] [i_6] [(_Bool)1] [(signed char)21]))))))));
                arr_36 [i_7] [i_7] &= ((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_7]);
                /* LoopSeq 3 */
                for (short i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_6] [i_7] [i_6]))) == (max((var_1), (((/* implicit */unsigned int) arr_24 [i_6]))))))));
                    arr_40 [i_6] [(unsigned char)8] [i_6] [i_6] = arr_38 [i_6] [i_7] [i_11];
                }
                for (short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 2; i_13 < 23; i_13 += 4) 
                    {
                        for (signed char i_14 = 2; i_14 < 23; i_14 += 3) 
                        {
                            {
                                var_25 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_14 - 2] [i_14] [(unsigned char)22])) ? (((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6] [7U])) : (((/* implicit */int) arr_38 [i_6] [i_13] [(signed char)14]))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                                arr_50 [i_14] = min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)12))))) || ((!(((/* implicit */_Bool) arr_48 [i_6] [i_6] [i_6] [i_6] [i_14])))))), ((_Bool)0));
                                arr_51 [i_6] [i_14] [(unsigned char)14] [i_6] [i_6] = min((max((((/* implicit */unsigned int) (short)22330)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (3642966258U) : (907063620U))))), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_23 [i_6] [i_7] [i_7])) / (((/* implicit */int) arr_44 [i_7] [i_7])))), (((/* implicit */int) arr_31 [i_14 - 2] [i_12] [i_13 + 1] [(signed char)8]))))));
                                var_26 = ((/* implicit */_Bool) max(((((_Bool)1) ? (259130083U) : (3642966258U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 259130104U)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_6] [i_6] [(short)2]))))) ? (652001037U) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6] [i_6] [13U])) ? (((/* implicit */int) arr_24 [16LL])) : (((/* implicit */int) arr_38 [i_6] [i_7] [i_6])))))))));
                    var_28 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_6] [4U] [i_12])) ? (((/* implicit */unsigned int) arr_33 [i_6] [i_12] [i_6] [i_7] [8U])) : (0U)))) || (((/* implicit */_Bool) arr_42 [i_6] [i_6] [i_6] [i_6])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))) <= (arr_25 [i_6] [i_6] [i_6] [8U]))));
                    arr_52 [i_6] [(_Bool)1] [i_6] = ((/* implicit */signed char) (-(((long long int) ((((/* implicit */_Bool) 3566740814U)) ? (555133969U) : (861620630U))))));
                    arr_53 [i_6] [i_7] = ((/* implicit */int) min(((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [10U] [10U] [i_12] [i_12] [i_12]))) - (var_1))))), (((/* implicit */unsigned int) arr_30 [i_6] [i_7] [i_7] [i_12] [i_12]))));
                }
                for (short i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */_Bool) 2U);
                    var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_6] [8U] [i_15])) ? (((((/* implicit */_Bool) arr_56 [16U] [i_7] [i_15])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [(signed char)21] [i_6] [i_7] [i_7] [(unsigned char)20])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_32 [(short)19] [14LL] [i_7] [i_7] [i_15] [(short)19]))))) : (arr_42 [i_6] [i_7] [i_15] [i_15]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_30 [i_6] [i_7] [i_6] [i_6] [i_6]), (arr_30 [i_6] [i_6] [i_7] [11U] [i_15])))))));
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            {
                                arr_63 [i_16] [i_15] [i_6] = ((/* implicit */unsigned int) arr_22 [i_7] [i_17]);
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_16 - 1] [i_7] [i_7] [(unsigned char)5])) ? (((/* implicit */int) ((1140262485U) > (3292993888U)))) : (((/* implicit */int) arr_57 [i_16 + 1] [i_16 - 1] [(_Bool)1] [i_16 - 1]))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8191U)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) arr_59 [i_17] [18LL] [i_6] [i_6] [i_6]))))), (arr_58 [i_16 + 1] [i_16 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [16U] [i_16 - 1] [(_Bool)1] [i_16 - 1] [(_Bool)1])))));
                                var_32 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_58 [0LL] [i_16 - 1])) ? (arr_58 [i_6] [i_16 + 1]) : (arr_58 [i_17] [i_16 - 1])))));
                                arr_64 [i_6] [i_7] = ((/* implicit */unsigned int) arr_48 [i_6] [i_6] [i_6] [i_6] [i_6]);
                                arr_65 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_48 [(signed char)16] [i_7] [i_15] [(signed char)16] [i_6]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        arr_70 [i_6] [i_7] [i_15] [i_18] [i_6] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) arr_33 [i_6] [i_7] [i_7] [i_18] [(signed char)10])), (((((/* implicit */_Bool) arr_24 [i_18])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_18] [i_18] [i_15] [i_18] [i_6] [(signed char)15]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_59 [i_6] [i_7] [i_15] [(_Bool)1] [i_18])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_6]))))) : (((/* implicit */int) arr_46 [i_6] [i_7])))))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) max((arr_59 [i_18] [i_15] [i_7] [(_Bool)1] [i_6]), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_6] [i_7] [i_15] [i_6]))))) && (((/* implicit */_Bool) (~(var_6))))))))))));
                        var_34 = ((/* implicit */long long int) (~(((unsigned int) arr_56 [i_6] [i_6] [i_6]))));
                    }
                }
            }
        } 
    } 
}
