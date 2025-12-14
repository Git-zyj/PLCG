/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45144
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((short) min((min(((short)0), ((short)(-32767 - 1)))), (((/* implicit */short) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_3 [i_0])))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */short) (((~(((/* implicit */int) var_11)))) & (((/* implicit */int) ((short) arr_8 [(short)7] [i_1 + 3] [(short)1] [i_1] [i_1 + 3] [i_1 - 1])))));
                                var_17 = ((/* implicit */short) max((var_17), (var_2)));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (short)21739))))))))));
                            }
                        } 
                    } 
                } 
                var_19 &= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)-32761))))))));
            }
        } 
    } 
    var_20 = var_13;
}
