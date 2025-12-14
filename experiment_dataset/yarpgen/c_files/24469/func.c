/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24469
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
    var_17 = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) var_11)))))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)55))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (34359738367ULL) : (18446744073709551608ULL)))) ? (((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    var_19 = ((/* implicit */int) 9780902717028605349ULL);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            arr_4 [i_0] = ((((/* implicit */_Bool) max((arr_2 [i_0] [i_1 + 1] [i_1 + 3]), (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 3] [i_1])))))) : (min((arr_1 [i_1 + 1] [i_1 + 1]), (22ULL))));
            arr_5 [i_0] [i_0 - 3] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)0)), (3ULL)))) ? (((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) var_16)) : (arr_1 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_2 [i_0] [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) (unsigned short)51099)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0 - 2]) : (((/* implicit */unsigned long long int) var_13))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 3] [i_0])), (arr_3 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0 - 1] [i_0]) : (18446744039349813249ULL))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]))));
    }
    for (long long int i_2 = 3; i_2 < 23; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_2] [(signed char)2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14436)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned char)53)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_2 - 2]), (arr_7 [i_2 - 1]))))) : (((((/* implicit */_Bool) ((arr_2 [6ULL] [i_2] [6ULL]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)7))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_2 [22ULL] [i_2] [i_2])) : (10ULL)))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_3 [i_2 - 1]))), (((/* implicit */unsigned long long int) ((arr_2 [(unsigned char)4] [i_2] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [9LL])))))))))));
    }
    var_23 ^= ((/* implicit */long long int) 13376629846628228658ULL);
}
