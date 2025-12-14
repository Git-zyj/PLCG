/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25369
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) ((((var_6) << (((((/* implicit */int) var_10)) + (11406))))) < (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (8268262252610558959LL))))))) != ((~((~(((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((int) (unsigned short)53100));
        arr_3 [2U] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_5)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(9965775731690119233ULL))) : (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) (unsigned short)12435)))))));
        var_12 = ((/* implicit */unsigned long long int) var_5);
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
        {
            {
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((int) arr_10 [i_2] [i_1]));
                arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((long long int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned short)12418)) : (((/* implicit */int) arr_5 [i_2]))))));
            }
        } 
    } 
}
