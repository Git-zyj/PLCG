/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189846
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
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [5LL] [i_0] = ((/* implicit */unsigned short) var_4);
                var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(-5338250489671888404LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)55409)), (arr_1 [(signed char)8])))) ? (((arr_1 [(signed char)8]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-101))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)14)))) > (((/* implicit */int) max((((unsigned short) var_9)), (min((((/* implicit */unsigned short) var_3)), ((unsigned short)5))))))));
}
