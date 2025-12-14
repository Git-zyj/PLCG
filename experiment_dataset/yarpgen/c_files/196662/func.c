/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196662
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
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (((((/* implicit */_Bool) ((var_4) & (((/* implicit */long long int) arr_9 [i_0] [i_1 - 1] [i_2] [i_0]))))) ? ((+(arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7)))))))));
                        arr_10 [i_0] [i_1] [i_0 - 2] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_5 [i_0 + 1] [14LL] [i_0 - 2] [i_0 + 1])))), (((((/* implicit */_Bool) arr_2 [i_0] [12])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1] [0U])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_12 [i_0] [8] = ((/* implicit */int) arr_3 [i_0] [i_0]);
    }
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (var_7))))));
    var_13 = ((/* implicit */unsigned int) var_10);
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (max((3503202022U), (((/* implicit */unsigned int) var_9))))));
}
