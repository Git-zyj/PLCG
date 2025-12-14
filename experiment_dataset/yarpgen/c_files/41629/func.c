/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41629
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned long long int) ((min((7052293825853210382LL), (((/* implicit */long long int) (_Bool)1)))) | (((/* implicit */long long int) (~(max((((/* implicit */int) (signed char)15)), ((-2147483647 - 1)))))))));
                    var_13 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                    arr_9 [(signed char)4] [i_1] [i_0] = ((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned short)62013)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6858964662224279779LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))) >= (3028452168574754247ULL))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)-1)))))))))));
}
