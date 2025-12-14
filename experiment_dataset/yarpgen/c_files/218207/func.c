/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218207
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((unsigned char) var_10))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-85)))))) : (var_4)))) ? ((+(((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((long long int) (unsigned char)104))));
                                var_18 = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)1))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) var_2);
}
