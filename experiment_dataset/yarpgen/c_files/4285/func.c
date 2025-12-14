/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4285
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
    var_11 = ((/* implicit */unsigned short) var_5);
    var_12 += ((/* implicit */int) 392176419865171127ULL);
    var_13 = (((-(((((/* implicit */_Bool) (unsigned short)23085)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-65)))))) / ((~(((/* implicit */int) var_10)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) (!(min((arr_3 [(signed char)0] [i_1] [i_1]), (((((/* implicit */int) (short)-10830)) > (((/* implicit */int) arr_4 [i_1] [0]))))))));
                    var_15 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-13)) + (2147483647))) << (((((/* implicit */int) (signed char)52)) - (52)))));
                    var_16 = ((unsigned short) min((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */_Bool) arr_5 [9] [9] [i_2])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
}
