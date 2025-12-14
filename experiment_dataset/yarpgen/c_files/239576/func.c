/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239576
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
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)10] [i_1] [i_1] &= ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_4 [i_0 + 2])))), (((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 + 2]))))));
                arr_7 [10ULL] &= max((((((/* implicit */int) max((var_7), (arr_4 [i_0])))) << (((/* implicit */int) ((arr_5 [i_0 + 2]) || (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))), (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_20 -= (+(((((/* implicit */long long int) -109622275)) / (8388607LL))));
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (signed char)-95)))))) ? (((65535) & (((/* implicit */int) arr_10 [i_3] [i_3])))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 67108863)), (var_11)))) ? ((-(((/* implicit */int) arr_8 [i_3])))) : ((-(((/* implicit */int) (signed char)-99))))))));
            }
        } 
    } 
}
