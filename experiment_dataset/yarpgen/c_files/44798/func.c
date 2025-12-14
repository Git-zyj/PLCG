/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44798
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
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (max((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_6))))))));
    var_12 += ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 |= ((/* implicit */int) ((signed char) (unsigned short)252));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))) ? (((arr_1 [8] [i_1]) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) (~(-1282338158)))) ? (((arr_1 [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (2277733661126202863LL)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_8);
    var_15 = min((((((/* implicit */_Bool) 2277733661126202879LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(var_8))))), (((/* implicit */unsigned long long int) var_2)));
}
