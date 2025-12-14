/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39622
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
    var_10 *= ((/* implicit */signed char) var_1);
    var_11 = ((/* implicit */unsigned short) ((722660961808266670LL) != (((/* implicit */long long int) ((/* implicit */int) (short)27222)))));
    var_12 = ((/* implicit */unsigned char) max(((short)-27223), ((short)-27223)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) var_9);
                arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27222)) ? (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) (short)27222)) : (((/* implicit */int) (short)27199)))) : (((/* implicit */int) ((((/* implicit */int) (short)27222)) < (((/* implicit */int) (short)-27223)))))));
                var_14 *= (!(((/* implicit */_Bool) (short)27222)));
            }
        } 
    } 
}
