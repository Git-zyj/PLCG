/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241676
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
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */int) (short)32371)), (arr_4 [i_1] [i_1])))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
                    var_19 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967295U)) ? (arr_6 [i_0] [i_0] [i_0 - 1] [i_0 - 2]) : (9712963398282967564ULL))) != (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 1] [i_0])) ? (arr_6 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0] [i_0] [i_0 - 2] [i_0])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_17);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_0))))) - (((/* implicit */int) (((-(0U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)27632)) != (var_3))))))))));
    var_22 = ((/* implicit */unsigned char) 20U);
}
