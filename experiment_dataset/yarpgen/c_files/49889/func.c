/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49889
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
    var_15 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) ((signed char) var_2))))));
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */short) var_3)), ((short)32766)));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((_Bool) (unsigned char)69));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min(((signed char)-32), ((signed char)-32)));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((-18LL), (((/* implicit */long long int) (signed char)35)))))));
                    var_18 += ((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_0 - 1] [i_1 + 1])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) ((unsigned int) 1731005579U)))) << (((((/* implicit */int) max(((short)5008), (((/* implicit */short) (_Bool)0))))) - (4989)))));
}
