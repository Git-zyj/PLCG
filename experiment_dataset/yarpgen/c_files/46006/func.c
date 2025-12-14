/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46006
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)0)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) arr_0 [(unsigned short)4] [i_1]);
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (+((~(0ULL)))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((min(((-(-1386186273))), (((/* implicit */int) (_Bool)1)))), (min((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (short)32767)))), (var_5))))))));
                    var_21 &= (!((!((_Bool)1))));
                    var_22 = ((/* implicit */signed char) ((unsigned short) (short)-8017));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (!(var_0)))) - (((int) ((((-731371165) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))))));
}
