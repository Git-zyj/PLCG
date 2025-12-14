/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215412
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
    var_18 = ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_9)))), (max((((var_16) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_3))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (max((((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))), (((/* implicit */int) max((var_17), (var_5)))))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_14)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (72055395014672384LL)))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) var_13))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), (var_5)))) ? (((((/* implicit */int) var_17)) - (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) ((signed char) var_12)))))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_15)) : (4041209979322186613LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (var_7)))))) : (((/* implicit */long long int) ((((/* implicit */int) max((var_17), (((/* implicit */unsigned short) (_Bool)1))))) / (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_4))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) var_9))) && (((/* implicit */_Bool) min((var_1), (((/* implicit */int) (signed char)108))))))) ? (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8)))), (max((var_7), (219129852U))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) >> (((((/* implicit */int) max((var_13), (var_13)))) + (37))))))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((779234366U), (4294967295U)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_16) ? (((var_16) ? (((/* implicit */int) var_2)) : (var_1))) : (((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) -2000342152)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) -706715436)) : (var_14))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_14))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) (unsigned short)8191))) : (max((((/* implicit */int) var_9)), (((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))))));
                var_27 ^= ((/* implicit */unsigned int) ((unsigned char) max((((int) var_5)), (((/* implicit */int) max((((/* implicit */short) var_13)), (var_10)))))));
            }
        } 
    } 
}
