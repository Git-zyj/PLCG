/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206532
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
    var_11 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((3173822130U), (((/* implicit */unsigned int) var_6))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (~(var_7)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_5;
                    arr_9 [(signed char)3] [i_1] [i_1] = ((/* implicit */short) var_0);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) (short)545))), (692512151U))))));
    }
}
