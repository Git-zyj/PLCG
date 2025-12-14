/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32399
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) var_10))), (var_12)))) ? ((-(1728882029637798045ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1171562685)) : (2983525952U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-32)), ((unsigned short)127)))))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((min((((1311441348U) | (((/* implicit */unsigned int) arr_0 [i_1])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]))))))), (((/* implicit */unsigned int) var_5))));
                    var_16 = ((/* implicit */long long int) max((var_16), (max((((/* implicit */long long int) min(((+(2983525952U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))))), (((((/* implicit */_Bool) -190528019)) ? (-4536152010844015844LL) : (((/* implicit */long long int) (~(2983525946U))))))))));
                    var_17 = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min(((~(var_6))), (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_8)))))));
}
