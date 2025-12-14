/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231898
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
    var_19 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 879166787)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4))))))) == (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) 34359738367LL)) ? (var_8) : (((/* implicit */int) (signed char)-96))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 *= ((/* implicit */unsigned short) ((max((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0])))) >= (((/* implicit */int) ((arr_1 [i_0]) || ((_Bool)1))))));
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25887)))), (((((/* implicit */int) (signed char)(-127 - 1))) / (var_13)))))), (min((((unsigned long long int) -1LL)), (((/* implicit */unsigned long long int) var_15))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_3 [i_1 - 1] [i_1 - 1]))));
                    var_23 &= ((/* implicit */unsigned long long int) -1135237665);
                    var_24 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (1120490228U))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)10)), (268435456))))));
    }
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249)))))))))));
    var_27 = ((/* implicit */_Bool) var_14);
}
