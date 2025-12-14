/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238950
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (((unsigned long long int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            var_19 = ((/* implicit */_Bool) arr_0 [4]);
            arr_7 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_4 [i_0] [i_1 - 1]));
            arr_8 [(unsigned short)10] [4] [4] &= ((/* implicit */int) ((unsigned short) 4323455642275676160ULL));
            arr_9 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (arr_6 [(unsigned short)8] [i_0] [i_0 + 1]) : (arr_6 [i_0] [i_0] [i_0 + 2]))) << (((((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned short) (signed char)-73))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : ((~(arr_2 [i_0]))))) - (49ULL)))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (arr_6 [(unsigned short)8] [i_0] [i_0 + 1]) : (arr_6 [i_0] [i_0] [i_0 + 2]))) << (((((((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned short) (signed char)-73))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : ((~(arr_2 [i_0]))))) - (49ULL))) - (2ULL))))));
            var_20 *= ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_5 [0U]), (arr_5 [6]))))));
        }
    }
    var_21 = ((/* implicit */unsigned char) var_16);
}
