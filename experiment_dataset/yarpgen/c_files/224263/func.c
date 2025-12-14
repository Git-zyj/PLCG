/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224263
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
    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned long long int) var_14))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (0ULL))))) * (var_0)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) var_12)) ? (-631452099) : (var_5))) : ((+(((/* implicit */int) (signed char)-38))))))));
    var_21 |= ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_1 + 4]), (arr_4 [i_1] [i_1 + 4])))) || (((/* implicit */_Bool) var_11))));
                    var_23 = ((/* implicit */int) min((var_23), ((~(((((/* implicit */int) ((unsigned char) var_2))) + (((/* implicit */int) var_13))))))));
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((unsigned int) ((((((/* implicit */int) (signed char)-38)) + (2147483647))) << (((((/* implicit */int) (signed char)50)) - (50)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))))));
                    var_24 = ((/* implicit */unsigned char) (signed char)37);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) var_2));
        arr_13 [14U] [i_3] = ((/* implicit */int) arr_11 [i_3 - 1]);
    }
    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4] [i_4])) + (((/* implicit */int) (signed char)-50))))) <= (1940199516U)))) % (((/* implicit */int) (unsigned char)62))));
        var_25 = ((/* implicit */long long int) ((((((arr_15 [i_4] [i_4]) && (((/* implicit */_Bool) arr_16 [i_4])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (arr_14 [i_4 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1586443046)) ? (1090297661) : (((/* implicit */int) (unsigned short)54105))))))) + (((/* implicit */unsigned long long int) arr_16 [i_4]))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
        {
            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_4] [(unsigned char)12])) : (((/* implicit */int) var_3))));
            arr_22 [i_4] [i_5 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((int) (short)-18038))) : (((long long int) arr_16 [i_4]))));
            var_26 -= ((/* implicit */signed char) min((((/* implicit */long long int) arr_15 [i_4] [i_4])), (((long long int) ((((/* implicit */_Bool) arr_20 [i_4 - 1] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))) : (var_6))))));
        }
        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            arr_27 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [(unsigned short)17]))) : (arr_18 [i_4] [i_6])))) && (((((/* implicit */_Bool) arr_18 [i_4] [i_6])) || (((/* implicit */_Bool) arr_20 [i_4 + 4] [i_4 - 1] [i_6]))))))) >> (((((long long int) arr_16 [i_4 - 2])) + (1557026933LL)))));
            arr_28 [17U] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29965)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_23 [i_4] [i_4 + 3] [i_4])))) || (((/* implicit */_Bool) ((1586443046) / (((/* implicit */int) var_16))))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [(short)1])) ? (arr_26 [(unsigned short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_6]))))), (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (signed char)60))))) : (((unsigned long long int) arr_15 [i_4] [(_Bool)0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1586443046)) ? (((unsigned int) 4726104741075005335LL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6]))))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_7 = 2; i_7 < 17; i_7 += 1) /* same iter space */
        {
            arr_31 [i_4] [i_7] = ((/* implicit */unsigned char) ((unsigned int) arr_15 [i_4 + 4] [i_4 - 1]));
            arr_32 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_1)));
            var_28 = ((/* implicit */unsigned char) arr_25 [i_4] [i_4] [i_4]);
            var_29 = ((/* implicit */unsigned int) ((arr_15 [i_7 - 1] [i_7 - 2]) || (((/* implicit */_Bool) ((unsigned int) arr_14 [i_4])))));
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 1) 
            {
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((arr_29 [i_4] [i_4]) / (arr_29 [i_4] [i_7 - 1]))))));
                arr_35 [i_4] [i_4] [8U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4 + 4])) ? (arr_14 [i_4 + 4]) : (arr_14 [i_4 + 4])));
                arr_36 [i_4] [i_4 + 3] [i_7] [i_4] = ((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */int) arr_19 [i_8 + 1]))));
            }
            for (int i_9 = 3; i_9 < 17; i_9 += 1) 
            {
                arr_41 [i_4] [i_7] [i_9] = ((/* implicit */int) arr_30 [i_4 - 2]);
                var_31 = ((/* implicit */int) arr_26 [i_7]);
                arr_42 [i_9] [i_7] [i_4] = ((((/* implicit */_Bool) arr_40 [i_4] [i_7] [i_7] [i_9])) ? (((/* implicit */int) arr_19 [i_4 + 2])) : (((/* implicit */int) arr_19 [i_9 - 3])));
            }
            for (int i_10 = 2; i_10 < 16; i_10 += 3) 
            {
                arr_45 [i_4] [i_7] [i_4] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_4 - 2])) == (((/* implicit */int) (signed char)-50))));
                var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_10 + 2] [i_4 - 1]))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    arr_48 [i_4] [i_7 - 1] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_7 + 1] [i_7 - 2] [i_7] [(unsigned char)0] [(_Bool)1] [i_11])) ? (((/* implicit */int) arr_46 [i_7 - 2] [i_10] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_46 [i_7 + 1] [i_11] [i_11] [i_11] [i_11] [(unsigned short)15]))));
                    arr_49 [i_4] [9] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_4 - 1] [5U] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_4 + 3]))) : (arr_37 [i_4 - 2] [i_10] [i_10 - 2])));
                }
                for (short i_12 = 3; i_12 < 17; i_12 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_4 + 4] [i_4 - 2] [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */long long int) 1281291066)) : (arr_47 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 + 2] [i_4]))))));
                    var_34 = ((/* implicit */int) var_16);
                    arr_52 [(unsigned char)10] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_19 [i_10])))));
                }
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_4])) ? (((/* implicit */int) var_13)) : (var_12)))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))) & (5998959266156699173ULL)))));
            }
        }
        for (int i_13 = 2; i_13 < 17; i_13 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_38 [(short)17])) : (((/* implicit */int) var_3))))) && (((((/* implicit */_Bool) 762079367167047454ULL)) && (((/* implicit */_Bool) var_13)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8441290488733415793LL)) ? (arr_29 [i_4] [5ULL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51805)))))) ? (((((/* implicit */_Bool) (signed char)-60)) ? (arr_23 [i_13] [6U] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_13 + 1] [i_13] [(unsigned short)1])))))))))));
            arr_56 [i_4] [i_13] [i_13] = ((/* implicit */unsigned short) arr_23 [i_4] [i_13] [i_13 + 1]);
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 4) 
            {
                for (unsigned char i_15 = 4; i_15 < 17; i_15 += 1) 
                {
                    {
                        var_37 = ((unsigned char) arr_39 [i_4 + 4] [i_4 - 2] [i_4 + 1] [i_4 + 4]);
                        arr_62 [i_14] [i_13 - 1] [i_14 - 1] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_13 - 2] [i_4 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) 13069422093657470077ULL)) ? (arr_23 [i_4] [i_14] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5341)))))))) || (((/* implicit */_Bool) (signed char)-72))));
                    }
                } 
            } 
        }
        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_54 [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4 - 1]))) : (arr_54 [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -9223372036854775807LL))))));
            arr_66 [i_4 + 3] = ((/* implicit */int) ((unsigned int) max((arr_50 [i_4 + 1] [i_16] [(unsigned short)16] [i_16]), (arr_33 [i_4 + 1] [i_4 + 1]))));
        }
    }
}
