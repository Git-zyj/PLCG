/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207085
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
    var_20 = (+(1708132846));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((var_17) & (((/* implicit */long long int) ((/* implicit */int) (short)23567)))))));
                    var_22 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) var_3)))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1203384120))))) : (((int) (-(((/* implicit */int) var_14)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((var_0) >= (((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                                var_25 = ((/* implicit */long long int) max((-1), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 4501400604114944LL)))))));
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) * ((+(((/* implicit */int) (unsigned short)32491)))))))));
                                var_27 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((-1LL) ^ (var_2)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((var_19) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) % ((~(var_8)))));
                }
            } 
        } 
    } 
}
