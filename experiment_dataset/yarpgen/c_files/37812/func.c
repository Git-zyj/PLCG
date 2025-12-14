/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37812
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
    var_20 += ((/* implicit */short) min((var_14), (((/* implicit */unsigned int) var_15))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) (~(((min((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1])), ((-2147483647 - 1)))) & (((/* implicit */int) var_17))))));
                    var_22 = ((/* implicit */short) 2147483647);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_9 [5U] [(unsigned char)13] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1])))) ? (((((/* implicit */unsigned int) arr_9 [i_2 - 2] [i_2 - 2] [(short)3] [i_2 + 1] [i_2] [i_2 - 1])) * (1667356864U))) : (((/* implicit */unsigned int) arr_9 [i_2] [i_2 - 2] [14LL] [i_2 + 1] [14LL] [i_2 - 1]))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((73789963) & (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */int) var_13)) | (((/* implicit */int) var_10)))) : (((/* implicit */int) max((((/* implicit */short) arr_10 [i_2 + 1] [i_2] [(_Bool)1] [i_2 + 1] [i_3 - 1])), (var_8))))));
                            }
                        } 
                    } 
                }
                arr_14 [i_0] = ((/* implicit */short) ((((int) ((short) 468343394U))) | (-2147483645)));
            }
        } 
    } 
}
