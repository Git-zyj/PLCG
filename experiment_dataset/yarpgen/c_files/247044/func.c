/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247044
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)145)) && (((/* implicit */_Bool) (unsigned char)173)))))) : ((~(var_10))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_2] [i_0] [i_0])))));
                            arr_12 [i_0] [0U] [i_2] [i_0] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) max(((signed char)-37), ((signed char)-77)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((signed char) (((!(((/* implicit */_Bool) arr_0 [(unsigned char)3])))) ? (((/* implicit */int) ((unsigned char) (unsigned char)7))) : ((+(((/* implicit */int) (unsigned char)175)))))));
                            var_19 ^= ((unsigned short) (unsigned char)140);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 3; i_6 < 22; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_1 [i_6 - 1])))));
                                arr_26 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)54978))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_19 [i_8 + 2] [i_6 - 3] [i_0 + 2] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) arr_19 [i_8 + 2] [i_6 - 3] [i_0 + 2] [i_1 + 1])))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_3 [i_0 - 4] [i_0 + 2] [i_1 + 2])))) + (2147483647))) >> (((((/* implicit */int) max((arr_3 [i_0 - 4] [i_0 + 2] [i_1 + 2]), (((/* implicit */unsigned short) arr_6 [i_0 - 4]))))) - (37755)))));
            }
        } 
    } 
    var_23 = (unsigned char)81;
    /* LoopNest 2 */
    for (unsigned short i_9 = 1; i_9 < 9; i_9 += 2) 
    {
        for (unsigned char i_10 = 2; i_10 < 8; i_10 += 1) 
        {
            {
                var_24 |= ((/* implicit */unsigned char) (-((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_11 = 1; i_11 < 9; i_11 += 2) /* same iter space */
                {
                    arr_34 [i_11] = arr_29 [i_9];
                    var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [(unsigned short)21] [i_9] [i_9] [i_9 + 1] [i_9])) || (((/* implicit */_Bool) arr_23 [(unsigned short)12] [i_9] [i_9] [i_9 + 1] [(unsigned short)12]))));
                    arr_35 [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)26)) > (((/* implicit */int) arr_10 [i_9] [i_10] [i_10 - 2] [(unsigned char)5] [22U] [i_11 + 1]))));
                }
                for (unsigned char i_12 = 1; i_12 < 9; i_12 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) max((max((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_16))))), (((((/* implicit */int) (unsigned short)26210)) * (((/* implicit */int) (unsigned char)178)))))), (((((/* implicit */_Bool) max((arr_18 [i_9] [i_9]), (arr_36 [i_9] [i_10] [(unsigned short)7])))) ? (((/* implicit */int) arr_21 [i_9] [(unsigned short)10] [(signed char)2] [i_9])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)52))))))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)10010)) * (((/* implicit */int) arr_5 [i_12] [i_12] [17U] [i_9])))) * (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) arr_31 [i_9] [i_10] [i_12 + 1] [i_9 - 1])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))))))))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_2 [i_12 - 1])))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)31097)) > (((/* implicit */int) arr_2 [i_12 - 1]))))))))));
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_43 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? ((-(arr_42 [(unsigned char)6] [i_10] [(signed char)9] [i_10]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_9 + 1])) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) arr_3 [i_9] [(unsigned char)17] [(unsigned char)16]))))))))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)14)) * (((/* implicit */int) arr_7 [i_9 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)26145), ((unsigned short)14688)))) * (((/* implicit */int) (unsigned char)215))))) : (max((884920662U), (((/* implicit */unsigned int) arr_4 [i_9] [i_9 - 1] [i_10 + 1]))))));
                    }
                    arr_44 [i_13] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((1073741823U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31044))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)39861)))))))), (((((/* implicit */int) (unsigned char)255)) >> ((((+(((/* implicit */int) var_3)))) - (37)))))));
                }
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max(((unsigned short)18705), (((/* implicit */unsigned short) var_1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_9] [i_10 + 2] [i_9 + 1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_39 [i_9 - 1] [i_10 + 2] [i_9 + 1]))))) : (((((((/* implicit */_Bool) arr_28 [i_10 - 1])) && (((/* implicit */_Bool) var_0)))) ? (((unsigned int) arr_0 [(unsigned char)17])) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)202)) | (((/* implicit */int) arr_9 [i_9] [(unsigned short)4])))))))));
                    arr_47 [i_10] [i_10] [i_10] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)215)) < (max((((/* implicit */int) (unsigned short)738)), (((((/* implicit */int) arr_36 [i_9] [i_9] [i_9])) >> (((((/* implicit */int) (unsigned char)255)) - (242)))))))));
                }
                var_31 += ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned char)58), (((unsigned char) (unsigned char)183))))) >= (((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
}
