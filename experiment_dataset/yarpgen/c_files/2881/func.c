/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2881
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0 + 3] [i_1] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) 4267637233U))) ^ (min((((/* implicit */int) (short)32747)), (((((/* implicit */_Bool) (short)-24267)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */int) (short)-24267)) != (((/* implicit */int) (_Bool)1))));
                                var_17 ^= ((/* implicit */_Bool) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) arr_1 [i_0 + 3])) % (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1]))))));
                                arr_18 [i_0] [i_3] [i_2] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62403))))) <= ((~(((/* implicit */int) arr_10 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_0] &= var_4;
        arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_0] [8U] [(unsigned short)4] [(unsigned short)4] [i_0]))) ? ((+(((/* implicit */int) arr_3 [i_0 + 4] [i_0 + 4] [i_0 - 1])))) : (((/* implicit */int) (((+(((/* implicit */int) (unsigned char)14)))) <= (((((/* implicit */int) (unsigned char)64)) + (((/* implicit */int) var_4)))))))));
    }
    var_18 ^= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-24267))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_9), (var_14)))))));
}
