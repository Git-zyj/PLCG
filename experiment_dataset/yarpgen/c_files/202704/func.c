/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202704
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
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -9223372036854775785LL)) ? (-1106307501109348722LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63327)))))));
                    arr_9 [i_0] [(unsigned char)11] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((arr_2 [i_0]) & (var_2)))) ? (((/* implicit */long long int) ((arr_6 [i_0] [(signed char)8] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (arr_4 [i_0] [i_1 - 3] [i_1 - 3]))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((arr_4 [(_Bool)1] [(_Bool)1] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))))));
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */long long int) 5498598843367617181ULL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_0), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_2))) > (((var_0) & (1577582590U))))))));
}
