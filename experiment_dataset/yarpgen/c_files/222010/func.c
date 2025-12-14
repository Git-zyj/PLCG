/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222010
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) == (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 + 1])))) : ((+(((/* implicit */int) (_Bool)1))))));
                            var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (var_4))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)160)), (0U))))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) (~(var_0)))));
                        }
                    } 
                } 
                var_11 = ((/* implicit */int) (signed char)0);
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) (!(((/* implicit */_Bool) -1583723643)))))))) - ((((!(((/* implicit */_Bool) var_6)))) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (var_4))) : (((/* implicit */unsigned long long int) (~(var_9))))))));
}
