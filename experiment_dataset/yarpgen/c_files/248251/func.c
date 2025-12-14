/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248251
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
    var_20 += ((/* implicit */unsigned int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) - (-1426726606035727619LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)162), ((unsigned char)162)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)118)) : (-2054828075)))) ? (((/* implicit */int) min(((signed char)116), ((signed char)-118)))) : (((arr_0 [i_2]) ? (arr_3 [i_2] [i_1] [i_2]) : (59731066)))))) ? (((((_Bool) arr_6 [i_0] [i_1] [12LL])) ? (((unsigned int) 1155282186)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [10U] [10U] [i_2])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_0])))));
                }
            } 
        } 
    } 
}
