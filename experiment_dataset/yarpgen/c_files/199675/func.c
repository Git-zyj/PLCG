/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199675
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
    var_19 = ((/* implicit */short) (((-(var_16))) > (var_16)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_20 |= ((/* implicit */unsigned char) min(((+(-4319173922222462893LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 1] [i_0])))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_21 = ((/* implicit */signed char) var_3);
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 + 1])))))));
            var_23 = ((/* implicit */int) (+(619009008U)));
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (signed char)-114))));
            var_25 = ((/* implicit */int) arr_4 [i_0 - 1]);
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))));
            /* LoopSeq 4 */
            for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_27 = max((((/* implicit */long long int) min((arr_14 [i_3 + 2] [i_3] [i_3 - 1] [i_3 - 1]), (arr_14 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 2])))), (((((/* implicit */_Bool) -4319173922222462887LL)) ? (-4319173922222462897LL) : (4319173922222462868LL))));
                    arr_16 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_7)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17)))))))));
                    var_28 = ((/* implicit */int) arr_15 [i_4] [i_3] [i_0]);
                    arr_17 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 1141966980738296362ULL)) && (((/* implicit */_Bool) 2098465434))));
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_12 [i_2] [i_2] [(_Bool)1] [(short)3] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (-730530648) : (((/* implicit */int) var_1)))))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_16) - (arr_14 [i_0] [i_2] [(unsigned short)2] [i_0])))) || (((((/* implicit */_Bool) arr_4 [i_0 - 2])) && (((/* implicit */_Bool) var_0))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 4; i_6 < 11; i_6 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) var_15);
                        arr_23 [i_5] [i_2] [i_5] [i_0] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_6 - 4] [i_0] [i_6 - 2]))));
                        arr_24 [i_2] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) == (((9051727738488769241ULL) & (((/* implicit */unsigned long long int) -4319173922222462897LL))))));
                        var_31 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0])))))));
                    }
                    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) arr_10 [i_3 + 1] [i_7 - 2] [i_0]);
                        arr_28 [i_2] [i_2] [i_3] [i_5] [i_7 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((int) ((4319173922222462879LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58115))))));
                    }
                    arr_29 [i_0] [(signed char)8] [i_3] [i_0] &= ((/* implicit */signed char) arr_22 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3 + 1]);
                    var_33 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_3 + 1]))));
                }
                var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_21 [i_0 - 2] [i_0] [i_2] [i_2] [(short)8] [(unsigned char)10])))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_7 [(signed char)4])) : (((/* implicit */int) max((arr_27 [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3]), (var_4))))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >> ((+(((/* implicit */int) ((_Bool) arr_11 [i_3 - 1] [i_2])))))));
            }
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                arr_33 [i_0] = ((/* implicit */_Bool) (~(730530631)));
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    arr_36 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_21 [i_0] [i_2] [i_0] [i_8] [i_0] [i_0]))));
                    var_37 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) arr_19 [i_9] [i_0] [i_0])) ? (var_16) : (arr_20 [i_0] [i_2] [i_8] [i_9]))))), (((/* implicit */int) var_2))));
                    arr_37 [i_0] [i_9] = ((/* implicit */short) min((((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])), (((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 - 2] [(signed char)1] [i_0 + 1] [i_0 - 2]))))));
                }
                var_38 = ((/* implicit */unsigned int) arr_30 [11ULL]);
            }
            for (unsigned char i_10 = 3; i_10 < 9; i_10 += 1) 
            {
                arr_42 [i_0] [i_0] = ((((/* implicit */long long int) ((int) (-(((/* implicit */int) var_10)))))) * (((max((var_6), (var_4))) ? (((/* implicit */long long int) var_12)) : (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_10]))) / (arr_39 [i_2] [i_2] [i_2] [i_2]))))));
                var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((9395016335220782366ULL) < (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    arr_45 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_9)), (min((var_8), (((/* implicit */unsigned long long int) arr_44 [i_2] [i_2] [i_2] [i_2] [i_2] [3LL]))))));
                    arr_46 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((9051727738488769248ULL) ^ (arr_15 [i_11] [i_2] [i_0 - 2]))));
                    var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
                    arr_47 [i_0] [i_10] [i_2] [i_0] = ((/* implicit */long long int) arr_21 [(signed char)5] [i_2] [i_2] [i_10] [i_0] [i_11]);
                }
                var_41 &= min((max((1U), (((/* implicit */unsigned int) arr_12 [(short)1] [i_10] [i_10] [i_0 - 1] [9ULL] [i_0])))), (((/* implicit */unsigned int) arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])));
            }
            /* vectorizable */
            for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
            {
                var_42 = ((unsigned char) (+(var_11)));
                arr_50 [i_0] [i_0] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-41))));
                var_43 = ((/* implicit */unsigned short) ((signed char) 3988538454U));
                arr_51 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (arr_20 [i_0] [i_0 + 1] [i_12 + 1] [i_12 + 2]) : (((/* implicit */int) var_14))));
            }
        }
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((var_8), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0])))) : (arr_11 [i_13] [i_0])))) || (((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((var_11) + (35461742))) - (3)))))) && (((/* implicit */_Bool) ((var_12) + (((/* implicit */int) arr_9 [i_0])))))))));
            arr_55 [i_0] = ((((((int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13])) <= (((/* implicit */int) ((((/* implicit */int) (signed char)-90)) < (((/* implicit */int) var_10))))))) ? (min((((/* implicit */int) (signed char)-109)), (((((/* implicit */_Bool) arr_6 [i_0])) ? (730530654) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0])))))) : ((-(((/* implicit */int) (unsigned char)236)))));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                arr_59 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0]);
                arr_60 [i_0] [6] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) arr_44 [i_0] [i_14 + 1] [i_14 + 1] [i_0] [i_14 + 1] [i_13])), ((unsigned short)65527)));
            }
        }
        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) /* same iter space */
        {
            arr_64 [i_0 - 2] [i_0] = arr_44 [4ULL] [i_15] [(signed char)2] [i_15] [i_15] [i_15];
            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_32 [i_0] [4U] [i_15] [4U])))) ? (((/* implicit */int) arr_35 [i_15] [i_0] [i_15] [i_15] [i_15] [i_15])) : (var_12)))) ? (((unsigned long long int) min((((/* implicit */unsigned short) var_15)), (arr_34 [(short)6])))) : (max((arr_11 [i_0 + 1] [i_15]), (((/* implicit */unsigned long long int) var_15)))))))));
        }
        arr_65 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (!(var_6)))), ((-(((/* implicit */int) (signed char)-8))))));
    }
    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
    {
        arr_69 [i_16] = ((/* implicit */_Bool) ((var_14) ? ((+(arr_66 [i_16]))) : (arr_66 [i_16])));
        var_46 = ((/* implicit */long long int) max((min((((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_67 [i_16])) - (56831))))), (var_12))), (((((/* implicit */_Bool) 17716534051066161099ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_67 [i_16]))))));
        arr_70 [i_16] = ((/* implicit */unsigned long long int) var_16);
    }
}
