/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36124
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) var_15);
                var_20 = ((/* implicit */long long int) min((var_20), (min((((((/* implicit */_Bool) (unsigned short)38813)) ? (var_9) : (((/* implicit */long long int) -1)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_16)) : (34359214080LL)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1894017327U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (12489726321123299657ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294907816841428560ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))))) : (((/* implicit */unsigned long long int) ((-34359214080LL) | (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) var_15))))))))));
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) var_3);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 0)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))) * (((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) var_0)) : (-80352808))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-96))) ? (((/* implicit */int) ((unsigned char) 34359214080LL))) : (var_15))));
    var_24 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (max((var_12), (((/* implicit */unsigned long long int) 34359214080LL)))) : (((/* implicit */unsigned long long int) var_16)))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (short)-21135))))) ? (((var_8) ? (((((/* implicit */_Bool) 1266040299648171980ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (var_6))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (_Bool)1)) : (var_15))) << (((((/* implicit */int) min(((unsigned short)45627), ((unsigned short)256)))) - (253))))))));
}
