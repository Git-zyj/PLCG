/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216127
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
    var_15 = ((/* implicit */short) var_13);
    var_16 = ((/* implicit */long long int) var_10);
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_7)))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_2))))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((+(((/* implicit */int) max((var_9), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) ((((int) var_13)) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (-24))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 3] [i_3 - 3])) << (((((/* implicit */int) (unsigned char)55)) - (43)))));
                                var_21 = ((/* implicit */int) var_9);
                                var_22 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    var_23 += (+(((/* implicit */int) arr_14 [i_0] [i_0])));
                    var_24 = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    }
}
