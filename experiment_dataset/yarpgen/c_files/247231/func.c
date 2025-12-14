/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247231
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) + ((~(((/* implicit */int) ((signed char) var_5)))))));
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_1] [i_2 - 3])) ? (((/* implicit */int) arr_9 [(short)16] [i_3] [i_1] [i_3] [(short)16] [i_2 - 2])) : (((/* implicit */int) arr_0 [i_2 - 3]))));
                        arr_10 [i_0] &= ((_Bool) (unsigned char)60);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]))) == (((var_10) << (((((/* implicit */int) (short)5653)) - (5651)))))));
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)40151);
                            var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)27397)) % (((/* implicit */int) (short)-32406)))) >= (-1488343706)));
                        }
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_6))))));
                    }
                    arr_14 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) (short)17491)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (var_4)))));
                }
            } 
        } 
    } 
}
