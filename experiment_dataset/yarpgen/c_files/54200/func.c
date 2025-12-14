/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54200
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
    for (short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) (!((_Bool)1)));
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((+(var_9))))))));
                    arr_8 [i_0] [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) * (0U)))));
                    var_22 = ((/* implicit */long long int) ((arr_2 [i_2]) != (((((/* implicit */_Bool) arr_7 [i_0 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1))))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */short) ((((unsigned int) ((arr_0 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((4294967267U), (((/* implicit */unsigned int) arr_7 [i_0 - 2]))))) || (((/* implicit */_Bool) min((arr_1 [i_0]), (4294967293U))))))))));
    }
    var_24 = ((/* implicit */int) var_3);
    var_25 = ((/* implicit */unsigned char) var_19);
    var_26 = ((/* implicit */unsigned short) var_16);
    var_27 = ((/* implicit */unsigned short) var_19);
}
