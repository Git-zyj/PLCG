/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22111
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 3726683013U))) ? (((((/* implicit */unsigned long long int) 3110339572U)) ^ (arr_2 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) : (arr_3 [i_0] [9ULL] [i_0])))) ? (var_4) : (((/* implicit */long long int) ((int) var_6))))))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((arr_3 [i_0] [i_1] [i_1]) / (((/* implicit */long long int) var_7)))) : (arr_0 [i_0] [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) var_12)) == (max((((/* implicit */long long int) (unsigned char)192)), (var_4)))));
}
