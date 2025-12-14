/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30090
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) min((var_17), ((-(((/* implicit */int) (!(((/* implicit */_Bool) -1637844888728346537LL)))))))));
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (min((4108243503U), (((/* implicit */unsigned int) 2147483647)))))), (((/* implicit */unsigned int) 505280432))));
    }
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) 331534815U)) ? (var_2) : (((/* implicit */int) (signed char)98)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                var_20 += ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) 2832177102U))))), (-2147483633)));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) var_13))))))) != (((((/* implicit */unsigned long long int) 99196433U)) + (arr_2 [i_1])))))))))));
                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)243))))), ((+(arr_2 [i_2])))));
            }
        } 
    } 
}
