/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25353
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
    var_10 -= 6435840129411806450ULL;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_0 - 1] &= ((/* implicit */unsigned short) 6435840129411806442ULL);
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) (short)-27919)) : (-866555245)))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (unsigned short)65535)))))));
                    var_12 = ((/* implicit */unsigned char) arr_6 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
