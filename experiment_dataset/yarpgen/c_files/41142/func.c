/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41142
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
    var_20 = ((/* implicit */unsigned short) ((unsigned char) ((min((var_6), (((/* implicit */unsigned int) var_10)))) << (((((unsigned long long int) var_13)) - (1561316884ULL))))));
    var_21 = ((/* implicit */int) min((var_4), (((/* implicit */unsigned int) (short)-16633))));
    var_22 ^= ((/* implicit */unsigned int) (unsigned short)9743);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1])), (min((var_2), (((/* implicit */unsigned int) var_9))))))) || (((/* implicit */_Bool) (~((~(arr_5 [i_0] [i_0] [i_2] [i_0]))))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((_Bool) ((unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_0]))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) 18446744073709551615ULL);
    }
    var_26 = ((/* implicit */long long int) var_12);
}
