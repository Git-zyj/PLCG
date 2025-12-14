/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48090
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
    var_18 = var_15;
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-(var_15)))) ? (0LL) : (((/* implicit */long long int) 3662821878U)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((unsigned short) (unsigned short)65535)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6672942150716536764LL)))))))) ? (((/* implicit */long long int) (+(15U)))) : (((((((/* implicit */long long int) -1034019811)) == (6672942150716536764LL))) ? (((long long int) (unsigned char)170)) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (4294967281U))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) (unsigned char)60)))))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 6672942150716536764LL))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((((((/* implicit */_Bool) ((var_15) & (((/* implicit */long long int) arr_11 [2LL]))))) && (((/* implicit */_Bool) arr_12 [i_3 + 1] [(signed char)0] [(signed char)0] [i_3 - 2])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [6ULL] [(_Bool)1] [i_1] [6ULL]))) & (9223372036854775807LL))) : (((/* implicit */long long int) var_17))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
