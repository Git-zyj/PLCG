/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211477
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */long long int) (~(max((arr_3 [i_0] [i_0]), (3037830774U)))))) : (((long long int) arr_0 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned long long int) ((max((((arr_2 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1257136522U)) ? (1257136519U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) >= (((/* implicit */long long int) min((((((/* implicit */_Bool) 1257136526U)) ? (470088192U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) << (((/* implicit */int) (_Bool)1))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18321324894759973987ULL))));
        var_20 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_2] [i_3] [i_4])))))));
                    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */signed char) var_2);
                    arr_16 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 3933870681U)) : (var_14))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) (short)8941)))) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])) : (arr_14 [i_2])));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) (~(min((min((((/* implicit */unsigned long long int) 3913129764U)), (13835058055282163712ULL))), (min((((/* implicit */unsigned long long int) arr_17 [i_5] [i_5])), (arr_6 [i_5])))))));
        var_27 &= ((((/* implicit */unsigned long long int) arr_5 [i_5] [i_5])) ^ (((((/* implicit */_Bool) (+(arr_2 [i_5])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_4)))) : ((~(18321324894759973987ULL))))));
        var_28 = ((/* implicit */signed char) max((min((18321324894759973987ULL), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_6 [i_5]))))))), (((/* implicit */unsigned long long int) arr_10 [2U] [i_5]))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 10; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_29 = arr_9 [i_9];
                                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 6851806347671135458LL)), (((((/* implicit */_Bool) 2490202637U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15989911234394422180ULL))))))));
                                var_31 = ((((/* implicit */unsigned long long int) ((((arr_10 [i_9] [i_9]) / (((/* implicit */long long int) 1257136521U)))) + (((/* implicit */long long int) ((/* implicit */int) (short)9582)))))) + ((+(var_14))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) 1722124801U);
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (!(((min((arr_22 [i_5] [i_6] [i_6]), (((/* implicit */unsigned int) (_Bool)1)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) 4294967295U)))))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
        {
            for (unsigned int i_11 = 4; i_11 < 11; i_11 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        arr_35 [i_12] [i_10] [i_12] = arr_11 [i_10];
                        arr_36 [i_5] [i_5] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) arr_21 [i_10] [i_10] [i_10]);
                        var_34 = ((/* implicit */short) (+(arr_15 [i_12 - 1] [i_11 - 1] [i_10 + 1])));
                        var_35 = ((/* implicit */unsigned long long int) ((_Bool) (~(arr_11 [i_10]))));
                    }
                    for (long long int i_13 = 2; i_13 < 10; i_13 += 2) 
                    {
                        var_36 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3424760508U))))), (var_18)));
                        var_37 = ((/* implicit */long long int) (_Bool)1);
                        arr_39 [i_5] [i_5] [i_5] [i_13] [i_11] [i_13] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_11] [i_13])))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((431341704U) + (4294967287U)))))));
                    }
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) arr_42 [i_5] [i_5] [i_5] [i_5]);
                        arr_44 [i_5] [i_10] [i_11] [(_Bool)1] [i_10] [i_14] |= ((/* implicit */signed char) 2009245633U);
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3863625604U))))), (((arr_20 [i_10] [i_10 - 1] [i_10 - 1]) | (31U))))))));
                        arr_45 [i_5] [i_5] [i_10] [i_10] [i_11] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) max((var_14), (min((524287ULL), (((/* implicit */unsigned long long int) 4294967266U)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 3; i_15 < 11; i_15 += 4) 
                    {
                        arr_48 [i_5] [i_10] [i_11] [4ULL] [i_5] [4ULL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((6042406764688946235LL) & (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11] [i_15])))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_18)) ? (arr_31 [i_11] [i_11] [i_11] [i_11]) : (var_2)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            arr_52 [i_5] [i_5] [i_10] = ((/* implicit */unsigned int) (+((-(var_7)))));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2326218886037668204ULL)) || (((/* implicit */_Bool) ((unsigned int) 431341704U)))));
                            var_41 |= ((/* implicit */unsigned long long int) arr_33 [i_10] [i_10 + 1] [i_11] [i_10] [i_15 + 1]);
                            var_42 = ((/* implicit */unsigned long long int) arr_33 [i_5] [i_5] [i_5] [i_15] [i_16]);
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (((-(arr_46 [i_5] [i_10] [i_5] [10ULL]))) * (1772102365U))))));
                        }
                    }
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) 6042406764688946235LL))));
                    var_45 = ((/* implicit */signed char) arr_24 [i_5] [i_10] [i_11] [i_10]);
                }
            } 
        } 
    }
    var_46 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((var_4) != (var_4)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 3863625588U)) : (var_0)))) ? (((2326218886037668204ULL) >> (((4294967284U) - (4294967247U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-63)) >= (((/* implicit */int) (_Bool)1))))))))));
}
