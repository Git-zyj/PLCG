/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221525
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
    var_10 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) ((min((arr_0 [i_0]), (arr_0 [i_0]))) < (((/* implicit */unsigned long long int) (+(max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_6 [i_1])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (arr_10 [i_1] [i_1] [i_1]) : (arr_10 [i_2] [i_2] [i_2]))))));
                                arr_12 [i_3] [i_3] = ((((/* implicit */_Bool) ((arr_4 [i_0]) * ((+(arr_4 [i_4])))))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_3 [i_1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    var_15 = ((/* implicit */int) var_1);
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_1)))));
}
