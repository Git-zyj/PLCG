/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205742
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
    var_14 -= ((/* implicit */unsigned short) max((var_1), (var_3)));
    var_15 = ((max((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (var_1))))) >> (((/* implicit */int) var_13)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 &= ((/* implicit */long long int) arr_2 [i_0]);
                var_17 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)102)), ((unsigned short)22395)));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */signed char) 315544240U);
                                var_18 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)14]))))) + (((var_4) + (((/* implicit */unsigned long long int) ((arr_0 [(unsigned short)18]) - (arr_0 [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_12);
}
