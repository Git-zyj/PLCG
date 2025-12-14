/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50504
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)35980)) >> (((arr_2 [i_0] [i_0] [i_0]) - (4261326596U))))), (((/* implicit */int) max(((signed char)111), ((signed char)99))))))) ? (((/* implicit */unsigned int) (+(var_8)))) : (arr_3 [i_1] [i_0])));
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_4 [(signed char)19] [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_4);
    var_14 -= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -66986726161908068LL))))), (305217381644858827ULL))), (((unsigned long long int) var_11))));
}
