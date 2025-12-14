/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210961
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) - (((/* implicit */int) var_11)))) & (((/* implicit */int) ((((/* implicit */int) var_5)) == (arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [(unsigned short)9] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((short) arr_9 [i_3 - 1]));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_3 - 1] [i_2] [(_Bool)1] [i_0] = ((/* implicit */short) ((unsigned int) var_5));
                            var_21 = ((/* implicit */unsigned short) var_15);
                        }
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_1]))));
        }
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */int) ((unsigned short) arr_16 [i_5]));
        var_23 += ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_16 [i_5])))))));
    }
    var_24 = ((/* implicit */signed char) var_13);
}
