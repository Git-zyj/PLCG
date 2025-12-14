/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54543
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
    var_16 = ((/* implicit */unsigned short) ((((((int) min((var_4), (var_2)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) / (((/* implicit */int) var_13))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */signed char) ((short) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4294967295U))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_2] = var_3;
                                var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) ((unsigned short) var_13))) <= (((/* implicit */int) (unsigned char)89)))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29148))) : (14336337770263992630ULL)))))) ? (var_9) : (((min((((/* implicit */unsigned long long int) var_13)), (arr_0 [i_0] [i_1]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2] [i_2 + 1])) + (((/* implicit */int) (unsigned char)181))))))))))));
                                var_19 = (((((+((~(((/* implicit */int) var_12)))))) + (2147483647))) << (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_2 - 2])))))) : ((+(var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (+((+(((319891125U) << (((var_2) - (16957056758909209748ULL)))))))));
}
