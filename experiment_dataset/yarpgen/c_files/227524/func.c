/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227524
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
    var_19 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) (unsigned short)15678)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)109))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((arr_1 [i_2 + 2]) + (2147483647))) >> (((((/* implicit */int) (unsigned short)15678)) - (15672))))))));
                    var_22 -= ((/* implicit */short) max((((int) ((((/* implicit */_Bool) 3767295696U)) ? (((/* implicit */int) (short)3646)) : (782188085)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_4 [i_2 - 1]))))))))));
                }
            } 
        } 
    } 
}
