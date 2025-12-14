/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235390
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
    var_11 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) ((signed char) var_8)))))) | (((((/* implicit */_Bool) var_9)) ? (min((var_0), (((/* implicit */int) var_4)))) : (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min(((-(arr_4 [19]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [(short)0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 2])) & (arr_0 [i_0]))))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0]))));
                arr_6 [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) min((min((8132140670765707892ULL), (((/* implicit */unsigned long long int) -975492938)))), (((/* implicit */unsigned long long int) var_10))));
                var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0 + 2]))))), (((arr_3 [i_0] [17LL] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_8);
}
