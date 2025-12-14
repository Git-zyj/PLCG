/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238192
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
    var_14 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) (+(((unsigned long long int) arr_2 [i_1 + 1] [i_0 + 1] [i_1]))));
                arr_4 [i_1] [i_0 + 1] = ((/* implicit */long long int) arr_2 [i_0] [i_0 - 2] [i_0]);
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(var_8)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-24)), (arr_0 [i_1])))))) ? (((/* implicit */int) arr_1 [i_1])) : ((+(((/* implicit */int) min((arr_2 [i_0] [i_0] [i_1]), (arr_2 [i_0] [i_0] [i_0 + 1]))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (4842379264852216341LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 3])))) : (max((((/* implicit */long long int) arr_2 [i_0] [i_1 + 3] [i_1])), ((~(var_5)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32764))));
            }
        } 
    } 
}
