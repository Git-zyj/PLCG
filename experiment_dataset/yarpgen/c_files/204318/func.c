/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204318
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
    var_10 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 = (((~(17ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_1))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))));
        var_12 = ((/* implicit */short) ((_Bool) (unsigned short)11429));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) var_0);
                    arr_11 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((_Bool) 9223372036854775801LL))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned char) max(((((~(((/* implicit */int) var_6)))) - ((+(((/* implicit */int) arr_5 [i_1])))))), (((/* implicit */int) var_1))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)));
        var_16 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)249)))))));
        arr_14 [i_4] [i_4] = var_2;
    }
}
