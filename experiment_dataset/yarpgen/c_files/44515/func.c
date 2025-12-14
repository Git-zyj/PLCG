/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44515
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_8))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 - 2] [i_0 + 2] = ((/* implicit */_Bool) max(((+(max((-928252856), (((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) (signed char)-37))));
        var_12 |= ((/* implicit */int) arr_0 [i_0]);
        arr_4 [(unsigned short)1] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)59334)) ? (((/* implicit */int) (unsigned short)16400)) : (((/* implicit */int) (signed char)(-127 - 1))))) % (((/* implicit */int) (short)-10460))))) : (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (var_8)))));
        arr_5 [(unsigned short)6] = ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)162)));
    }
}
