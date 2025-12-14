/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46498
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
    for (int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((/* implicit */unsigned long long int) var_3)), ((~(((((/* implicit */unsigned long long int) var_5)) + (7731980796986451928ULL))))))))));
                    var_14 = ((/* implicit */unsigned int) ((arr_6 [i_2]) == (((/* implicit */long long int) (~(((133739979U) % (((/* implicit */unsigned int) -1698808018)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) 12ULL);
                                var_15 *= ((((((int) arr_3 [i_3])) & (((/* implicit */int) arr_1 [i_3])))) / (-2147483618));
                                arr_16 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((~(arr_0 [i_0 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */long long int) var_3)) / (var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1698807994))))))), (max((var_12), (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_7)))))))));
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
    var_18 = ((/* implicit */unsigned short) var_3);
}
