/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215156
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */short) var_5);
        var_11 = ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) arr_0 [i_0]))) : (((/* implicit */int) arr_0 [i_0 + 2]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)243))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_2 + 2] [i_1 - 1] [i_1 - 1] [i_0 + 3]))));
                            arr_13 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) * (((/* implicit */int) (unsigned char)232))))) ? ((-(((/* implicit */int) (unsigned char)130)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_0]))))));
                        }
                    } 
                } 
                arr_14 [(short)2] [(short)2] |= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)141))));
            }
        }
    }
    var_14 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned char)23)))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) max(((short)-32754), (((/* implicit */short) (unsigned char)47))))))));
}
