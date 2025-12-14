/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237210
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)251)), ((-(arr_0 [i_0] [i_0])))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) ((unsigned short) (unsigned char)249))) - (232)))));
        var_19 = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)7)))) | (((/* implicit */int) var_1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_12);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 261954895)) > ((-(var_13)))));
                    var_21 = ((/* implicit */_Bool) var_12);
                    var_22 = max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1]))))), (((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57327))))));
                    var_23 ^= (+((+(((/* implicit */int) ((_Bool) 2305843007066210304LL))))));
                }
                var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_7 [i_1 + 1])) >> (((((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1])) - (106))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1])))))));
                var_25 ^= ((/* implicit */unsigned char) max((arr_6 [i_2]), (((/* implicit */unsigned int) ((-261954895) % ((+(((/* implicit */int) arr_7 [i_1 + 1])))))))));
            }
        } 
    } 
}
