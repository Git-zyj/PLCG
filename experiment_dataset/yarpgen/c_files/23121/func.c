/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23121
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((unsigned char) min((var_9), (((/* implicit */long long int) ((unsigned short) 5437318098813614974ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((13009425974895936642ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2]))))), (((((/* implicit */_Bool) (short)20670)) && (((/* implicit */_Bool) var_1))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_13 -= ((((arr_7 [i_1 + 1]) + (9223372036854775807LL))) >> (((var_0) - (2870083008462328290ULL))));
        var_14 = ((unsigned int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-20679)))));
    }
}
