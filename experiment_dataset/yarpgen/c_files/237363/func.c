/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237363
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
    var_15 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (_Bool)1);
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) (unsigned char)0))))));
                                var_18 |= ((/* implicit */_Bool) ((unsigned char) (unsigned short)3));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_19 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 6LL)))))));
                        var_19 &= ((/* implicit */_Bool) ((short) 1657819045U));
                        var_20 = ((/* implicit */_Bool) min((var_20), (var_13)));
                        arr_20 [i_0 - 3] [i_0 - 3] [i_1] [i_1] [i_2] [i_5] = ((/* implicit */signed char) (_Bool)1);
                        var_21 = ((/* implicit */_Bool) ((long long int) ((unsigned int) var_14)));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_5);
    var_23 = (~(((/* implicit */int) var_13)));
    var_24 = ((/* implicit */unsigned short) ((unsigned char) var_8));
}
