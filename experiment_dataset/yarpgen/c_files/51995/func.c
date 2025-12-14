/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51995
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
    var_11 = ((/* implicit */int) ((((unsigned int) var_2)) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)0)) * (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_12 = ((arr_4 [i_0] [14U] [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))));
            var_13 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1 - 1] [i_1]);
            var_14 = arr_3 [i_1 - 2] [i_1];
            arr_5 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [(short)2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32756))));
            arr_9 [i_0] = (-(-1815606667));
            arr_10 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_4 [i_2] [i_2] [i_0]));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
                        arr_16 [i_0] [i_2] [i_4] [i_2] [i_4] = ((/* implicit */short) var_2);
                    }
                } 
            } 
        }
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */int) (short)-1)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((var_6), (var_9))))) >= (((/* implicit */unsigned int) min((arr_11 [i_0] [i_0] [(short)10]), (((/* implicit */int) ((short) var_4))))))));
        var_16 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_17 = ((/* implicit */short) ((unsigned int) var_7));
    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (!((_Bool)0))))))));
}
