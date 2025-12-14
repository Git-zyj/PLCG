/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235139
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((var_0) != (((/* implicit */long long int) var_7)))))));
    var_15 = ((/* implicit */signed char) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) : (var_5))))));
        var_16 = ((/* implicit */unsigned long long int) var_0);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((signed char) var_1));
        var_18 -= ((/* implicit */unsigned short) ((signed char) arr_5 [i_1] [i_1]));
        arr_6 [(unsigned short)14] = ((/* implicit */short) ((max((((var_10) ? (var_4) : (((/* implicit */int) var_2)))), ((-(((/* implicit */int) var_1)))))) != (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? ((~(((/* implicit */int) var_10)))) : (min((((/* implicit */int) var_12)), (31)))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_3 [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */int) arr_7 [i_2])) | (((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) max((((/* implicit */short) var_1)), (var_9))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_16 [(unsigned short)17] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) * (((/* implicit */int) arr_14 [i_3])))), (((/* implicit */int) arr_14 [i_3]))));
            var_20 = ((/* implicit */signed char) arr_9 [i_2]);
        }
        var_21 = ((/* implicit */long long int) arr_10 [i_2] [i_2]);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_9 [i_2])) < (arr_10 [i_2] [i_2]))))));
    }
    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_4 + 1] [i_4])) * (((/* implicit */int) ((unsigned short) var_11)))));
        var_23 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)11))))), (max((((/* implicit */unsigned long long int) arr_18 [i_4 + 1] [i_4 + 3])), (18446744073709551615ULL)))));
    }
}
