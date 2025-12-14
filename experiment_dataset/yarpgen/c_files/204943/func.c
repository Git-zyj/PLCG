/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204943
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
    var_10 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)61))) : (var_7)));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (var_8)))) + (((((/* implicit */_Bool) ((var_3) | (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3)))))) : (var_1)))));
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (var_7)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_2))))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)))) : (var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)61)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-20399)) / (((/* implicit */int) (signed char)-50))))) ? (((((/* implicit */int) (signed char)-62)) / (((/* implicit */int) (unsigned short)49983)))) : (((/* implicit */int) (unsigned short)15564)))) : (((((/* implicit */_Bool) -5546306230888350953LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7729))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((var_0) == (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) : (var_1)));
                            var_14 = ((((((var_7) > (var_7))) ? (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        }
                    } 
                } 
            }
        } 
    } 
}
