/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222019
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((unsigned char) ((short) min((((/* implicit */long long int) var_3)), (3989717469351636691LL)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
        var_13 = ((/* implicit */short) arr_3 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */short) (+(arr_8 [i_1] [i_2] [i_1])));
            var_14 = ((/* implicit */signed char) (+(((unsigned long long int) arr_5 [i_1] [i_2 - 2]))));
        }
        var_15 &= ((/* implicit */long long int) var_3);
    }
}
