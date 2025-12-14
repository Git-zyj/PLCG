/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207188
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) 2147483641);
                    var_15 ^= (((!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (18446744073709551595ULL));
                }
            } 
        } 
    } 
    var_16 = (((_Bool)1) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)25477))))) : (var_1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        arr_9 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_3 + 1]))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned char)101))) ? (555506096) : (((/* implicit */int) (_Bool)1))));
    }
}
