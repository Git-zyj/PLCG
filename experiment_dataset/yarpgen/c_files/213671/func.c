/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213671
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
    var_14 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)189)))) >= (arr_8 [i_2] [i_1 - 1] [i_1] [i_0])));
                    arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) -637756461))));
                    var_16 += ((((/* implicit */_Bool) (+((+((-2147483647 - 1))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))))))) : (-19852216));
                    var_17 &= ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18332)) ? (arr_3 [(signed char)8]) : (arr_3 [i_0])))) + (arr_8 [i_2] [i_1 + 1] [i_2] [i_0]))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_1]))));
                }
            } 
        } 
    } 
}
