/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240416
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
    var_13 = ((/* implicit */unsigned char) var_9);
    var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (max((var_3), (3416974626U))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) >= (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 521987135U)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-27514), (((/* implicit */short) var_1)))))) : (((17361378981728674411ULL) - (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_2)) ? (var_12) : (var_11)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_16 &= ((/* implicit */signed char) (short)18345);
        var_17 = arr_2 [i_0];
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) ? (arr_1 [i_0 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3])))))) ? (((/* implicit */int) ((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0))))))) : ((((((~(((/* implicit */int) var_8)))) + (2147483647))) >> ((((-(var_6))) - (5832345952702014712LL))))))))));
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */unsigned short) var_1);
    }
}
