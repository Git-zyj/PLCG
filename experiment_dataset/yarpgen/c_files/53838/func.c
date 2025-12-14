/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53838
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
    var_14 = ((/* implicit */unsigned int) min(((unsigned short)32175), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (var_2))))));
    var_15 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) min((arr_1 [i_0]), (((/* implicit */long long int) ((((arr_1 [i_0]) == (((/* implicit */long long int) var_12)))) ? (((/* implicit */int) ((short) (unsigned short)32175))) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_2] [i_1] [i_2])) && (((/* implicit */_Bool) (unsigned short)33364))));
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) -9223372036854775804LL);
        var_20 = ((/* implicit */long long int) max((-2147483642), (((((734736673) >> (((/* implicit */int) (_Bool)0)))) / (arr_6 [i_0] [i_0] [i_0] [i_0 + 2])))));
    }
}
