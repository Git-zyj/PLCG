/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23604
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
    var_15 |= ((/* implicit */signed char) ((var_10) ? (((/* implicit */unsigned long long int) max((((unsigned int) (signed char)42)), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (max((var_3), (((/* implicit */unsigned long long int) var_10))))))));
    var_16 ^= ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = 5867957682826959399ULL;
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((var_10) ? (((/* implicit */int) arr_5 [i_0] [(unsigned char)2] [i_1 - 3])) : (((/* implicit */int) (unsigned short)44216)))), (((((((/* implicit */int) var_12)) + (2147483647))) >> (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)44216))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_0))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) arr_7 [i_0] [i_1] [(unsigned char)1] [(unsigned char)1]);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)195), (((/* implicit */unsigned char) arr_5 [i_1 - 3] [i_1 - 3] [i_1 - 1]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_5 [i_1 - 3] [i_1 - 1] [i_1 + 1]))))));
                        }
                    } 
                } 
                var_20 = ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)57))))) / (var_6)));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_11))));
}
