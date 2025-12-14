/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46564
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
    var_12 = ((/* implicit */short) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_13 = var_8;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((max((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0])), (((var_10) % (var_10))))) + (((long long int) max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_0]))))))))));
                var_15 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_16 += ((/* implicit */signed char) (~((+(6009594777808313049ULL)))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) * (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)0)))) : (((long long int) arr_7 [i_2]))));
        var_18 = ((/* implicit */short) var_9);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((_Bool) (unsigned char)36)))))));
        arr_13 [8ULL] = ((/* implicit */unsigned int) arr_12 [i_3] [i_3]);
        var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) (short)10941))))));
    }
}
