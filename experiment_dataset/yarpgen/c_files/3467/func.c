/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3467
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
    var_19 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)24638)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22481))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_15)))))) ? (3057437857U) : (((/* implicit */unsigned int) ((((/* implicit */int) ((3368839815U) < (3276803831U)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) (short)(-32767 - 1))), ((+(((unsigned int) (short)3072))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */short) (+(((arr_0 [i_0 + 3]) >> (((((/* implicit */int) var_1)) + (7922)))))));
                    var_20 = var_3;
                    arr_11 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) 1990469261U);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) (short)1178);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)31337)))))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17080))) : (((arr_3 [i_2]) / (arr_0 [16U])))));
                        arr_16 [i_0] [i_1] [i_0] [i_4] [i_1] [i_2] = ((/* implicit */short) 3U);
                        arr_17 [i_0] [(short)9] [i_0] [i_4] = ((/* implicit */short) var_2);
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                    {
                        var_24 = min((2041966176U), (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_0 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1331660694U))));
                        arr_20 [i_5] [(short)17] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_1 - 2] [i_1] [i_1 - 1] [i_1]) * (arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1] [12U])))) ? (((arr_14 [i_0] [i_1] [4U] [i_5]) >> (((/* implicit */int) (!(((/* implicit */_Bool) 3020551053U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((3015302011U), (arr_14 [i_5] [i_2] [14U] [i_0]))))))))));
                    }
                }
            } 
        } 
    } 
}
