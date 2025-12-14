/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244037
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_5)))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (7041898211262935242LL)))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 + 2] [i_1 - 1])) : (arr_3 [i_0] [i_1 - 2])))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_1 - 2])) && (((/* implicit */_Bool) arr_1 [i_1 - 1])))), ((!(var_13)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) 4221898843970431640ULL);
    var_17 += ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((1307273488) - (((/* implicit */int) (unsigned char)30))))) <= (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221)))))))), ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
}
