/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31842
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) var_6)));
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1)))) + (((/* implicit */int) var_18))));
        var_21 = ((((/* implicit */int) (short)4095)) <= (((/* implicit */int) (short)-4095)));
        var_22 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
        var_23 |= ((/* implicit */_Bool) ((((((int) (short)-4122)) ^ (((((/* implicit */int) var_18)) >> (((var_7) - (11073171051604767439ULL))))))) ^ (((/* implicit */int) (((!(var_11))) || (((((/* implicit */_Bool) var_18)) || (var_17))))))));
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (short)4095)) * (((/* implicit */int) (short)4095))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */int) (short)4095)) <= (((/* implicit */int) var_18))))));
            var_26 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)4095)))));
        }
        arr_9 [(short)14] [i_1] |= ((/* implicit */int) var_11);
        var_27 += ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_15)))));
        arr_10 [i_1] = ((/* implicit */short) ((var_15) % (((/* implicit */long long int) ((/* implicit */int) (short)-4079)))));
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) (short)4092);
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_16))));
    }
    var_30 += ((/* implicit */unsigned char) var_13);
}
