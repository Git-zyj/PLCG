/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211943
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
    var_17 = ((/* implicit */_Bool) var_1);
    var_18 = ((/* implicit */signed char) ((unsigned char) (~(min((((/* implicit */long long int) -1583136806)), (var_6))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((min((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (short)63)))), (max((((/* implicit */int) (unsigned char)228)), (-1583136806))))), ((+(arr_3 [i_2 - 2])))));
                    arr_7 [i_0] [i_1] [i_2 + 1] [i_0] = ((/* implicit */unsigned char) (~(((arr_5 [i_2 - 1] [i_1] [i_2 - 3]) / (18446744073709551615ULL)))));
                    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_21 -= ((/* implicit */signed char) max((min((((/* implicit */int) arr_6 [i_0])), ((~(((/* implicit */int) arr_6 [i_0])))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(var_4))) : (1583136823)))));
    }
}
