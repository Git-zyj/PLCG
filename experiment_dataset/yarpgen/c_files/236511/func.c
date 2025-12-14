/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236511
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)149)), ((~(4294967295U))))))));
    var_17 *= (((((~(var_2))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
    var_18 &= ((/* implicit */unsigned char) min((max((((var_1) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))))), (((/* implicit */unsigned int) min((var_7), (var_7)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) arr_0 [i_0 - 1]))))) / ((+(arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
            {
                var_19 = min((((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))), (var_2));
                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_6)), (var_15)))), (((((/* implicit */_Bool) arr_4 [(unsigned char)2])) ? (((/* implicit */unsigned long long int) arr_6 [i_0 - 1])) : (var_2)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [8U]))))))))) : (var_7)));
                arr_9 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_6)))))));
                arr_10 [i_1] [i_1 + 1] [i_2] = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) var_8)) : (4294967288U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)21)))))))));
            }
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [(signed char)6] [i_0 + 1] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1 + 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1]))) * (arr_11 [i_0] [6ULL] [i_0])))));
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) 2910582283U)))))));
                arr_15 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)21)), (arr_4 [i_1]))))) > (min((((/* implicit */unsigned long long int) var_3)), (var_12))))) ? (((/* implicit */unsigned long long int) min((max((var_3), (((/* implicit */long long int) -29314853)))), (((/* implicit */long long int) ((_Bool) var_7)))))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)36)) ? (-1422796801) : (var_8))))))));
                arr_16 [i_1] [i_1 - 1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_1) ? (((/* implicit */unsigned long long int) var_10)) : (var_13))), (min((18446744073709551615ULL), (17711799667464427709ULL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -1178967888)))))));
            }
            var_22 = ((/* implicit */unsigned long long int) (unsigned char)9);
            var_23 = ((/* implicit */signed char) ((((17711799667464427698ULL) << (((var_5) - (1579790666U))))) & (var_13)));
        }
        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_5 = 1; i_5 < 9; i_5 += 2) 
            {
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (~(arr_6 [i_0 - 1]))))));
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) 18244972266330447255ULL)))))));
                var_26 = ((/* implicit */signed char) min((var_26), (var_0)));
            }
            var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)62677)), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_8)) : (3402077762U)))))));
            arr_22 [i_4] [i_4] [i_4] = (((!((!(((/* implicit */_Bool) var_8)))))) ? (min((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)12)), (1422796802)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)27))))));
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            arr_26 [i_6] [i_0] = ((/* implicit */_Bool) (unsigned char)9);
            arr_27 [i_6] = ((/* implicit */int) var_5);
        }
        var_28 = ((/* implicit */signed char) (unsigned short)2449);
    }
    var_29 = ((/* implicit */short) var_8);
}
