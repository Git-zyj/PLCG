/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39623
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_19 *= ((/* implicit */signed char) ((_Bool) arr_7 [i_0] [i_0] [i_2] [i_3]));
                        var_20 *= arr_8 [i_0];
                    }
                    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_1])))) * (((/* implicit */int) min((arr_5 [i_0]), (arr_5 [i_0]))))));
                    arr_11 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0]))))))))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */signed char) ((unsigned char) var_5));
}
