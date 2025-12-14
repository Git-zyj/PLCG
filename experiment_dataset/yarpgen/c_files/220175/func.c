/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220175
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (~(0LL)));
                arr_6 [i_0] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_2 [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) 4942537842445608053ULL);
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((((/* implicit */int) var_15)) == (((/* implicit */int) var_6))))))), (min((3347642583U), (((/* implicit */unsigned int) var_10))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (436958697)))) ? (((/* implicit */unsigned int) ((min((-1353573239), (((/* implicit */int) var_9)))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))) : (((unsigned int) (~(((/* implicit */int) var_13)))))));
}
