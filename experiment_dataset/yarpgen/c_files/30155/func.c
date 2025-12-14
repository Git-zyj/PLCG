/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30155
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372034707292160LL), (((/* implicit */long long int) (unsigned char)230))))) ? (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [i_1]))))) : (min((137371844608ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))))) ? ((+(((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) (_Bool)1))));
                arr_7 [i_1] [i_1 - 1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_5 [i_1])))))), (((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0]))) ? ((+(72057044282114048ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [5ULL])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 7; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                arr_14 [i_2 + 2] = (_Bool)1;
                arr_15 [i_2] [i_2] [i_2 + 2] = ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) * (((((/* implicit */_Bool) var_5)) ? (arr_1 [0U] [0U]) : (0ULL)))));
            }
        } 
    } 
}
