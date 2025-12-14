/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227726
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 2] [i_0] [i_0 - 2] = max(((-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)63)), ((unsigned char)242)))))), (var_0));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)22447)) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) min((-2098202844), (((/* implicit */int) (unsigned char)48)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) (+(((min((((/* implicit */unsigned int) (unsigned short)43088)), (var_8))) - (min((((/* implicit */unsigned int) (unsigned short)41517)), (2884086875U)))))));
}
