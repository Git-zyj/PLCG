/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22683
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) (short)18473)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))));
                var_17 = ((((unsigned long long int) min((((/* implicit */unsigned short) arr_4 [i_1])), ((unsigned short)56958)))) * (((/* implicit */unsigned long long int) max((2714078553U), (((/* implicit */unsigned int) var_14))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_18 = max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)33))))), (var_10)))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32766))))), (18446744073709551615ULL))));
                    var_19 = ((unsigned int) (~((~(((/* implicit */int) (short)21336))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_10);
    var_21 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)11244))))))));
}
