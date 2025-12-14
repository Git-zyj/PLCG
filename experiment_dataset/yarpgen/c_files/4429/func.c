/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4429
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [0LL] [i_2] &= (((~(5636644789986534813ULL))) >> (((((/* implicit */int) (unsigned short)65535)) - (65512))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7848))))) * (((/* implicit */int) arr_3 [i_0 + 1]))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_3 [i_0 + 1]))));
                    var_15 = ((/* implicit */short) var_7);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_12 [i_3] |= ((/* implicit */int) ((short) -5217600284544908809LL));
        arr_13 [6] [0LL] |= ((/* implicit */unsigned long long int) ((short) ((signed char) var_4)));
    }
    var_16 = ((/* implicit */long long int) max((4ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
    var_17 |= var_3;
}
