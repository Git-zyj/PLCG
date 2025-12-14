/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196446
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
    var_16 = ((/* implicit */_Bool) var_11);
    var_17 ^= ((/* implicit */short) (-(min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 9918268194837547918ULL)) ? (((/* implicit */int) var_3)) : (-2032194075)))))));
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)20744))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) 9918268194837547918ULL)) ? (((/* implicit */unsigned long long int) 2046244293)) : (9918268194837547918ULL)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) max((4008967891945573439ULL), (((/* implicit */unsigned long long int) -2032194075))));
                var_20 = (((+(((/* implicit */int) (short)-1600)))) | (((int) arr_5 [i_0] [i_1])));
                var_21 &= ((/* implicit */short) ((((/* implicit */int) ((signed char) max((var_12), (222973517))))) != (((/* implicit */int) min(((short)18957), (((short) var_1)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_6)))))))) <= (((/* implicit */int) (unsigned char)193))));
}
