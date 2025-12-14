/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234064
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
    var_11 += ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */_Bool) arr_1 [i_0]);
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_5))))) : (((((/* implicit */_Bool) var_10)) ? (2199023255551LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (var_10)))))) : ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_7)) : (var_2)))))));
                                var_14 += ((/* implicit */short) max((var_3), (((/* implicit */unsigned int) min((((var_1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)24890)) : (((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                } 
                var_15 += ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                var_16 = ((/* implicit */int) (_Bool)0);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24890)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24890)))))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1411186156241373370LL)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((((_Bool)1) ? (2199023255551LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))))) : (((/* implicit */long long int) ((var_9) ? (var_10) : (var_10)))))) : (max((var_7), (((/* implicit */long long int) (_Bool)0)))))))));
                arr_13 [i_0] [i_1] = ((/* implicit */short) var_0);
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) ? (((((/* implicit */_Bool) (unsigned short)15195)) ? (var_7) : (((/* implicit */long long int) 2695035653U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) ? (((/* implicit */int) var_5)) : (var_10)));
}
