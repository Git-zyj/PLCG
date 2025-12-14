/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218231
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 = ((/* implicit */int) min((var_10), ((-(((/* implicit */int) var_9))))));
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (unsigned char)63))))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_2] [i_1])) : (((/* implicit */int) (_Bool)0))));
                    arr_10 [i_0] [(unsigned char)10] [i_2] [i_2] = (+((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [4ULL] [i_0])))));
                }
                var_13 = ((/* implicit */_Bool) max((var_13), (((((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (var_6)))) || (((/* implicit */_Bool) -1316083998477500334LL))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_3);
}
