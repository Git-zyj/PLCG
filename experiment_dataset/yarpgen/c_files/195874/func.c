/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195874
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
    var_20 = ((/* implicit */long long int) (+((~((~(502100449)))))));
    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 502100449)) ? (((/* implicit */int) (unsigned short)53800)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-1LL) : (((/* implicit */long long int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 6; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((33554431U) | (((/* implicit */unsigned int) -502100449))));
                            var_22 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53800)))))) ? (((/* implicit */long long int) 2147483647)) : (arr_0 [i_0]))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) min(((+(arr_9 [i_0 + 1] [i_0]))), (((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
}
