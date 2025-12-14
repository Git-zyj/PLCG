/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232157
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
    var_11 += ((/* implicit */signed char) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))), (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))))))), (((((/* implicit */_Bool) max(((unsigned char)49), ((unsigned char)161)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((2865252717U), (1429714578U)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_12 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)9)), (992341274U)))))));
                    var_13 &= (-(((((((/* implicit */int) (unsigned char)83)) == (((/* implicit */int) (unsigned char)115)))) ? (((unsigned long long int) arr_2 [i_0] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_2] [i_1])) : (((/* implicit */int) (unsigned char)83))))))));
                }
                arr_6 [i_0] [11ULL] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)83))));
                arr_7 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1273826817) : (((/* implicit */int) (signed char)39))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((var_2) > (((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) 4049071620304287614ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)127))) : (var_2))) : (max((var_7), (((/* implicit */unsigned long long int) (unsigned short)52235))))))));
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(arr_8 [i_3] [i_3])))), (min(((~(var_7))), (((/* implicit */unsigned long long int) ((signed char) var_7)))))));
        var_15 += (-(1429714578U));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_3)))))) && (((/* implicit */_Bool) min((arr_9 [i_3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1100585280))))))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_3])) ? (0) : (((/* implicit */int) arr_1 [i_3])))) + (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_3])))))))));
        var_17 -= ((/* implicit */unsigned char) (+(min((1429714578U), (((/* implicit */unsigned int) ((unsigned short) (signed char)-64)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_2 [i_4] [i_4])), ((~(((/* implicit */int) arr_2 [2ULL] [i_4]))))));
        var_18 += ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)36))))) - (14068998203262393436ULL)))) ? ((-(((/* implicit */int) ((signed char) (unsigned char)246))))) : (-1950170699));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) ((0) >= (((/* implicit */int) (signed char)5))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_6] [i_5]))) <= (arr_22 [(unsigned short)14] [i_5] [i_6])));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(arr_4 [i_4] [i_6]))))));
                }
                for (unsigned short i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_4] [i_4]))))) + (var_0)));
                    var_22 = ((/* implicit */signed char) ((unsigned short) arr_25 [i_4] [i_8 - 1]));
                    arr_29 [i_4] [i_6] [i_5] [i_4] = ((/* implicit */unsigned int) var_4);
                }
                arr_30 [(signed char)18] [(signed char)18] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1950170688)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)9))))) : ((~(arr_13 [15] [i_5])))));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    arr_34 [i_6] [i_4] [i_4] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_4]))));
                    var_23 = ((/* implicit */signed char) ((((int) (signed char)5)) / (((/* implicit */int) (unsigned char)237))));
                }
            }
            for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_24 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_4] [i_10]))));
                var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 1950170699)) ? (((((/* implicit */_Bool) (unsigned short)63)) ? (8281749167236509742ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1950170699)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)115)))))));
                var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                var_27 += ((/* implicit */unsigned char) (unsigned short)55955);
            }
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                var_28 = ((((((/* implicit */int) (unsigned short)24659)) > (((/* implicit */int) var_4)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_40 [i_4] [i_11] [i_11])) ? (((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_11] [i_4])))));
                var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_4] [i_4] [(unsigned char)14] [i_4])) ? (((/* implicit */int) ((signed char) arr_17 [i_5] [i_11]))) : (((/* implicit */int) ((unsigned char) arr_31 [6U])))));
                var_30 = ((/* implicit */unsigned short) max((var_30), (arr_21 [i_4] [i_4] [i_4] [i_4])));
                var_31 = ((/* implicit */unsigned short) (unsigned char)141);
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (arr_23 [i_4])))) ? (arr_13 [(unsigned char)18] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_11])))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_12 = 2; i_12 < 16; i_12 += 2) 
            {
                arr_45 [i_4] [i_4] [i_12 + 2] = ((/* implicit */unsigned char) var_1);
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_12])) ? (((/* implicit */unsigned int) arr_43 [i_4] [i_5] [i_12 + 4])) : (arr_12 [i_12]))))));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((signed char) var_6)))));
            }
            /* LoopSeq 2 */
            for (signed char i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_13 + 1]))));
                var_36 ^= ((/* implicit */unsigned short) ((arr_18 [i_13 - 1] [(signed char)6] [i_13 + 1]) / (arr_43 [i_13 - 1] [i_5] [i_4])));
                arr_49 [i_4] [i_4] = ((/* implicit */unsigned int) arr_39 [i_4] [i_13 + 1] [i_4] [i_13 - 1]);
            }
            for (unsigned char i_14 = 3; i_14 < 18; i_14 += 4) 
            {
                arr_54 [i_4] = ((/* implicit */unsigned short) arr_47 [i_4] [i_14 - 1] [i_14 + 2]);
                arr_55 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_4] [i_14 - 3] [i_14 - 2])) ? (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)95)))) : (((((/* implicit */_Bool) 1778353084U)) ? (((/* implicit */int) arr_44 [i_14] [i_5] [i_5] [i_4])) : (((/* implicit */int) arr_40 [i_4] [i_4] [i_4]))))));
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((unsigned short) arr_58 [i_15] [i_14 + 2] [(unsigned short)14] [i_15])))));
                    var_38 ^= ((/* implicit */int) var_8);
                }
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    var_39 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_23 [i_4])) ? (arr_33 [i_4] [i_4] [i_4] [i_16]) : (((/* implicit */unsigned long long int) arr_41 [i_4] [i_14 - 3] [i_5] [i_4])))));
                    arr_63 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_4] [i_5])) ? (((/* implicit */int) var_10)) : (var_6))) + (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) arr_14 [i_4] [i_5])) : (((/* implicit */int) arr_51 [i_4] [i_5] [i_4] [i_5]))))));
                    arr_64 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_14 + 1] [i_14 + 1] [i_14 - 2] [i_14 - 3]))) : (((unsigned long long int) arr_61 [i_4] [i_5] [i_5] [(signed char)18]))));
                }
                var_40 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_14 + 1])) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) arr_59 [i_14 + 2] [i_14] [i_5] [i_4]))))));
                var_41 += ((int) var_5);
            }
        }
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            var_42 &= ((int) (-(1974213158U)));
            var_43 = ((/* implicit */signed char) max((var_43), (((signed char) ((((/* implicit */_Bool) (unsigned short)366)) ? (((/* implicit */unsigned long long int) -1653171482)) : (arr_33 [i_4] [i_17] [i_17] [i_17]))))));
            var_44 -= ((/* implicit */int) ((unsigned long long int) ((unsigned char) var_7)));
        }
        arr_68 [i_4] = ((/* implicit */signed char) min((min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) arr_15 [i_4])))), (((/* implicit */int) ((signed char) arr_23 [i_4])))));
    }
    var_45 = ((/* implicit */unsigned short) (signed char)57);
}
