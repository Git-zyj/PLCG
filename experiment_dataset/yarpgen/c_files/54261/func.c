/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54261
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
    var_18 = ((/* implicit */_Bool) ((int) var_7));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (unsigned short)62799);
                    arr_7 [i_0] [i_1] [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((1108307720798208LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) % (arr_0 [i_1])))) ? (var_12) : (((/* implicit */long long int) max((((/* implicit */int) (short)17567)), (-830860800))))));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((-6435005012462076292LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))) > (((/* implicit */int) (signed char)-126))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_2);
    var_21 = ((/* implicit */signed char) (+(min((-2095800205), (((/* implicit */int) (signed char)65))))));
}
