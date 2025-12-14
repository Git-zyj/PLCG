/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227285
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                arr_6 [11U] [i_1] [11U] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_11))));
    var_14 = (_Bool)1;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21; i_2 += 2) 
    {
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (4171487479U)))) ? (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 3739279246U)) : (8095272657316540876ULL)))));
        var_16 = ((/* implicit */int) 10351471416393010740ULL);
    }
    var_17 = (!(((/* implicit */_Bool) var_1)));
}
