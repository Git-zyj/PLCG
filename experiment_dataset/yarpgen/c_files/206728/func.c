/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206728
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
    var_19 &= ((/* implicit */short) (unsigned char)171);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) var_0);
                arr_6 [12LL] [i_1] = max((((/* implicit */int) (signed char)-115)), (((((/* implicit */_Bool) 18724387)) ? (((/* implicit */int) (signed char)54)) : (-9))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_1))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)16891)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_0 [(signed char)15])) ? (((/* implicit */int) (short)1706)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((arr_2 [i_1 - 1]) && (((/* implicit */_Bool) -18724399))))))))))));
            }
        } 
    } 
}
