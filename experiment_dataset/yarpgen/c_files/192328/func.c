/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192328
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) 3182728259U)), (min((((/* implicit */long long int) (unsigned char)2)), ((~(-4600332409560440730LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0 + 1] [20] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) > (((((((/* implicit */int) (signed char)-2)) + (2147483647))) >> (((((/* implicit */int) (signed char)-2)) + (30)))))));
                    arr_11 [(short)8] [i_1] [22LL] &= ((signed char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [22LL] [i_1] [i_2]))))), (var_7)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        var_20 = ((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (signed char)-2)) : ((-(((/* implicit */int) (signed char)127)))))) >= (((var_13) ? (((/* implicit */int) arr_0 [i_3] [i_3 + 2])) : (((/* implicit */int) arr_0 [i_3] [i_3 + 1])))));
        arr_16 [i_3] = ((/* implicit */signed char) ((unsigned long long int) (-((+(((/* implicit */int) var_17)))))));
    }
}
