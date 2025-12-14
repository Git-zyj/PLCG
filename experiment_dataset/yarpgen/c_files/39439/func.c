/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39439
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_14 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48427))) - (-2010853757237807804LL));
                    var_15 = ((/* implicit */_Bool) ((long long int) var_9));
                }
                var_16 = ((/* implicit */unsigned char) (((((+(max((arr_6 [i_0 + 1] [i_1] [i_1 + 1] [i_1]), (var_6))))) + (9223372036854775807LL))) << (((min((((arr_4 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) + (((/* implicit */int) (short)20265))))))) - (1225821590ULL)))));
                var_17 = (((((~(((/* implicit */int) arr_5 [i_0 - 1])))) + (2147483647))) << (((((((((/* implicit */int) (unsigned short)17107)) | (-1))) + (7))) - (6))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)49581)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)22236))))))))));
}
