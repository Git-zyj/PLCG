/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226660
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
    var_20 = ((/* implicit */unsigned char) 581123203U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [(short)11] = ((/* implicit */short) (+(arr_0 [i_0])));
        var_21 = ((/* implicit */signed char) ((unsigned char) arr_1 [i_0] [(unsigned char)16]));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) (((~(((/* implicit */int) (short)-32757)))) <= (((/* implicit */int) ((signed char) arr_1 [(unsigned short)3] [(unsigned short)10])))));
                    arr_9 [(short)18] [(signed char)11] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3738815559U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) + (829115752U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5673)))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [(signed char)1] [(unsigned char)18] [i_0]))));
    }
    var_24 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) (short)-5673)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) << (((((((/* implicit */_Bool) -1132183901)) ? (1132183924) : (1132183939))) - (1132183913)))));
    var_25 = ((/* implicit */int) var_3);
}
