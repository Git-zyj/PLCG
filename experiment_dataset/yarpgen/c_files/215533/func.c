/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215533
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
    var_14 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40988)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) min(((unsigned short)24538), ((unsigned short)20321)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (2067153935326075285LL))))))));
    var_15 = ((/* implicit */short) ((max((((int) (unsigned char)48)), ((~(((/* implicit */int) (unsigned char)47)))))) > (((/* implicit */int) min(((unsigned short)40988), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9)) || (((/* implicit */_Bool) var_7))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))) ? (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_12)))))))));
                arr_6 [6LL] [6LL] [(unsigned short)14] = ((/* implicit */unsigned short) var_7);
                arr_7 [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [(signed char)4])) | (((/* implicit */int) var_1))))) / ((+(arr_2 [i_0 + 1]))))), (((/* implicit */unsigned long long int) arr_4 [i_0]))));
            }
        } 
    } 
}
