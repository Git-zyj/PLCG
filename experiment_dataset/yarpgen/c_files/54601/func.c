/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54601
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (signed char)-45)))))) ? ((-(((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                    var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 8267339557301511962LL))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32753))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-32762)) + (((/* implicit */int) (short)-32730)))))));
                }
            } 
        } 
    } 
    var_21 = var_9;
    var_22 -= ((/* implicit */signed char) var_5);
}
