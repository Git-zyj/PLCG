/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206852
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
    var_17 ^= (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))))));
    var_18 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_1 [i_0])))));
                    arr_6 [17U] [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) min(((short)28586), ((short)32752)))) : (((/* implicit */int) var_12))))) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max((max(((short)-32753), (((/* implicit */short) var_0)))), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))))))));
                }
            } 
        } 
    } 
}
