/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231956
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
    var_14 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] [22U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)17])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_1])))))) ? (((((/* implicit */_Bool) (unsigned short)17847)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24961))))) : (max((((/* implicit */unsigned long long int) var_7)), (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))))))));
            var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_1 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (var_3))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_6)))) ? (var_13) : (((/* implicit */unsigned long long int) var_0))))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((int) max((var_0), (((/* implicit */long long int) (unsigned char)18))))))))));
        }
        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)18)) || (((/* implicit */_Bool) (unsigned char)234))))) : (((/* implicit */int) arr_3 [i_0 - 1]))));
    }
    for (long long int i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = (unsigned char)21;
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (var_1)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned char)208))))) ? (var_4) : (var_3))))))));
    }
}
