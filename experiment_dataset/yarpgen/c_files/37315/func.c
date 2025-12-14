/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37315
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
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((short) (short)25554))) : (((/* implicit */int) max((arr_4 [i_0] [i_1] [i_2] [i_0]), ((short)25554))))))) || (((((((/* implicit */int) (short)-25554)) % (((/* implicit */int) arr_2 [i_0])))) >= ((-(((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))))));
                    arr_7 [(signed char)5] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)62798))))) ? (((/* implicit */int) (unsigned short)14888)) : (((/* implicit */int) arr_2 [i_2]))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_0);
}
