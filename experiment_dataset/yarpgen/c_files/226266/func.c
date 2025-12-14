/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226266
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((long long int) (signed char)(-127 - 1)));
                    var_21 *= ((/* implicit */unsigned int) ((min((var_17), (arr_10 [(unsigned char)20] [i_2 - 1] [i_2] [i_1]))) > (((arr_10 [i_0] [i_2 - 1] [i_2 + 1] [i_0]) >> (((/* implicit */int) arr_7 [19ULL] [i_2 - 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_22 -= ((/* implicit */int) ((signed char) (+(arr_15 [9U] [i_1] [i_3 - 2] [i_2 - 1] [i_4]))));
                                arr_18 [i_0] = ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [2ULL])) ? (max((((/* implicit */unsigned long long int) (signed char)-37)), (var_17))) : (((/* implicit */unsigned long long int) var_13))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_7);
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (signed char)-105))) * (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_9))))))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60442)) ? (785670565U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2271700783U)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_11)))))));
}
