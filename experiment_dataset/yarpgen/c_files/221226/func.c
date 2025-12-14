/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221226
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) (+((-(((/* implicit */int) arr_2 [i_0 - 2]))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (arr_4 [i_1] [i_1] [i_0])));
            arr_5 [i_0] [(signed char)10] &= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (short)-26622)) ? (-116398377) : (((/* implicit */int) (signed char)-22)))), (((/* implicit */int) var_0)))), (((/* implicit */int) arr_0 [i_0]))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1986076049U)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (max((((((/* implicit */_Bool) 2307844466U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-7686016769102244835LL))), (((/* implicit */long long int) (+(arr_4 [i_0] [i_0] [16U])))))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) (_Bool)1);
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (+(arr_4 [(short)7] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : ((-(5706142553758760366LL))))), (((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)59188)))))))));
            var_24 &= ((/* implicit */unsigned char) arr_4 [11U] [i_0] [11U]);
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
        {
            var_25 ^= ((/* implicit */unsigned long long int) min(((+((-9223372036854775807LL - 1LL)))), (((((/* implicit */long long int) ((((/* implicit */int) (short)-313)) / (((/* implicit */int) arr_11 [i_3] [i_0]))))) * (((((/* implicit */_Bool) 9223372036854775807LL)) ? (7524295161619092097LL) : (var_5)))))));
            arr_14 [5U] [5U] [(short)0] = ((/* implicit */unsigned int) arr_0 [i_0 + 3]);
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_26 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((unsigned short) (unsigned char)222)))));
                arr_17 [i_3] = ((/* implicit */int) (signed char)-124);
                var_27 = 9223372036854775806LL;
                arr_18 [(signed char)14] [(unsigned short)4] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned short) (short)-5209))))) ? (17549729480441790509ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27912)))));
            }
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) >> (((((/* implicit */int) arr_2 [i_0])) + (50))))))))) > ((+(((/* implicit */int) var_15)))))))));
        }
        arr_19 [i_0 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) != (16784651857744706227ULL)))) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 3]))) : (min((var_17), (((/* implicit */unsigned long long int) var_4))))));
    }
    var_29 ^= ((/* implicit */short) var_11);
}
