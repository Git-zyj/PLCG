/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242450
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
    var_12 = (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_2)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)111))) : (var_6)))))));
    var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)7680)), (min((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((short) ((74819139) != (((/* implicit */int) (signed char)-123)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned char) arr_8 [i_3] [i_1] [i_1] [(unsigned short)4] [i_0]);
                        arr_11 [i_0] [i_0] [i_3] [i_3] = (i_0 % 2 == zero) ? (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? (arr_7 [i_0] [i_1 + 3] [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((arr_5 [i_0] [i_0]) + (630026652))) - (21)))))) < (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2])), (arr_7 [i_0] [i_0] [i_0]))))))))) : (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? (arr_7 [i_0] [i_1 + 3] [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((((arr_5 [i_0] [i_0]) + (630026652))) - (21))) - (3)))))) < (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2])), (arr_7 [i_0] [i_0] [i_0])))))))));
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) (-(max((((/* implicit */int) ((((/* implicit */int) (signed char)111)) != (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_0]))))), (arr_5 [i_0] [i_0])))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))) << (max((((/* implicit */long long int) (_Bool)1)), (-3LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))) : (((((/* implicit */_Bool) (signed char)-112)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_5 = 1; i_5 < 24; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    {
                        arr_22 [i_4] [(short)2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((short) var_0));
                        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4] [i_4])) % (((/* implicit */int) var_7))))) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5 - 1])))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((arr_19 [i_4] [i_4] [i_4]) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_16 [i_4]))))))));
            var_17 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)57))) : (arr_16 [i_4]))));
        }
        for (long long int i_8 = 4; i_8 < 24; i_8 += 4) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)14)))))))));
            var_19 = ((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_4]);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned char) (_Bool)0);
                var_21 += ((((/* implicit */_Bool) arr_29 [i_10 + 1] [i_4])) ? (((/* implicit */int) arr_19 [i_4] [i_4] [(_Bool)1])) : (((/* implicit */int) arr_29 [i_4] [i_10 + 1])));
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
            {
                arr_34 [i_4] [i_9] = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_9] [i_9]))) + (arr_14 [i_9])))));
                arr_35 [i_4] [i_4] [i_11] = (~(((((/* implicit */_Bool) arr_33 [i_11] [i_9])) ? (((/* implicit */int) var_8)) : (arr_31 [i_4] [i_4] [i_4] [i_4]))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_1))))) >= (arr_23 [i_11 + 1] [i_11] [i_11])));
            }
            arr_36 [i_4] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_18 [i_9] [i_9] [i_9])) & (arr_14 [i_4])));
        }
        var_23 = ((/* implicit */unsigned short) var_8);
    }
    var_24 -= ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))) != (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_1))))));
}
