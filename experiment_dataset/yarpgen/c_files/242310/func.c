/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242310
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
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)143)) <= (((/* implicit */int) arr_0 [i_0]))))), (arr_6 [i_0 - 2] [i_0] [i_2])));
                    var_16 += ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (max((-2322268292961854263LL), (((/* implicit */long long int) arr_4 [0ULL] [i_2]))))))));
                    arr_7 [i_0] [4ULL] [i_2 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_2)) % (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_2]))) : (-5318786528861425105LL)))));
                }
                for (short i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) arr_2 [i_3]);
                    var_18 = -5318786528861425126LL;
                }
            }
        } 
    } 
    var_19 = max((((((/* implicit */int) var_11)) * (((/* implicit */int) max((var_9), (var_8)))))), (((/* implicit */int) var_6)));
    var_20 += ((/* implicit */int) min((((/* implicit */long long int) (-(var_5)))), (max((max((-303459063762153593LL), (-5318786528861425126LL))), (((/* implicit */long long int) var_7))))));
}
