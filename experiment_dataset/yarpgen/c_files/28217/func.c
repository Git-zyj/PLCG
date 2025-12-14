/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28217
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) - (74)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((unsigned long long int) var_14));
                            var_17 -= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3837194766059021343LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) <= (max((((/* implicit */unsigned long long int) arr_4 [(_Bool)0] [(_Bool)0] [i_3])), (8562082531878425599ULL))))));
                            arr_11 [i_0] [4] [i_1] [4] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_6 [i_2 + 1] [10LL] [10LL]), ((short)3530))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) var_14)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)13897)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) ? (((/* implicit */int) ((458752U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32763)))))) : (((/* implicit */int) var_5))));
}
