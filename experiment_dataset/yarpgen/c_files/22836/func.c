/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22836
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_12)))) ? (1970799535U) : (var_9))))))));
                    var_15 -= max((((((/* implicit */int) ((arr_7 [i_2] [i_1] [i_1] [i_0]) == (((/* implicit */int) arr_1 [i_2]))))) & (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) var_4)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (max((var_12), (((/* implicit */unsigned long long int) var_9)))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) && (((/* implicit */_Bool) var_2)))))));
}
