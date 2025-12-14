/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227999
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] |= var_15;
                    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (-1014440307))))))), ((~(4635620024798372817ULL)))));
                    var_17 = ((/* implicit */unsigned short) min((((arr_0 [i_0 - 2] [i_0 - 1]) & (arr_0 [i_0 + 3] [i_0 - 2]))), (max((3380727622U), (((/* implicit */unsigned int) -1154431520))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 7981344387232461431ULL))));
    var_19 = ((/* implicit */signed char) var_1);
}
