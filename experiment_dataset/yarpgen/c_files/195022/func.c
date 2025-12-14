/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195022
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(short)11] = ((/* implicit */long long int) (~(1721247162U)));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */signed char) (+(((unsigned long long int) arr_0 [i_0] [i_0]))));
            arr_9 [10U] [i_1] [i_1] = ((/* implicit */_Bool) (short)-27737);
            arr_10 [i_1] [11LL] [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((_Bool) (unsigned char)127)))));
        }
    }
    var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((-(((/* implicit */int) var_2)))) << (((32U) - (5U)))))) ^ (var_4)));
}
