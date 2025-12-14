/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38367
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (arr_3 [i_0]))))));
                var_17 = (~(((unsigned long long int) (unsigned char)141)));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_2 [i_0] [i_0] [i_0])))))))));
                var_19 = ((/* implicit */unsigned short) var_11);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) arr_2 [(_Bool)0] [(_Bool)0] [(_Bool)0]);
                    var_21 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)164))));
                    arr_13 [i_2] [10U] [i_4] [2] |= ((/* implicit */_Bool) (short)22272);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3618793507U)) / (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_9)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-4480326144606451959LL))))));
}
