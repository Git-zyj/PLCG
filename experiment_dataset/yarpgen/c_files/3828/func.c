/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3828
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
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)90)) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)93)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-1);
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1]))));
                    arr_11 [i_0] [i_1] [i_2] = min((arr_1 [i_2] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned int) var_10)))))) <= (arr_5 [i_1])))));
                    arr_12 [4U] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_2])))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (((var_3) & (-4777719597262079823LL))) : ((~(arr_7 [i_2] [i_0] [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (4016862363U))))));
                }
            } 
        } 
    } 
}
