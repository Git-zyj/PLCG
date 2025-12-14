/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192307
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_8 [i_0] |= ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) > (var_8))) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [(unsigned short)0]))))));
                var_12 ^= 2648720029U;
                arr_9 [i_0] [i_1] |= ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_11 [i_2]))));
        var_14 = ((/* implicit */unsigned int) min((var_14), ((-(((unsigned int) ((2648720004U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))))))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 1607356397)) ^ (4080803221U)))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_2]))) - (min((((/* implicit */unsigned long long int) var_0)), (0ULL)))))) ? (-4479172670231161537LL) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_0)))))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) 2648719997U);
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((signed char) var_11))))));
        arr_17 [i_3] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2)))), (((1607356390) == (((/* implicit */int) var_0)))))))));
    }
}
