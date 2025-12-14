/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237851
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
    var_10 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = (((_Bool)1) ? (((/* implicit */int) ((short) -336596591))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (((var_5) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)227)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_2] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1] [i_1 - 1] [i_1] [i_1])))));
                        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))))));
                    }
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)25), ((unsigned char)2)))) ? (((/* implicit */int) ((signed char) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2]))) : (((/* implicit */int) ((_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                }
            } 
        } 
    } 
}
