/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238994
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 |= (+(((((/* implicit */_Bool) arr_1 [i_0] [14LL])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (_Bool)1))))))));
                arr_7 [i_1] [13LL] = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned short) arr_0 [i_1]))));
                arr_8 [14ULL] [i_1] = arr_0 [i_0];
                arr_9 [i_1] [i_1] = ((/* implicit */short) arr_6 [i_0] [i_1]);
                arr_10 [i_1] = ((/* implicit */short) (+(min(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned short) var_4);
    var_13 = ((/* implicit */unsigned long long int) -4189357728938094045LL);
}
