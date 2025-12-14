/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205668
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) var_19);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
                var_20 = ((/* implicit */unsigned char) min(((signed char)127), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (arr_2 [i_0] [i_1 + 1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)53))));
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_23 = ((/* implicit */int) ((unsigned char) (signed char)127));
        arr_10 [i_2] = ((min((((/* implicit */unsigned int) arr_9 [(unsigned short)2])), (((arr_1 [i_2]) ^ (var_17))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 + 1])) - (((/* implicit */int) var_12))))));
        var_24 = min((1062646422933690253ULL), (((/* implicit */unsigned long long int) 4672698854216922621LL)));
    }
}
