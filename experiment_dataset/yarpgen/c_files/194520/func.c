/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194520
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))) ^ (-9205092846424716054LL))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]);
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -6172637111209012644LL))))));
            arr_4 [i_1] [6ULL] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_12)) : (((int) 4294967295U)));
            var_18 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)40836))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (arr_1 [i_1] [i_2]) : (((unsigned int) (signed char)28))));
                arr_8 [(signed char)6] [(signed char)6] = ((/* implicit */_Bool) (signed char)-92);
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(15753286689092836255ULL))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_12 [i_0] [(unsigned char)6] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) arr_2 [i_0] [i_2] [i_3]));
                    var_22 = ((/* implicit */short) min((var_22), (((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */int) (unsigned short)3)))))));
                }
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((/* implicit */int) var_12)))))));
            }
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_15 [i_4]) : ((~(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) max((17), (((/* implicit */int) (unsigned char)231))))) : (((max((var_7), (((/* implicit */unsigned int) (signed char)-112)))) >> (((((/* implicit */int) arr_11 [i_4] [i_4] [i_4])) - (12322)))))));
            var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-28))))) ? (((/* implicit */long long int) (~(arr_15 [i_0])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_4])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            arr_21 [(unsigned char)4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_0])))) ^ (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_12)) - (155)))))));
            arr_22 [(signed char)7] [i_5] [i_5] = ((/* implicit */long long int) max((((unsigned short) ((((/* implicit */_Bool) 15753286689092836255ULL)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned char)24))))), (((/* implicit */unsigned short) ((_Bool) arr_13 [i_0] [i_0] [i_0])))));
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 1; i_7 < 6; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 3) 
                    {
                        {
                            arr_31 [i_8] &= ((/* implicit */unsigned char) ((((((((min((((/* implicit */long long int) (short)-24452)), ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_16 [i_0] [i_7 - 1] [i_9])) - (15))))) ^ (max((((/* implicit */long long int) 1U)), (((9223372036854775801LL) << (((((/* implicit */int) var_1)) - (13995)))))))));
                            arr_32 [i_7] [i_6] [(_Bool)1] [i_7] [i_8] [i_7] [(_Bool)1] = ((/* implicit */short) ((var_11) ? ((+(arr_2 [i_7 + 4] [i_6] [i_9 + 1]))) : (((unsigned int) arr_28 [i_0] [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
            } 
            var_26 = (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)95)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) 3857071845U)) ? (2968652404U) : (3850261341U))))));
            arr_33 [i_0] [i_6] [i_0] = arr_20 [i_0];
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63964)) >> (((((/* implicit */int) (unsigned short)40836)) - (40822)))))) ^ (max((arr_2 [i_6] [i_0] [i_0]), (arr_2 [i_0] [i_6] [i_6])))));
        }
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) max((((((arr_2 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) var_4)))) ? (((/* implicit */long long int) 0U)) : (min((arr_36 [0U]), (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_10] [i_0] [i_11])))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_38 [i_0] [(_Bool)1] [i_11])), (var_9))))));
                    arr_39 [i_11] = (+(((/* implicit */int) var_3)));
                }
            } 
        } 
        arr_40 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_20 [i_0])));
        arr_41 [i_0] [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_14 [i_0] [i_0] [i_0])) >> ((((+(var_8))) - (229779112)))));
    }
    for (int i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) (+((+(max((var_7), (((/* implicit */unsigned int) (signed char)63))))))));
        var_30 = ((/* implicit */unsigned char) arr_37 [i_12] [i_12] [i_12] [i_12]);
    }
    var_31 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((int) var_4))) ? ((~(((/* implicit */int) var_10)))) : (((int) var_13)))));
}
