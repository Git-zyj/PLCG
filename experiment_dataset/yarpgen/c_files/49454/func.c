/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49454
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((unsigned char) var_3));
                    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) min(((unsigned short)54360), ((unsigned short)44719))))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44714)) & (((/* implicit */int) (unsigned short)20822))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
}
