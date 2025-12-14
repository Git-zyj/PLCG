/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42053
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
    var_13 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */_Bool) ((long long int) max((((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (short)-18420)) : (89732392))), (((/* implicit */int) ((unsigned char) arr_6 [i_2]))))));
                            var_15 = ((/* implicit */signed char) var_11);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((short) arr_12 [i_0] [i_0]);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-18420);
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0])), (var_0))))))) - (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (unsigned char)28))))) : (max((2482576119U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((max(((+(((/* implicit */int) (unsigned char)83)))), (((((/* implicit */int) (unsigned char)99)) % (((/* implicit */int) arr_6 [i_0])))))), (((/* implicit */int) (short)-1))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)0)), (36028797018963967ULL)))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_1))) : (((/* implicit */unsigned long long int) ((long long int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_19 = ((unsigned long long int) (signed char)24);
    var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
}
