/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38206
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
    var_12 = ((/* implicit */int) (unsigned short)13255);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0] [(unsigned short)18])), ((((+(((/* implicit */int) arr_2 [i_0] [i_1])))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52280)))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((int) ((_Bool) (!(((/* implicit */_Bool) arr_3 [(_Bool)1])))))))));
                            var_15 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((-8877805218364790331LL) == (((/* implicit */long long int) arr_7 [i_1 - 1])))))));
                        }
                    } 
                } 
                var_16 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((int) arr_9 [i_0] [(_Bool)1] [i_1] [i_1] [i_1])), (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1 - 2] [i_1 - 1] [i_1])))))), ((+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(short)8] [8] [i_1]))) : (arr_8 [1LL] [i_1] [i_1 - 2] [(unsigned short)8] [i_1 - 2])))))));
            }
        } 
    } 
}
