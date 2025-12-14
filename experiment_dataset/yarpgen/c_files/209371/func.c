/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209371
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 1536);
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)36294)) <= (((/* implicit */int) arr_3 [i_0]))))), (((((/* implicit */_Bool) (short)28542)) ? (((/* implicit */long long int) 1536)) : (-7505142010949787342LL)))));
        arr_6 [i_0] = ((/* implicit */signed char) var_3);
        arr_7 [i_0] = ((/* implicit */unsigned short) -1537);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */_Bool) ((long long int) (~(1065707939601874428LL))));
        arr_11 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)63487))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((((/* implicit */int) var_0)) * (((/* implicit */int) var_2))))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))) ^ (var_14)))));
}
