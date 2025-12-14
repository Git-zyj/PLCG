/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52388
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
    var_10 = ((/* implicit */unsigned short) max((((unsigned char) var_5)), (((/* implicit */unsigned char) var_7))));
    var_11 = ((/* implicit */signed char) (((+(var_3))) >> (((((/* implicit */int) var_9)) - (26648)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_6 [i_1 + 1] = ((/* implicit */signed char) arr_1 [i_0]);
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1])) : (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])))), (3250819873U)));
                }
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])) ^ (max((575174809), (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1]))))));
            }
        } 
    } 
}
