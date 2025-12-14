/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198662
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
    var_10 ^= ((/* implicit */int) max(((short)(-32767 - 1)), ((short)-3051)));
    var_11 += ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] [i_0] [(_Bool)1] = ((((((/* implicit */long long int) 0U)) | (4611650834055299072LL))) << (((((((/* implicit */_Bool) (short)-15842)) ? (((/* implicit */int) (unsigned short)16897)) : (1437530285))) - (16896))));
                        var_12 -= ((/* implicit */unsigned char) ((63) & (((/* implicit */int) (short)3051))));
                        arr_12 [i_0] [i_1] = ((/* implicit */int) -6424057112535194530LL);
                    }
                    arr_13 [i_0] [5ULL] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned short)22427))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2])) | (-64))))))), (-64)));
                }
            } 
        } 
    } 
}
