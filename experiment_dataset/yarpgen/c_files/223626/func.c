/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223626
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */signed char) ((arr_2 [i_0] [i_0] [i_0]) >> (((15121480022347846224ULL) - (15121480022347846199ULL)))));
                arr_6 [14] = var_11;
                arr_7 [12] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) ((unsigned char) arr_2 [(_Bool)1] [i_1] [3]))) / (((/* implicit */int) ((unsigned char) (signed char)24))))), (arr_3 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(8650702690262830377ULL)))) ? (134217727LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)43616)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (-134217727LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))) : (var_1)));
}
