/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222388
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)68);
                var_15 = ((/* implicit */short) arr_0 [i_1] [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_3] [21U] = min(((unsigned char)248), (((/* implicit */unsigned char) (_Bool)1)));
                            var_16 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])) / (((/* implicit */int) max((arr_6 [20U] [20U]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(((arr_3 [i_1] [i_0]) % (arr_3 [(_Bool)1] [i_1]))))))));
                            var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) + (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))) ? (((323516974883795287LL) / (-3641517391659607839LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) - (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_3);
}
