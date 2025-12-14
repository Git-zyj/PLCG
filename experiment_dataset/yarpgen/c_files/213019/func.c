/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213019
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((int) var_0));
        var_18 *= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_19 += ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)171))))) % ((-(var_8))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_13 [i_4] [i_1] = arr_11 [i_1] [i_1] [i_1];
                            var_22 -= ((987056154U) < (arr_12 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 3] [i_4 - 2]));
                        }
                    } 
                } 
            } 
        }
        arr_14 [(unsigned char)0] [i_0] = ((/* implicit */unsigned long long int) var_13);
    }
    var_23 = ((/* implicit */signed char) var_4);
}
