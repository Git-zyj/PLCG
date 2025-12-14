/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204063
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
    var_13 = ((/* implicit */unsigned char) (-(var_5)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_0] [i_3] [(_Bool)1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -552383327)) ? (552383326) : (((/* implicit */int) (short)32767))));
                                var_14 = ((/* implicit */short) (!(((_Bool) arr_5 [i_3] [(_Bool)1] [i_3 + 4] [i_3]))));
                            }
                        } 
                    } 
                    arr_12 [i_0] = ((/* implicit */_Bool) (~((-(((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_5)))))));
                    arr_13 [5U] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (unsigned short)10)))) != (((/* implicit */int) ((_Bool) ((unsigned short) arr_4 [(_Bool)1] [i_2]))))));
                }
            } 
        } 
    } 
}
