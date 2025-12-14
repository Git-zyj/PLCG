/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209409
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
    var_15 -= ((/* implicit */unsigned long long int) 816908275U);
    var_16 &= ((/* implicit */long long int) 3478059005U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1192781149U)) ? (var_13) : (arr_1 [i_2 - 1])));
                    var_18 = ((/* implicit */unsigned char) (~(arr_1 [i_2 - 1])));
                }
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_8 [i_0] [i_0]) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                arr_10 [i_1] [i_0] = ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) == (1653027814U))))))) * ((~((+(var_7))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_4 [8] [6LL] [i_0]))));
            }
        } 
    } 
}
