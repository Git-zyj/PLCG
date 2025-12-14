/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4662
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1])), (-1587101665238960437LL))))));
                arr_6 [i_0] [(unsigned short)8] [i_1] = ((/* implicit */long long int) (signed char)-8);
                arr_7 [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (signed char)7)))), (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)107)) <= (((/* implicit */int) (signed char)-8)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) * ((-(((/* implicit */int) var_10)))))) < (((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)7))))))));
}
