/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35975
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (short)-32120))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min(((short)-32120), ((short)-7286))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) (+(var_0)));
                arr_5 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)46)) >> (((((/* implicit */int) arr_1 [i_0])) - (6808)))))), (((long long int) var_0))))) : (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)46)) >> (((((((/* implicit */int) arr_1 [i_0])) - (6808))) - (50769)))))), (((long long int) var_0)))));
                var_14 = (((~(((/* implicit */int) (signed char)-15)))) + (((/* implicit */int) (unsigned char)251)));
                arr_6 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                            var_16 -= ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)1))))) ? (arr_3 [(unsigned short)9] [(unsigned short)9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
