/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221142
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
    var_19 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_3 [i_2 + 4])), (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3080351254037507707LL)) && (((/* implicit */_Bool) 1488129392))))))));
                    arr_8 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))) - (((((unsigned long long int) 18446744073709551603ULL)) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_2])))))))));
                    var_21 = max((max((((/* implicit */unsigned long long int) max((arr_4 [i_1] [i_1]), (arr_4 [i_0] [i_0])))), (var_17))), (max((((/* implicit */unsigned long long int) arr_1 [i_2 - 1])), (((unsigned long long int) 1161714020U)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_11);
    var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(1161714020U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)106)))))))) ? (((((-4315499603608713179LL) + (9223372036854775807LL))) >> (((7650283912983620520ULL) - (7650283912983620496ULL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_7))))))));
    var_24 = ((/* implicit */_Bool) max((max((((4884505222035850196ULL) >> (((10486316252877013265ULL) - (10486316252877013239ULL))))), (((unsigned long long int) var_10)))), (max((max((((/* implicit */unsigned long long int) var_15)), (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))))));
}
