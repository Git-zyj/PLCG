/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226476
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_0 [(unsigned short)3])))), (((-62746607) >= (((/* implicit */int) (_Bool)1))))));
                arr_5 [(short)7] [i_1] [(short)6] = ((/* implicit */unsigned char) (+(min((arr_4 [i_0 - 1] [(unsigned short)7] [5ULL]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 3]))))));
                var_12 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */long long int) ((/* implicit */int) var_9))) % (var_8))), (((/* implicit */long long int) arr_1 [i_0 + 1])))), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_3))))))));
                arr_6 [(short)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_1])))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)47))) ^ (var_7))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))))))) : (((/* implicit */long long int) min((max((62746606), (((/* implicit */int) (unsigned char)109)))), (arr_2 [i_0 - 2]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((unsigned long long int) min((var_5), (((/* implicit */unsigned char) var_4))))) % (((/* implicit */unsigned long long int) ((62746606) | (((/* implicit */int) (unsigned char)147)))))));
}
