/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230712
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [15U])))) && (((/* implicit */_Bool) ((short) arr_3 [i_0] [i_1 + 1])))));
                    var_11 = ((/* implicit */short) (+(((max((var_6), (((/* implicit */unsigned int) (short)32126)))) << (((((/* implicit */int) var_8)) + (19659)))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [5LL])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65517)) & (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? (min((var_0), (var_2))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (1859775575) : (((/* implicit */int) arr_9 [i_1] [i_1] [(short)4])))))) : (((/* implicit */int) min(((unsigned short)1), ((unsigned short)24058))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_5);
}
