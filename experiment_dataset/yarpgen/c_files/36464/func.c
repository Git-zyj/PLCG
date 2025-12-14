/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36464
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
    var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (6351942473693824265LL) : (((/* implicit */long long int) var_2))))) | (((arr_3 [i_1] [i_0]) & (13932897817400447478ULL))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)496)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 7; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_2 + 3] [i_1 + 1] [i_2 - 1])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_6 [i_0] [i_1]))))))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((9223372036854775807LL), (-6351942473693824269LL)));
                }
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_16 *= ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */short) (unsigned char)2);
}
