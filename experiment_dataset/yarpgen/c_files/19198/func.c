/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19198
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)65243)) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [14LL])))))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        arr_9 [i_1] [i_2] [0LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)40434))));
                        var_13 = ((/* implicit */unsigned int) var_11);
                    }
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */short) (unsigned char)214);
    var_15 -= ((/* implicit */unsigned int) var_11);
}
