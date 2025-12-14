/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202956
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [5ULL] [5ULL]))));
                var_20 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)14318)) ? (arr_5 [(signed char)1] [(signed char)1] [i_0] [i_0]) : (((/* implicit */int) (unsigned char)0))))));
                    var_22 = ((/* implicit */unsigned int) (unsigned short)0);
                }
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) min((var_13), (((/* implicit */short) var_7)))))))) >= (max((var_6), (((/* implicit */unsigned int) var_7))))));
}
