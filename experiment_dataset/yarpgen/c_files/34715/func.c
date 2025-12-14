/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34715
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) (short)23642));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) (+((+(-1690086318)))))) : (min((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)18545)))))))));
                arr_7 [i_0 - 2] [i_0 - 2] &= ((/* implicit */unsigned int) max((min(((-(1690086317))), (((/* implicit */int) ((unsigned char) arr_1 [i_0]))))), (((/* implicit */int) ((signed char) arr_4 [i_0 - 2] [i_0 - 2])))));
                var_11 = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)21445))))) ? ((~(9175376029453776335LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
}
