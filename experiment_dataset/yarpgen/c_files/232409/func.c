/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232409
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((((/* implicit */int) ((_Bool) (_Bool)0))) / (arr_0 [i_0]));
        arr_2 [i_0] = ((/* implicit */long long int) (~((~((-(((/* implicit */int) (_Bool)0))))))));
        var_21 ^= ((/* implicit */long long int) (((+(-1636432316))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_4])))) && (((/* implicit */_Bool) ((int) 1023LL)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16))))))))));
                                var_23 = ((/* implicit */unsigned int) var_4);
                                var_24 = ((/* implicit */unsigned char) (_Bool)0);
                                var_25 = ((/* implicit */_Bool) ((long long int) 0));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) arr_14 [i_5] [i_2 + 2] [i_2 - 1] [i_1 + 1] [i_0]);
                        var_27 = ((/* implicit */unsigned char) 730083595);
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            var_28 = arr_16 [i_2] [i_2];
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((long long int) (~((~(1023LL)))))))));
                            var_30 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                            arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2 + 1] [i_2]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_6]))))), (min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)64)))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)191))))))));
                        }
                        for (short i_7 = 2; i_7 < 15; i_7 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (~(var_10))))));
                            var_32 += ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_5] [i_5] [i_1 + 1] [i_5])) * (((((/* implicit */int) arr_21 [i_5] [i_1] [i_1 + 1] [2U] [i_1 + 1])) * (((/* implicit */int) arr_11 [i_2 - 2] [i_1] [i_1 + 1] [i_7] [i_1 + 1] [i_7 - 2]))))));
                            var_33 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)176)) : (-1)))) ? (-2147483635) : (((/* implicit */int) (_Bool)1)));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            arr_25 [i_0] [i_1 + 1] [i_2] [i_2] [i_8] = ((/* implicit */unsigned short) ((short) arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 2]));
                            arr_26 [i_0] [i_0] [i_2 - 2] [1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) 67108863)) + (3733167752U)));
                            arr_27 [i_2] [i_5] [0] [14] [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_24 [i_8] [i_5] [i_2 + 1] [i_1] [i_0])) >= (((/* implicit */int) (_Bool)1)))));
                            var_34 += ((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) var_1)))))));
                        }
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_4))))));
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_6))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */int) ((((((/* implicit */_Bool) 3200642707638482027LL)) ? (((long long int) var_13)) : (arr_16 [i_2 + 3] [i_2]))) - (((/* implicit */long long int) ((((/* implicit */int) var_17)) / (((/* implicit */int) ((short) arr_16 [i_2] [i_2]))))))));
                        var_38 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(var_4)))) ? ((-(var_10))) : (((/* implicit */int) arr_21 [i_2] [i_1 + 1] [i_1 + 1] [i_2] [i_9]))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */short) (!(((_Bool) arr_15 [i_2 - 2] [i_2 - 1] [i_2] [i_1] [10]))));
                        var_40 = ((/* implicit */unsigned short) var_12);
                        var_41 = ((/* implicit */_Bool) min((var_41), (((arr_31 [i_0]) >= ((~(arr_31 [i_10])))))));
                    }
                    var_42 = ((/* implicit */int) max((var_42), ((~(var_4)))));
                    var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        arr_34 [i_11] [i_11] = ((/* implicit */_Bool) ((int) arr_1 [i_11] [i_11]));
        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) var_6))));
        var_45 -= ((/* implicit */long long int) (+(((int) var_16))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_46 |= ((/* implicit */_Bool) var_2);
        var_47 ^= ((/* implicit */unsigned char) arr_35 [i_12]);
        arr_37 [(short)18] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        var_48 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_19)) > (arr_36 [i_12])))))));
        var_49 ^= ((/* implicit */long long int) arr_35 [i_12]);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_50 += ((/* implicit */int) ((_Bool) ((long long int) ((((/* implicit */_Bool) arr_7 [i_13])) ? (1023LL) : (((/* implicit */long long int) var_8))))));
        var_51 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(6826660235804905208LL)))))) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) (_Bool)1))))));
        arr_42 [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_15 = 1; i_15 < 8; i_15 += 3) 
        {
            for (long long int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                {
                    var_52 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (arr_51 [i_15] [i_15] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_14] [i_14]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_44 [i_14] [i_16]))))))), (arr_33 [i_14])));
                    var_53 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_21 [i_14] [i_15 + 1] [i_15] [i_15 + 2] [i_14])))));
                    var_54 = ((/* implicit */long long int) (!(((arr_35 [i_15 + 1]) < (((/* implicit */int) arr_5 [i_15 - 1]))))));
                }
            } 
        } 
        var_55 ^= ((/* implicit */long long int) ((_Bool) ((_Bool) arr_50 [(_Bool)1])));
        var_56 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (-7711463285542870967LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_14])))))) ? (((2483907493U) >> (((var_0) - (451897159))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) (unsigned char)191)))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        for (short i_18 = 2; i_18 < 17; i_18 += 1) 
        {
            {
                var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (arr_57 [(_Bool)1]) : (arr_36 [(unsigned char)8]))))))))));
                var_58 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_53 [i_17 - 1])) >> (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_54 [i_18])))))))) != (min((((arr_53 [i_18]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_55 [i_17] [i_17] [i_17]))), (((/* implicit */unsigned int) min((var_10), (var_8))))))));
                var_59 += ((/* implicit */_Bool) max((min((((/* implicit */short) ((7711463285542870976LL) >= (((/* implicit */long long int) 7))))), (((short) 561799544U)))), (((/* implicit */short) ((_Bool) arr_52 [i_17 - 1])))));
            }
        } 
    } 
    var_60 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
}
