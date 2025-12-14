/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209746
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
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_19)) >> ((((-(((/* implicit */int) (unsigned short)61798)))) + (61807))))), ((-((~(((/* implicit */int) (short)13876))))))));
    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-116))));
    var_22 ^= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_1 [i_0])), (1632187573U)))));
        arr_3 [i_0] = ((unsigned int) ((short) (signed char)-1));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_8 [i_2] [i_1] [(unsigned short)4] = ((/* implicit */unsigned int) arr_5 [i_2] [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)35508)) - (((/* implicit */int) arr_1 [i_1]))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)13876))))) ? (((/* implicit */int) (unsigned short)40290)) : (((/* implicit */int) (unsigned char)254))));
                    var_24 |= ((/* implicit */short) (+(((/* implicit */int) arr_1 [(unsigned char)11]))));
                }
            }
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_6))));
        }
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (min((var_11), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))));
}
