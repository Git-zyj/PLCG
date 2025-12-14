/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31989
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
    var_10 = max(((-9223372036854775807LL - 1LL)), (402118755470197366LL));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */long long int) (+(18446744073709551615ULL)));
                    var_12 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_0] [i_0])) < (((/* implicit */int) arr_9 [i_1] [i_2])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((arr_7 [i_0] [i_2]), (arr_7 [i_0] [i_1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (unsigned short i_4 = 3; i_4 < 14; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) arr_3 [i_0] [i_4] [i_4]);
                        arr_17 [i_3] = ((/* implicit */int) (((+(0ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_4] [i_5])), (var_4)))) ? (arr_13 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_5]) : (((/* implicit */int) (unsigned short)58002)))))));
                        var_14 = ((/* implicit */signed char) arr_1 [i_3]);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_0] [i_0]))));
    }
}
