/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30869
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
    var_10 |= ((/* implicit */unsigned short) var_8);
    var_11 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [(unsigned short)5] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 3] [i_1])))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 2] [i_1 - 3]))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-62)) + (2147483647))) << (((((arr_0 [i_1 + 2]) + (931952643))) - (29))))))));
                var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 5309489829535182904ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_1))))) : (max((((((/* implicit */_Bool) arr_2 [7U] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) var_4)) : (10504682623126282622ULL))), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_9)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) var_5);
            }
        } 
    } 
}
