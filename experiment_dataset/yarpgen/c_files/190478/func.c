/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190478
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((((/* implicit */_Bool) min(((unsigned char)128), (((/* implicit */unsigned char) (signed char)-30))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [17LL]))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (signed char)96)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56240))))) : (arr_2 [i_0])))));
        arr_3 [12] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), (var_7)))))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((signed char) (_Bool)1))) / (((((/* implicit */_Bool) (signed char)-97)) ? (((1781366438) & (((/* implicit */int) (unsigned char)222)))) : (((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) arr_1 [(unsigned short)9])) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1]))))) != (((long long int) arr_1 [i_1]))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [i_3] [i_2] [(unsigned char)15] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-2)) ^ (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) -4552853055474335156LL)) ? (1545228655U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14784)))))));
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [11LL] [i_3])) & (min((((int) arr_8 [i_1] [18U] [i_1])), (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (short)6133)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_28 [i_5] &= ((/* implicit */short) min((((max((2266363999U), (((/* implicit */unsigned int) arr_5 [18LL])))) << (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) (short)28162)))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_12 [i_5] [i_5] [(_Bool)1] [(_Bool)1])) || ((_Bool)1))), ((!(arr_21 [i_6]))))))));
                    arr_29 [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) -644075787235486734LL))) == (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 4; i_8 < 23; i_8 += 1) 
                    {
                        for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) max((max((arr_2 [i_9 + 3]), (arr_2 [i_8]))), (min((arr_2 [i_5]), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                                var_19 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_26 [i_5] [i_7 + 2] [i_7 + 1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_5] [i_7 - 1] [i_7] [i_9])))), (((/* implicit */int) arr_26 [i_5] [i_7 + 3] [i_5] [i_7 + 3]))));
                                var_20 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) max((2874724559038999913LL), (((/* implicit */long long int) 1081734725U)))))), (((((/* implicit */long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_16 [i_9] [i_5] [4] [i_5] [4LL]))))) / (arr_14 [(_Bool)1] [i_5] [i_8 + 1] [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_36 [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */int) (short)-21935)), (min((-1618905418), (2147483647)))));
        arr_37 [i_5] [i_5] = ((/* implicit */unsigned char) ((long long int) max((((((/* implicit */_Bool) (short)6133)) ? (((/* implicit */int) (short)6133)) : (((/* implicit */int) (signed char)-11)))), (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))));
        var_21 ^= ((/* implicit */unsigned int) arr_25 [i_5]);
    }
    for (long long int i_10 = 1; i_10 < 15; i_10 += 2) 
    {
        var_22 = ((/* implicit */long long int) ((max((arr_39 [i_10 + 1] [i_10]), (arr_39 [i_10 + 1] [i_10]))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_10 + 1] [i_10]))))))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15772))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) : (15854354029628571478ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62084)))))));
            arr_43 [(_Bool)1] [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_30 [i_11] [i_11] [i_11])), (((((/* implicit */_Bool) arr_30 [8LL] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10 + 1] [i_11] [i_11]))) : (3932160U)))));
        }
    }
    var_24 ^= ((/* implicit */short) (-9223372036854775807LL - 1LL));
}
