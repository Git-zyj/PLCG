/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237113
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
    var_14 *= ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)16281))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) : (max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 4])))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (arr_1 [i_0])));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) (unsigned short)16275);
            var_18 *= ((/* implicit */unsigned char) arr_3 [6U] [6U]);
            var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            arr_10 [(short)3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_7 [i_0 + 2] [i_2] [i_0 - 3])) * (arr_2 [i_0 - 3]))))));
            var_20 = (-((+(var_1))));
        }
        arr_11 [6ULL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned short)49268))) != (((/* implicit */int) var_7)))))));
    }
    var_21 *= var_9;
}
