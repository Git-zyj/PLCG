/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212137
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
    var_17 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_16)), (var_3)))), (var_2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)112))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) -9223372036854775805LL))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0 - 1]))));
                    arr_9 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) (-((+(3382693993U)))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) (unsigned char)144);
        var_20 = arr_3 [i_0 + 1];
    }
    var_21 = ((/* implicit */unsigned char) var_6);
}
