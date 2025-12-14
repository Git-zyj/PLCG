/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34677
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) arr_1 [i_0]);
                var_14 -= ((/* implicit */long long int) ((((/* implicit */int) (signed char)113)) != ((-(((/* implicit */int) min(((unsigned char)245), ((unsigned char)217))))))));
                var_15 -= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35706))) : (arr_2 [i_1])));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned long long int) (-(var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (min((((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3278))))), (((/* implicit */unsigned long long int) var_12))))));
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_2 + 1])) ? ((+(((/* implicit */int) arr_6 [i_3])))) : (((/* implicit */int) var_4))))));
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)11080))));
                arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_2])) < (((/* implicit */int) (unsigned short)23))))), (arr_8 [i_3 + 3] [i_3])))) ? (min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (arr_5 [i_2 + 2] [i_3 - 3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1])))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (short)-14099)) - (((/* implicit */int) var_10))))), (((1152921504606846976LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((arr_5 [i_2] [i_3]) % (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)46)) / (((/* implicit */int) (signed char)-123)))) / (min((((/* implicit */int) arr_6 [i_2 - 1])), ((+(((/* implicit */int) arr_8 [i_2] [i_3]))))))));
            }
        } 
    } 
}
