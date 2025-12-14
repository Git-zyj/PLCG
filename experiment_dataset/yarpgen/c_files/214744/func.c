/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214744
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_17))));
    var_21 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_5)))))))), (var_13)));
    var_22 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((signed char)15), ((signed char)17)))), (((((/* implicit */unsigned long long int) (-(var_8)))) * (((((/* implicit */_Bool) var_15)) ? (var_9) : (11431923927512399180ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1 + 1] [i_1 + 1] [5ULL] = ((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0] [i_2])), ((unsigned char)169))))))) - (min((6798490122974621649LL), (((/* implicit */long long int) (signed char)94)))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)-109);
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */_Bool) (-(var_18)));
}
