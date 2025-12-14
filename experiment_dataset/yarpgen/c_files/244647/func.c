/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244647
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
    var_17 = ((/* implicit */unsigned long long int) (short)13876);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [17U] = min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-13876)) ^ ((~(((/* implicit */int) (short)-13888))))))), (min((4294967295U), (((/* implicit */unsigned int) arr_1 [i_0 + 2])))));
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) (unsigned short)7))))) ? (arr_0 [i_0]) : (min((arr_1 [i_0 + 4]), (arr_1 [i_0 + 4])))));
        arr_3 [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (var_2)))), (12213830334301769206ULL))), (((/* implicit */unsigned long long int) ((min((var_11), (((/* implicit */long long int) arr_1 [i_0])))) ^ (((/* implicit */long long int) min((-1351556871), (((/* implicit */int) (short)-13897))))))))));
        var_19 |= ((/* implicit */short) arr_0 [i_0 + 4]);
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((var_12) / (((/* implicit */int) var_14))))) * (var_5)));
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_8 [i_1] [8LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (650950801) : (arr_6 [i_1]))) >= (((/* implicit */int) (short)13876)))))));
        arr_9 [5ULL] = ((/* implicit */int) ((((/* implicit */unsigned int) arr_6 [i_1])) * (min((var_1), (((/* implicit */unsigned int) ((1966008906) >= (((/* implicit */int) arr_7 [i_1])))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) max((max((arr_6 [i_1]), ((~(arr_6 [i_1]))))), (((((/* implicit */int) (short)-13899)) - (arr_1 [i_1])))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (max((min((1945606265), (arr_1 [i_1]))), (arr_0 [15LL]))) : (((/* implicit */int) arr_7 [i_1]))));
        arr_12 [i_1] [(short)2] = ((/* implicit */unsigned long long int) arr_0 [(unsigned char)18]);
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)13877);
        arr_17 [i_2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_15 [i_2] [(_Bool)1]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_21 -= ((/* implicit */unsigned char) max((((max((81706957), (((/* implicit */int) (short)-13877)))) * (((/* implicit */int) ((((/* implicit */int) (short)2227)) <= (((/* implicit */int) (_Bool)0))))))), (arr_0 [i_2])));
            arr_20 [i_2] = var_14;
            arr_21 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) arr_14 [i_2]);
        }
    }
    for (int i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        arr_25 [i_4] = ((/* implicit */unsigned int) 77295285);
        var_22 = ((/* implicit */long long int) min((max((arr_0 [i_4 - 1]), (((/* implicit */int) ((1015808) > (1724864237)))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)97))))), (((((/* implicit */int) (short)32654)) | (((/* implicit */int) (unsigned char)131))))))));
        arr_26 [i_4] = ((/* implicit */long long int) (((~(arr_1 [i_4]))) << (((((min((arr_23 [i_4 + 2] [i_4 - 1]), (((/* implicit */long long int) arr_15 [i_4 + 2] [i_4 - 1])))) + (17070LL))) - (24LL)))));
    }
    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((var_5), (((/* implicit */unsigned int) (short)-16799)))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) == (((((var_13) - (((/* implicit */long long int) ((/* implicit */int) (short)32651))))) - (var_13)))));
}
