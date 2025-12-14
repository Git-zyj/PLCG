/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46909
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_11)) - (578)))))), (((((/* implicit */_Bool) (short)32767)) ? (1106327549U) : (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] &= max((min((((/* implicit */long long int) arr_0 [i_0])), (var_14))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32767))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */long long int) arr_0 [i_0])), (min((((/* implicit */long long int) var_13)), (var_6))))))));
        var_17 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))), (min((((/* implicit */unsigned int) var_11)), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))))), (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))));
        var_18 = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) == (((/* implicit */int) arr_4 [1] [i_1 + 1]))));
        arr_7 [i_1] = ((/* implicit */int) var_2);
        var_19 = ((/* implicit */unsigned short) min((var_19), (var_11)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) var_1);
        arr_12 [i_2] [2] = ((/* implicit */unsigned short) (-(var_10)));
        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_2]))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_2 + 1])))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            arr_19 [i_3] [i_4] = (i_3 % 2 == 0) ? (((/* implicit */int) ((((arr_18 [i_3]) + (9223372036854775807LL))) >> (((arr_18 [i_3]) + (2165364102199600621LL)))))) : (((/* implicit */int) ((((arr_18 [i_3]) + (9223372036854775807LL))) >> (((((arr_18 [i_3]) + (2165364102199600621LL))) + (2762480953523690406LL))))));
            /* LoopSeq 3 */
            for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                arr_23 [i_3] = ((/* implicit */unsigned short) arr_16 [i_3] [11ULL] [i_5]);
                arr_24 [i_3] = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (signed char)8)));
                arr_25 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
            }
            for (short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_3 - 1])) ^ (((/* implicit */int) arr_13 [i_3 - 1]))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))));
                var_26 = arr_8 [i_3 - 1];
            }
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */long long int) var_10)) ^ (var_14))))))));
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((~(var_14))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_9))))))))));
                arr_30 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1])))));
                var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_3 + 1] [i_3]))));
            }
        }
        for (signed char i_8 = 2; i_8 < 19; i_8 += 3) 
        {
            arr_34 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_29 [i_3] [i_8] [i_8 + 1])));
            var_31 = ((/* implicit */unsigned short) arr_18 [i_3]);
            var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))) >= (((/* implicit */int) var_7))));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (short)32744)) : (((/* implicit */int) (signed char)120)))))));
        }
        for (unsigned char i_9 = 1; i_9 < 19; i_9 += 3) 
        {
            arr_37 [i_3] [i_3] = var_3;
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (+(arr_36 [i_3]))))));
            var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))));
            arr_38 [6ULL] [6ULL] |= ((/* implicit */unsigned int) ((var_6) % (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        }
    }
    var_36 = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) var_3)) & (var_8))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_7))))))));
}
