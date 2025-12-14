/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2254
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
    var_13 = ((/* implicit */unsigned char) var_8);
    var_14 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
    var_15 = ((/* implicit */int) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 + 3]))))) / (16630595130495681807ULL)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 -= ((/* implicit */short) ((arr_1 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 2]) <= (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))))));
                    var_18 = ((/* implicit */int) 16630595130495681801ULL);
                }
            } 
        } 
    }
    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_3]);
            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3 - 1]))))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) arr_8 [i_3] [i_4] [i_3])))))) : (((/* implicit */int) (short)15732))));
        }
        var_21 = ((/* implicit */unsigned short) (short)-15733);
    }
}
