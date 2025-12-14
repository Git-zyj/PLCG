/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46469
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) var_10);
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = (+(((/* implicit */int) (short)27303)));
                                var_21 += ((/* implicit */signed char) arr_9 [i_0] [(unsigned char)8] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)17450)) : (((/* implicit */int) (signed char)4))))))), (((arr_4 [i_0 - 2]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) : (9138524557852334158LL)))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-27317))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
}
