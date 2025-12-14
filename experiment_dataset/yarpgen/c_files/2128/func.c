/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2128
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [7U] = ((short) (signed char)3);
                arr_6 [(short)19] [i_1] = ((/* implicit */long long int) (~(max((min((629176579U), (((/* implicit */unsigned int) (unsigned short)26699)))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)12)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) -955042660))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)25))));
            }
        } 
    } 
    var_11 = min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105))))), (var_8));
}
