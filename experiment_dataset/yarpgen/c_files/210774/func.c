/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210774
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_1] [i_1]))));
                            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_6 [i_3 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) var_6);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_12 [i_4] [i_4] [i_4] [(_Bool)1] &= arr_9 [i_1 + 2] [i_1 + 2] [i_0 + 4];
                            var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)24), (((/* implicit */unsigned char) arr_3 [i_0 - 1]))))) ? ((+(((/* implicit */int) arr_3 [i_0 + 4])))) : ((+(((/* implicit */int) arr_3 [i_0 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_0))))))) > (((((/* implicit */long long int) ((/* implicit */int) var_3))) - ((-(var_9)))))));
}
