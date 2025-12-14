/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190136
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((-(((unsigned long long int) (short)32767))))));
    var_15 = ((/* implicit */unsigned long long int) (signed char)-120);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32767))))) : (2692703560U)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) : (arr_0 [i_1]))), (((/* implicit */unsigned long long int) (short)32766))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))) : (arr_0 [i_0])));
                arr_4 [i_0] = ((/* implicit */long long int) max(((signed char)108), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [11LL]))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) - (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) 1584652604)) : (((long long int) arr_1 [i_1]))))));
            }
        } 
    } 
}
