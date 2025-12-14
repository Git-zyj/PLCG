/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45353
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) + (((/* implicit */int) (!(var_13))))));
    var_20 = ((/* implicit */int) var_0);
    var_21 = ((/* implicit */unsigned char) min((984087322U), (((/* implicit */unsigned int) (short)22015))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned long long int) (~(arr_6 [(_Bool)1] [i_0 + 2] [i_0 - 1])));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_8))));
                    arr_10 [i_0] [i_1 + 2] [(_Bool)1] &= ((/* implicit */signed char) 12823593926050533954ULL);
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 24; i_3 += 3) 
                    {
                        arr_13 [(unsigned char)7] [(unsigned char)7] = ((_Bool) ((short) var_4));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_7))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(984087321U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : ((+(arr_2 [i_0] [(short)3] [i_3])))));
                            arr_17 [(unsigned char)21] [(unsigned char)21] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned short) ((var_5) | (((/* implicit */unsigned long long int) arr_2 [i_2] [(signed char)23] [i_0]))));
                        }
                    }
                }
            } 
        } 
        arr_18 [i_0 - 1] = ((/* implicit */int) (!(((((/* implicit */int) var_7)) > (((/* implicit */int) var_17))))));
        var_26 = ((/* implicit */_Bool) var_12);
        var_27 = (~(((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1])));
        var_28 = var_14;
    }
}
