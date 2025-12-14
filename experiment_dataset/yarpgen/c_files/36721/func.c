/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36721
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
    var_20 = ((/* implicit */signed char) var_12);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((int) var_17)))) ? ((-(((/* implicit */int) var_7)))) : ((+((-(((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((int) ((short) arr_1 [i_0] [i_0])));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32750)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((unsigned long long int) arr_2 [i_0] [i_2 - 4]);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((long long int) (unsigned char)116)) << (((((/* implicit */int) arr_1 [i_1 + 1] [i_1])) - (94)))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) var_8);
                    var_24 = ((/* implicit */int) arr_6 [i_0] [i_2 + 1] [(signed char)4]);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((short) arr_5 [i_0])));
    }
}
