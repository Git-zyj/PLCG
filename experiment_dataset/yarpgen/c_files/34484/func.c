/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34484
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (signed char)65)), (arr_1 [i_0] [i_1 + 3]))), (((/* implicit */unsigned short) min((((/* implicit */short) (signed char)-76)), ((short)24788))))))) ? (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) arr_3 [i_0 - 2] [i_1] [i_1 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), ((unsigned short)55449)))) && (((/* implicit */_Bool) min((489199547), (((/* implicit */int) (unsigned short)9753))))))))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)35570)) ^ (((/* implicit */int) (unsigned short)35567))));
                var_20 += ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56095))) != (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) * (4212277200U))))) ? (((/* implicit */unsigned int) ((((int) arr_1 [i_1] [i_0])) << (((/* implicit */int) ((((/* implicit */int) (signed char)53)) >= (((/* implicit */int) (unsigned short)127)))))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)72))))) | (((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35600))) : (4212277195U)))))));
            }
        } 
    } 
    var_21 += ((/* implicit */long long int) var_9);
}
