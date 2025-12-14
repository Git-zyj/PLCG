/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248635
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [2LL] = min(((~(((((/* implicit */_Bool) 874358034U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (arr_0 [i_0] [i_1 - 1]))))), (((arr_0 [i_1 - 1] [i_1 + 2]) >> (((arr_2 [(_Bool)1] [i_1] [i_1]) + (1817276091))))));
                arr_6 [i_0] [i_0] = min(((((+(((/* implicit */int) (_Bool)1)))) >> (((var_15) - (5036577476758053530ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)5])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [2U] [i_0]))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) (signed char)3);
}
