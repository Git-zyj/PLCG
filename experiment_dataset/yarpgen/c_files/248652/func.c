/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248652
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((var_11) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2576395306634630006ULL)) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10858)))))) ? (((int) var_3)) : (((/* implicit */int) var_12))))));
                    var_21 = ((/* implicit */int) var_11);
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((((/* implicit */short) var_17)), (var_12))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10858)) ? (((/* implicit */int) (short)10858)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) max(((short)-10858), (var_2)))))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-10866))))));
                    arr_9 [i_0] [(signed char)2] [i_0] [i_2] = ((/* implicit */_Bool) ((0) | (((/* implicit */int) (short)12254))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((_Bool) var_6)), (var_14)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (var_3)))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16))))))));
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_18)))))));
    var_25 = ((unsigned char) ((unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_6)))));
    var_26 = ((/* implicit */long long int) var_9);
}
