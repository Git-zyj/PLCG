/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199839
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_12)))));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(296641101)))), (((unsigned long long int) ((unsigned char) (signed char)-69))))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) ? (max((var_2), (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) ((int) var_7))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_7))))) ? (((var_0) ? (var_3) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))));
                var_19 = ((/* implicit */int) ((short) min((((short) 33553920U)), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (var_3)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((signed char) (~(((int) (unsigned char)11)))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((unsigned char) (~(((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_6)))))));
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_10)))) ? (var_14) : (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_15)) : (var_10)))))))));
                            }
                        } 
                    } 
                } 
                var_23 ^= ((/* implicit */_Bool) (~(((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))))));
                arr_20 [i_2] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_14)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (var_10))) : ((~(var_10))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) (!(((_Bool) max((((/* implicit */long long int) var_2)), (var_3))))));
}
