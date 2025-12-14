/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247262
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) ((unsigned short) var_7));
        var_12 += ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 ^= ((/* implicit */_Bool) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            for (unsigned char i_3 = 3; i_3 < 8; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)-11073)))))))));
                    arr_9 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (min((((/* implicit */unsigned long long int) var_8)), (arr_2 [i_1])))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+((-(((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    }
    var_16 = (+(((unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_2))))));
    var_17 = ((/* implicit */short) (~(((/* implicit */int) (short)-11073))));
}
