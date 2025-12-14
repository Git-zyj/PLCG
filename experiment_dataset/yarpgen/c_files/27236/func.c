/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27236
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) + (((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_1)))) / (var_14)))));
                            /* LoopSeq 1 */
                            for (int i_4 = 1; i_4 < 13; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (0)))) && ((_Bool)1))))));
                                var_22 = ((/* implicit */unsigned short) ((min((var_7), (max((var_5), (((/* implicit */unsigned int) 1422697365)))))) == ((~(((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_13), (((/* implicit */int) ((_Bool) var_1)))))) ? (((/* implicit */int) ((short) ((short) var_11)))) : (var_4)));
                            }
                            arr_16 [i_0] &= ((/* implicit */_Bool) 14);
                        }
                    } 
                } 
                var_23 *= max((min((((/* implicit */unsigned int) (_Bool)0)), (2190399925U))), (((/* implicit */unsigned int) (_Bool)1)));
            }
        } 
    } 
    var_24 = var_4;
}
