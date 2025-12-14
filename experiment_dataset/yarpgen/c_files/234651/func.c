/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234651
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [4] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                arr_5 [i_0] [(unsigned short)1] [i_1] = (signed char)-64;
                var_10 = ((/* implicit */unsigned long long int) (unsigned short)61802);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_11 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) arr_6 [i_2]))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_3])) < (((/* implicit */int) arr_10 [i_2] [i_2] [i_3]))))), ((+(((/* implicit */int) arr_10 [i_2] [i_3] [(signed char)14])))))))));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (short)7936))));
            arr_12 [i_3] [i_3] [i_2] = ((/* implicit */signed char) arr_6 [i_2]);
        }
    }
}
