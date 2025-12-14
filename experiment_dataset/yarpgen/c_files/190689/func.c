/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190689
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
    var_14 &= ((/* implicit */short) max((((/* implicit */int) ((_Bool) var_11))), (((int) (-(var_9))))));
    var_15 &= ((/* implicit */unsigned short) max((max((((/* implicit */long long int) 155794788)), (var_9))), (((/* implicit */long long int) var_7))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [12]))));
                    var_17 |= ((/* implicit */short) max((((/* implicit */int) arr_1 [i_0])), (var_12)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 12; i_5 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */_Bool) 954027825);
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_4] [i_5] [i_5 - 2] [i_5 - 3])) : (((/* implicit */int) arr_6 [i_3] [i_5] [i_5 - 2] [i_5 - 3]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((-638131720) % (1454257138)));
}
