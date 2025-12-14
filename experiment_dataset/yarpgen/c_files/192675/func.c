/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192675
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
    var_10 = (signed char)94;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((unsigned long long int) ((unsigned int) var_0))) + (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)14003)) ^ (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) max((var_4), ((signed char)76)))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) min((var_12), ((signed char)94)));
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_4] [15U] = ((/* implicit */signed char) (unsigned short)51503);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_2)), (var_6))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (_Bool)0)))))))) & ((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)86))) ^ (var_8)))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) max((var_4), (((/* implicit */signed char) var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((max((var_8), (((/* implicit */long long int) -1079049883)))) - (((/* implicit */long long int) ((/* implicit */int) ((short) 2479160683U)))))), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) + (2147483647))) <= (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (short)(-32767 - 1)))))))))))));
                var_16 = ((/* implicit */_Bool) 3995301475630696428ULL);
                arr_16 [i_5] = (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) -8192990693235085218LL)))) <= (((var_8) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))))));
                arr_17 [i_5] [i_5] = ((/* implicit */unsigned short) ((max((15553112717257357603ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5469))))))) >> (((((67108864U) >> (((/* implicit */int) (_Bool)1)))) - (33554426U)))));
            }
        } 
    } 
}
