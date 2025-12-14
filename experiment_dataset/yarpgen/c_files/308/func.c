/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/308
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59942)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (signed char)-112))));
                arr_8 [i_1] [(signed char)10] [(_Bool)0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)93)), ((unsigned char)0))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_1))) <= (((/* implicit */int) (_Bool)0))));
        var_11 += ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2])) > (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))));
        var_12 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) <= (arr_11 [i_2]))))));
    }
}
