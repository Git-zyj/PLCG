/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230556
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) + (((((/* implicit */_Bool) (signed char)-107)) ? (var_14) : (((/* implicit */long long int) var_13))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1850734987), (((/* implicit */int) (signed char)106))))) ? (-273208980315695531LL) : (((((/* implicit */long long int) ((/* implicit */int) var_17))) - (var_14)))))) : (min(((+(6585011525479148665ULL))), (((/* implicit */unsigned long long int) var_4))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)249)), (33554431U)));
                            var_19 = ((/* implicit */int) min((((min((((/* implicit */unsigned long long int) var_16)), (var_10))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12791))) : (var_12)))))), (((/* implicit */unsigned long long int) var_13))));
                            var_20 = ((/* implicit */signed char) var_8);
                            arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)102))) & (var_4))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11698)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                            arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [10] [i_2] [i_3])) ? (((/* implicit */long long int) var_15)) : (min((var_12), (17732923532771328LL))))), (((/* implicit */long long int) (~(((unsigned int) (short)12805)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) (-((~(((2786842232U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
}
