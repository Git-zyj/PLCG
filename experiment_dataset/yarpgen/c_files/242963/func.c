/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242963
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [2] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */int) (unsigned short)59810)), (var_9))) : (((/* implicit */int) var_6))))) & (((((/* implicit */_Bool) min((0), (((/* implicit */int) var_11))))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_3] [i_2])), (11085856758518223249ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_2 - 3])))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 2] [i_3 - 1] [i_1 - 3]))) / (min((var_4), (((/* implicit */long long int) arr_5 [i_4 - 1] [i_4] [0LL])))))))));
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (arr_7 [i_2] [i_2 - 2] [i_2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_0] [i_2])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [(signed char)7])) - (max((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_9))))))));
                            var_14 = ((/* implicit */_Bool) -342650216);
                        }
                        var_15 = var_1;
                    }
                    arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) - (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) (signed char)89))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) min((6ULL), (((/* implicit */unsigned long long int) var_5))));
    var_17 = ((/* implicit */unsigned char) (+(var_3)));
}
