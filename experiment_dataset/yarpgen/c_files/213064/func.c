/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213064
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
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) min(((short)-902), ((short)-27914)))))) ? (max(((+(((/* implicit */int) (short)-909)))), (((/* implicit */int) (short)-19220)))) : (((/* implicit */int) (short)911))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (-(max((((/* implicit */int) ((short) (short)902))), (((((/* implicit */_Bool) (short)24370)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)-22593))))))));
                var_16 = ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23808)) ? (((/* implicit */int) (short)-20916)) : (((/* implicit */int) (short)-27883)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_3] = arr_9 [i_2] [i_2] [i_1];
                            var_17 = ((/* implicit */short) max((var_17), ((short)-16644)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min(((short)20727), (arr_4 [i_0] [i_0])))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : ((+(((/* implicit */int) (short)16944)))))))));
            }
        } 
    } 
}
