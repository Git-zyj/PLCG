/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199207
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_11))) ? (1768233275638428458ULL) : ((+((+(var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 12203782501477618704ULL)) ? (((/* implicit */long long int) -1097121223)) : (1234075627602051274LL))))) : (var_11)));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((-(((unsigned long long int) 1768233275638428443ULL)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    arr_10 [i_0] [i_0] = (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46152)) && (((var_12) <= (((/* implicit */int) var_4))))))));
                }
            }
        } 
    } 
}
