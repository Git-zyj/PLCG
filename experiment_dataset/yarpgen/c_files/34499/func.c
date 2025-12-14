/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34499
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3247648263U)))) ? (min((((/* implicit */long long int) var_2)), (0LL))) : (((((/* implicit */_Bool) -3806304617072043313LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((-9223372036854775807LL - 1LL))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0]))), (((((/* implicit */_Bool) (unsigned short)20403)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = ((long long int) ((int) var_2));
                            var_22 |= ((/* implicit */unsigned long long int) -1LL);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) max((-9223372036854775791LL), (524287LL)))) ? (-1LL) : (max((3806304617072043313LL), ((-9223372036854775807LL - 1LL))))))))));
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_14)))));
                                var_24 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-1)))) && (((/* implicit */_Bool) var_15))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(0LL)));
                                var_25 = ((/* implicit */unsigned int) ((max((-5162470510169813817LL), (9223372036854775807LL))) & ((~(4968233125076939279LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
