/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249880
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
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(var_0))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 2]))) ? (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0 + 3])))))) : ((-(arr_1 [i_0 + 2])))));
                            arr_11 [i_0 + 2] [i_0 + 2] [i_2] [i_3] = ((/* implicit */unsigned short) (-(arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 3] [i_0 - 2])));
                            arr_12 [i_3] [i_1] [i_0] |= ((unsigned char) ((signed char) arr_5 [i_0] [i_0] [i_1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) var_9);
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_0))));
                            arr_17 [i_0] [i_0] [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5 - 1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_5 + 1] [i_0 + 1] [i_4]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 &= ((/* implicit */_Bool) var_8);
    var_18 += ((/* implicit */int) var_0);
    var_19 = ((/* implicit */long long int) var_1);
}
