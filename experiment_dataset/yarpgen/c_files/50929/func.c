/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50929
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
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 2] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) ((unsigned short) (_Bool)1))), ((+(((/* implicit */int) var_6))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_14 = var_11;
                            arr_10 [(signed char)9] [(_Bool)1] &= ((unsigned char) var_3);
                            var_15 = ((/* implicit */unsigned short) arr_6 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) var_0))))))));
}
