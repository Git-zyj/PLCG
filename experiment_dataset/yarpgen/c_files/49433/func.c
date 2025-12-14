/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49433
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
    var_12 *= ((/* implicit */signed char) max((var_9), (var_10)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)17))))) ? (((((/* implicit */_Bool) min((125594049496842331ULL), (((/* implicit */unsigned long long int) (short)20637))))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) var_8))))) : (((/* implicit */int) min(((unsigned short)64211), (((/* implicit */unsigned short) var_4))))))) : (((/* implicit */int) (signed char)41)))))));
        var_14 ^= ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) var_7)), (arr_0 [i_0] [i_0 + 3]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) var_0);
        arr_5 [i_1] [i_1] &= ((/* implicit */signed char) (~(((var_10) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (5500577099233427576LL)))))))));
        var_16 = max((((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [(_Bool)1])), (((unsigned long long int) arr_4 [i_1] [i_1])));
        arr_6 [i_1] = ((/* implicit */int) arr_3 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) var_11));
    }
    var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */long long int) ((/* implicit */int) (short)63))) / (max((var_10), (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)76)))))))))));
}
