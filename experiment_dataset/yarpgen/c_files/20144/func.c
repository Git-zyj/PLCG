/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20144
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */short) (+(((((/* implicit */_Bool) 4076990414U)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57)))))));
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */_Bool) 3031076256U);
                }
            } 
        } 
        arr_10 [i_0] = (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_0]))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (var_10)))) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) (_Bool)0))))));
        arr_11 [15U] [i_0] = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_3 [(signed char)4])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29714))) == (var_10)))), ((short)-11524))))));
        var_20 = ((((_Bool) arr_5 [i_3] [i_3])) || (((/* implicit */_Bool) -1)));
    }
    var_21 -= ((/* implicit */unsigned short) ((((var_1) ? (1) : (((/* implicit */int) (short)-31680)))) / (((/* implicit */int) min((var_8), (min((((/* implicit */unsigned char) var_14)), (var_8))))))));
    var_22 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (_Bool)1)) : (-1)))))));
}
