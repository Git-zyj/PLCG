/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231448
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = min(((~((~(arr_2 [i_2] [i_1] [i_0]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -112161137)))))))));
                    var_16 = ((/* implicit */int) ((short) var_5));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_1))));
    var_18 = ((/* implicit */unsigned short) (~(max((((var_7) ? (var_5) : (var_5))), ((-(-112161124)))))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((+(-112161137))) : (((/* implicit */int) ((((/* implicit */long long int) var_8)) < (var_9))))))))))));
}
