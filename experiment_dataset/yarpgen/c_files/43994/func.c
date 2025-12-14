/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43994
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [1U] [(signed char)4] [(signed char)4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_0 [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-118)), (arr_0 [i_0]))))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max(((+(2889365689U))), (((/* implicit */unsigned int) var_5)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (signed char)-54);
                arr_7 [i_1] [i_0] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_0))))) ? (arr_3 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))))));
                var_14 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned short) var_12)), (((unsigned short) (signed char)-63)))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54370)) % (((/* implicit */int) (unsigned short)59957))))))));
    var_16 = ((/* implicit */unsigned short) var_5);
}
