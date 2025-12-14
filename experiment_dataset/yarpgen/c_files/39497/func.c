/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39497
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19574)) ? (((/* implicit */int) (signed char)116)) : (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_1])) ? (var_7) : (2261168625U))))))), (arr_1 [i_1 + 1])));
                        arr_9 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_5 [i_1 - 3] [i_1 + 1])))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2033798671U)) ? (2033798644U) : (2033798644U)));
                            arr_12 [i_2] [i_2 - 1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))) ? ((-(2033798671U))) : (var_7))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_18 = (signed char)-86;
                            var_19 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) var_3)));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_11))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                            var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10801)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) 2261168637U)) ? (2261168624U) : (2261168652U))))) : (max((((/* implicit */unsigned int) ((int) var_1))), (max((arr_11 [i_3] [i_1] [i_2 + 1] [i_3] [i_6]), (((/* implicit */unsigned int) var_3))))))));
                            var_23 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_0 [i_6] [i_3])) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (var_4))), (((((/* implicit */_Bool) var_8)) ? ((-(arr_13 [i_0] [i_0] [i_1] [i_0] [i_1] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_6] [i_6] [16])) : ((~(((unsigned long long int) -1))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)9256))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 2; i_8 < 15; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_26 = var_9;
                            var_27 = ((/* implicit */_Bool) (+((+((-(var_7)))))));
                        }
                    } 
                } 
            } 
            arr_31 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((int) ((unsigned int) 2261168652U)));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_13 = 2; i_13 < 15; i_13 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_12] [i_13 - 2] [i_13] [i_13])) : (((/* implicit */int) arr_8 [i_12] [i_13 - 1] [i_13] [i_13 - 2]))));
                    var_29 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_36 [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 + 2])) : (((/* implicit */int) arr_7 [i_13] [i_13 - 2] [i_13 + 1] [i_13 - 2]))));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                }
                var_32 = ((/* implicit */unsigned char) var_11);
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0] [(signed char)14])) ? (var_8) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_11] [i_11] [i_11] [i_12]))));
                var_34 = arr_0 [i_0] [i_0];
            }
            for (signed char i_14 = 2; i_14 < 13; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 16; i_15 += 3) 
                {
                    for (short i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        {
                            arr_49 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_13)) ? (var_0) : (arr_30 [i_0] [i_11] [i_14] [i_15] [i_14])))));
                            var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_16 [i_0] [i_0] [i_16] [i_0] [i_0])))));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1609283094U)) ? (2114674072U) : (((/* implicit */unsigned int) 501771332))));
                        }
                    } 
                } 
                arr_50 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(var_8)));
                arr_51 [i_0] [i_11] = ((/* implicit */short) (-(arr_0 [i_14 + 2] [i_14 + 1])));
            }
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_23 [i_0] [i_11] [i_11]))))))));
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_11] [i_17] [i_17]))))))));
                var_39 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_36 [i_0] [i_11] [i_0] [i_0])) ? (var_5) : (var_5))));
                var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0]))));
            }
            arr_54 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2033798650U)) ? (-326148907) : (((/* implicit */int) (!(var_9))))));
            arr_55 [i_0] [i_0] = arr_1 [i_0];
        }
    }
    for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
    {
        var_41 = ((/* implicit */unsigned long long int) (~((~(((int) arr_34 [i_18] [13U] [i_18]))))));
        var_42 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(var_0)))) ? (var_0) : (-2122129724)))));
        arr_60 [i_18] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_53 [2] [11ULL] [i_18] [i_18])))))), (max((((((/* implicit */_Bool) (unsigned short)60555)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (2354661199U))), (var_2)))));
    }
    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) 3902466182486013690ULL)))))));
    var_44 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
}
