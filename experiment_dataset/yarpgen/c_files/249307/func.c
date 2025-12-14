/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249307
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
    var_10 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((unsigned int) var_3)) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_2))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (max((947461066U), (947461066U)))));
                    var_12 = ((/* implicit */signed char) max(((+(arr_6 [i_1 - 1] [i_1 - 1]))), (((/* implicit */unsigned long long int) 4609124493368892607LL))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        var_13 ^= (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_3 + 1])) && (((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)3]))))));
                        arr_10 [2] [15ULL] [i_2] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) min((1454473200U), (((/* implicit */unsigned int) (unsigned short)65535))))) ? ((-(arr_5 [i_1 + 2] [i_3 + 1] [i_3 - 2] [i_3 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                    }
                }
            } 
        } 
    } 
}
