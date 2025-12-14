/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48504
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
    var_14 = ((/* implicit */unsigned int) var_13);
    var_15 = ((/* implicit */_Bool) ((unsigned char) max((((((/* implicit */int) var_12)) <= (((/* implicit */int) var_13)))), ((!(var_12))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) min((var_2), (((/* implicit */signed char) (!(var_11))))))) : (((((((/* implicit */int) var_8)) % (((/* implicit */int) (signed char)-1)))) >> (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 *= min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) <= (arr_0 [i_2])))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) arr_8 [i_2] [i_1] [i_0] [i_0])))))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) ^ (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-7965203654751286752LL))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) | (arr_0 [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12)))));
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned char) min(((+(((long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) - (((/* implicit */int) (signed char)15))))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_0])))) : (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_1 [i_0]))));
                        var_19 = ((/* implicit */long long int) ((((_Bool) arr_4 [i_0] [i_5] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_5]))))))) : (arr_14 [i_3] [i_5])));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) arr_16 [i_5] [i_3] [i_4] [i_5])))), (((/* implicit */int) (unsigned char)255))));
                            var_21 = ((signed char) max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_13 [i_4] [i_3 + 2] [i_0]))));
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_3] [i_5] [i_6]) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) arr_18 [i_6] [i_6] [i_5] [i_4] [i_3] [i_0])))) : ((+(((/* implicit */int) arr_13 [i_6] [i_5] [i_3])))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_10) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_7] [i_5] [i_4] [i_3] [i_3] [i_0])) * (((/* implicit */int) var_11))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_3 - 2] [i_4]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))));
                            var_23 = ((_Bool) (~(((/* implicit */int) min((arr_5 [i_7] [i_3]), (((/* implicit */unsigned char) arr_11 [i_0])))))));
                        }
                        var_24 |= ((((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3 + 1] [i_3 - 3] [i_3] [i_3])) ? (min((((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5])), (arr_23 [i_5] [i_4] [i_3] [i_3] [i_3] [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
        var_26 = ((unsigned char) arr_4 [i_0] [i_0] [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            var_27 ^= ((/* implicit */signed char) ((arr_19 [i_0] [i_0] [i_0] [i_0]) >= ((~(((arr_8 [i_8] [i_8] [i_8] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (10U)))))));
            arr_27 [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_8] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_8] [i_0])))) <= ((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))));
            var_28 *= ((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-16)) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (-7965203654751286752LL))) - (3LL))))) - (((/* implicit */int) ((_Bool) arr_14 [i_0] [i_8])))));
            arr_28 [i_0] [i_8] = ((/* implicit */signed char) arr_2 [i_0]);
            arr_29 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) | ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_8] [i_8]))))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))));
            var_30 = ((/* implicit */unsigned char) ((arr_32 [i_0] [i_9] [i_9]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_9] [i_9])))));
            arr_33 [i_0] [i_9] [i_9] = ((/* implicit */_Bool) ((arr_22 [i_0] [i_0] [i_9]) ? (((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9] [i_0] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_9]))));
        }
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
            {
                arr_39 [i_0] [i_0] [i_11] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_19 [i_11] [i_10] [i_10] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_38 [i_0])))) : (((arr_23 [i_0] [i_10] [i_11] [i_10] [i_10] [i_11]) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                arr_40 [i_0] [i_10] [i_11] [i_11] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_8)))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) | (3507536614U))) - (3507536625U)))))));
                var_31 = ((/* implicit */_Bool) var_7);
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(((((/* implicit */int) var_3)) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10] [i_11]))) % (7965203654751286748LL))) - (52LL))))))))));
                var_33 = ((/* implicit */_Bool) (~((((((-(((/* implicit */int) (signed char)6)))) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))) - (arr_32 [i_0] [i_10] [i_10]))) - (207037081U)))))));
            }
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
            {
                arr_43 [i_12] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)64)) | (((/* implicit */int) (unsigned char)225))))) ? (((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) arr_16 [i_0] [i_10] [i_12] [i_12])))) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_6 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2275268118485631398LL)) ? (((/* implicit */long long int) 2946020537U)) : (-1737646338182506848LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_10] [i_0] [i_12] [i_0]))))))) : ((-(((arr_35 [i_10] [i_10] [i_10]) * (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_12] [i_10])) >> (((/* implicit */int) ((arr_19 [i_12] [i_12] [i_12] [i_12]) == (arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_10])) ? (((((/* implicit */_Bool) (signed char)119)) ? (arr_0 [i_0]) : (arr_0 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_12]) == (arr_0 [i_12])))))));
            }
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_10] [i_0] [i_0] [i_0] [i_0]))))) / (((/* implicit */long long int) max((arr_32 [i_10] [i_0] [i_0]), (((/* implicit */unsigned int) var_3))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_0]))))))));
            var_37 = ((/* implicit */_Bool) min((-1737646338182506859LL), (((/* implicit */long long int) (_Bool)1))));
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_38 = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_13] [i_13])) ? (((/* implicit */int) arr_11 [i_13])) : (((/* implicit */int) var_4)))))) <= (((((/* implicit */_Bool) min((arr_23 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]), (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-123)) < (((/* implicit */int) var_2))))) : (((arr_41 [i_13]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                {
                    arr_52 [i_13] [i_13] [i_13] [i_14] = ((/* implicit */_Bool) arr_44 [i_13]);
                    var_39 &= ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_42 [i_13])) : (((/* implicit */int) var_11)))) * (((/* implicit */int) arr_17 [i_14 + 1] [i_14 + 1] [i_14 + 1])))));
                }
            } 
        } 
        arr_53 [i_13] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_44 [i_13])) && (((/* implicit */_Bool) 1348946758U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_13] [i_13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)221))))) ? (((((/* implicit */_Bool) (unsigned char)25)) ? (4145323592U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_25 [i_13] [i_13]) || (((/* implicit */_Bool) var_7))))) % (((/* implicit */int) arr_42 [i_13]))))));
        /* LoopNest 2 */
        for (long long int i_16 = 1; i_16 < 16; i_16 += 3) 
        {
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                {
                    var_40 = ((/* implicit */long long int) min((var_40), (min(((+(((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (1204477606945312921LL))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) > ((+(((/* implicit */int) (unsigned char)25)))))))))));
                    var_41 *= ((/* implicit */unsigned char) (+(((arr_47 [i_13] [i_17]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_17])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_42 [i_13])))))))));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned char) ((arr_3 [i_13] [i_13]) ? (((arr_3 [i_13] [i_13]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) arr_3 [i_13] [i_13])))));
    }
}
