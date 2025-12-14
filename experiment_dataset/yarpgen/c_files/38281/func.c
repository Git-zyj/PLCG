/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38281
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) ^ ((~(var_9)))))));
                    var_17 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_6)))), (((int) arr_2 [i_1 + 1] [i_1 + 1]))));
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_11 [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_11), (((/* implicit */unsigned char) (signed char)50)))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)50)))))) : (min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) 3985284873275788328LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))))));
                                var_18 *= ((/* implicit */unsigned char) (signed char)-54);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_15);
}
