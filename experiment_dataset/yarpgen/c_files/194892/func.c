/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194892
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
    var_17 &= var_14;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [(signed char)8]))) % (4651376408803677273LL)));
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-121)) != (((/* implicit */int) ((signed char) arr_1 [8LL])))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 1870480886U)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) (signed char)-92))))) ? (((/* implicit */long long int) 708142082U)) : ((+(-1622794516495494994LL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))))));
}
