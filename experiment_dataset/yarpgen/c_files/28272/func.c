/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28272
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
    var_14 |= ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1])) | (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))), (var_5))))));
                arr_5 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)31443))))), (((unsigned long long int) arr_4 [i_0 - 1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) == (((/* implicit */int) arr_0 [i_0])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1])), ((unsigned short)65535)))) * (((/* implicit */int) arr_4 [i_0 - 1] [i_0]))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((448LL) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned long long int) var_9);
}
