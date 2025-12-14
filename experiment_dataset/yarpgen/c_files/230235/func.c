/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230235
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(var_7))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1753982728426954743LL)))) ? (((int) (signed char)0)) : (((/* implicit */int) var_0))))) : (4088615729U)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((-(arr_1 [i_1 - 2] [i_1 - 4]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_1] [i_1 - 3] [i_0]), (arr_3 [i_1] [i_1 - 4] [i_0])))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2484916960U)))) ? (((/* implicit */unsigned int) ((int) (signed char)-1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (var_15) : (1442398876U)))) ? (206351580U) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) / (2852568420U)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_6);
    var_19 = ((/* implicit */unsigned char) 3234508379U);
}
