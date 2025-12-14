/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26420
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
    var_10 = ((/* implicit */unsigned char) var_6);
    var_11 = ((/* implicit */unsigned short) var_1);
    var_12 = var_5;
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61064)) ? (17ULL) : (0ULL))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) (short)32767)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned long long int) max((276949045U), (((/* implicit */unsigned int) arr_0 [i_0])))))))))));
        var_15 = ((/* implicit */long long int) var_6);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_13 [i_2] [(unsigned char)2] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 + 2] [i_3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_2] [i_3])) <= (((/* implicit */int) var_5))))) : (((/* implicit */int) ((_Bool) arr_1 [i_1])))))));
                    arr_14 [i_1] [i_2 - 1] [(short)6] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2 + 2])) || (((/* implicit */_Bool) arr_2 [i_2 - 1]))))), (arr_2 [i_2 - 2])));
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_2]))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [i_2])) ? (arr_6 [i_2] [i_2 - 1] [i_2]) : (((/* implicit */int) var_2))))));
                    arr_15 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned short) 18446744073709551599ULL)), (((/* implicit */unsigned short) min((var_1), (var_1))))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)23167))) : (max((((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) arr_12 [(unsigned short)0] [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            var_17 = (+(((/* implicit */int) (signed char)0)));
            var_18 = ((/* implicit */short) min((((((/* implicit */int) var_9)) % (var_4))), (((/* implicit */int) arr_17 [i_1] [i_4]))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (short i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) (+(((unsigned long long int) var_4))))) ? (min(((~(((/* implicit */int) var_8)))), ((+(((/* implicit */int) (short)-6)))))) : (max((((/* implicit */int) ((((/* implicit */int) (short)32754)) >= (((/* implicit */int) (signed char)12))))), (((((/* implicit */_Bool) var_5)) ? (622245355) : (((/* implicit */int) var_9)))))));
                            var_20 = ((/* implicit */signed char) max(((unsigned short)42369), (min((((unsigned short) arr_18 [i_1] [i_1] [i_1])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_7])))))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)32765)) || (((/* implicit */_Bool) (short)11106)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_5] [i_5] [i_7]) : (var_4))))))) : (((/* implicit */int) (short)2047))));
                            var_22 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_4] [(short)14] [(short)13]))));
                            arr_25 [i_7] [i_6] [i_5] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) min((arr_4 [i_7 - 3] [i_7 - 3]), (arr_4 [i_7 + 1] [i_7 + 1]))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) arr_3 [i_8] [i_8]);
        arr_28 [i_8] [(short)16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)65)), (arr_24 [i_8] [i_8] [i_8] [i_8])))))))));
    }
}
