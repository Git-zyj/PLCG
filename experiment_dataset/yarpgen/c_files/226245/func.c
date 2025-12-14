/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226245
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
    var_11 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 1637843345U)), (var_3)));
                var_12 = ((/* implicit */int) 17179868928LL);
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (arr_7 [i_0] [i_1] [i_1]) : (arr_7 [i_0] [i_0] [(_Bool)1]))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (arr_7 [i_0] [i_0] [4U]) : (arr_7 [i_0] [i_1] [i_1]))))))));
                arr_9 [i_0] [(_Bool)1] &= ((/* implicit */unsigned int) var_3);
                arr_10 [(signed char)9] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_10) ? (((/* implicit */int) (unsigned char)6)) : (2147483647))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)8))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
            }
        } 
    } 
}
