/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54885
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_17))));
    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) ((unsigned short) ((long long int) (signed char)-32)))) << (((/* implicit */int) (((-(11440221872640345631ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_16)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (signed char)18)) >= (var_3)))), (var_3)))) ? ((-(var_18))) : (((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (unsigned char)128))));
                    var_22 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((unsigned int) 768709033U))), (var_14))) + (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
                    var_23 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -5533794369930693630LL)) <= (var_12)))) >= ((-(var_7)))))) >= (max((((int) var_11)), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)7)))))));
                    var_24 += ((/* implicit */signed char) ((unsigned short) ((-4) >= (((/* implicit */int) (unsigned short)65535)))));
                }
            } 
        } 
    } 
}
