/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23059
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = (~(-305034151));
        var_15 = ((/* implicit */short) ((((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-29999))))) % (13407675604232602561ULL)));
        var_17 = (short)-10668;
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((long long int) (_Bool)1)) <= (((/* implicit */long long int) ((unsigned int) var_11)))));
                    arr_9 [i_1] |= ((/* implicit */long long int) (!(arr_1 [i_2 - 1] [i_2 + 1])));
                }
            } 
        } 
    }
    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) | ((+(var_1)))));
}
