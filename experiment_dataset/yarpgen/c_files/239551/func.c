/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239551
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((short) arr_0 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) var_8);
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_3)) & (-1758807103)))));
                    var_18 = (~(((/* implicit */int) (signed char)-82)));
                    var_19 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-124)) + (2147483647))) << (((((((/* implicit */int) (short)-15599)) + (15629))) - (30)))));
                }
            } 
        } 
        var_20 = ((((/* implicit */_Bool) -993638309)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])));
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_21 = ((/* implicit */long long int) arr_10 [i_3]);
        arr_12 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_3]) & (((/* implicit */int) arr_11 [i_3]))))) ? (min((arr_10 [17LL]), (((/* implicit */int) var_3)))) : (((/* implicit */int) ((signed char) (unsigned short)7975))))))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)28123)))), (((/* implicit */int) ((short) var_0)))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)-28128)))), (((/* implicit */int) var_8))))) : (((unsigned int) (short)-28128))));
    var_23 *= ((/* implicit */unsigned short) var_4);
}
