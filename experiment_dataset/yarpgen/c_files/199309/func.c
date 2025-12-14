/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199309
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((var_11), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_5)) > (var_10)))))))) ? (var_6) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (var_6)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 - 2]))))), (((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1 - 1])) ? (var_1) : (-8481628411775505509LL)))));
                    var_16 = ((/* implicit */long long int) max((((unsigned long long int) -1368567531)), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_0 [i_0])), ((-9223372036854775807LL - 1LL)))), (var_13))))));
                    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((max((15200470243314208871ULL), (((/* implicit */unsigned long long int) (unsigned short)30261)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                    arr_6 [3] [i_2] [i_1] [i_0] = max((((/* implicit */long long int) min(((~(var_8))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1))))))))), ((~((~(8481628411775505503LL))))));
                }
            } 
        } 
    } 
}
