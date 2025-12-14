/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238689
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
    var_12 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)36)) ? (min((((/* implicit */unsigned long long int) var_7)), (arr_4 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) & (((unsigned int) var_10)))))));
                arr_5 [i_1] [(signed char)0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) / (-6121234292836526105LL)))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (var_11)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((var_2) != (((/* implicit */int) var_6)))))))), (min((((((/* implicit */unsigned long long int) var_7)) | (var_11))), (((/* implicit */unsigned long long int) (~(var_7))))))));
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) ((((/* implicit */long long int) var_9)) <= (var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) > (var_7)))))), ((+(1011923931)))));
}
