/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220511
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((((/* implicit */int) ((unsigned short) (unsigned short)19694))) ^ (((/* implicit */int) (unsigned short)19701)))), (((/* implicit */int) var_9)))))));
    var_20 = ((unsigned short) (unsigned short)23824);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 -= min(((unsigned short)57741), ((unsigned short)511));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_22 ^= arr_5 [i_1];
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (max((min((arr_10 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1]), ((unsigned short)23824))), (((unsigned short) arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 1]))))));
                                var_24 += (unsigned short)8176;
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((unsigned short) (unsigned short)13068))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_8 [i_0] [(unsigned short)23]))))) ? (((/* implicit */int) max(((unsigned short)45819), ((unsigned short)32927)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61418)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) max((((/* implicit */int) var_17)), ((~(((/* implicit */int) var_11))))));
}
