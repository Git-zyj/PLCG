/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28422
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
    var_17 = ((/* implicit */signed char) var_1);
    var_18 = ((/* implicit */unsigned char) max((min((var_14), (((/* implicit */long long int) (-(((/* implicit */int) var_12))))))), (((/* implicit */long long int) ((short) var_15)))));
    var_19 &= ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0]))));
                    var_20 |= arr_6 [i_1] [i_2];
                    arr_10 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((signed char) min((max((var_10), (((/* implicit */long long int) (unsigned char)255)))), (((/* implicit */long long int) ((signed char) arr_7 [i_1] [i_0]))))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)99))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_4);
}
