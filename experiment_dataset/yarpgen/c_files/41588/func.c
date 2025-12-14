/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41588
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((min((var_5), (var_4))), (min((var_10), (((/* implicit */long long int) var_2))))))) % (min((((/* implicit */unsigned long long int) ((unsigned char) var_7))), (((((/* implicit */unsigned long long int) (-2147483647 - 1))) % (12253954933796608771ULL))))))))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((+(var_10))), (min((var_5), (var_10)))))), (var_8))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)7404), (((/* implicit */unsigned short) (_Bool)1)))))))))));
                                var_14 = var_7;
                                var_15 = (~(((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_2)), (var_7))))));
                                arr_12 [(_Bool)1] [i_0] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) ((int) ((var_7) < (var_7))))), (min((min((var_5), (var_5))), ((~(var_4)))))));
                                var_16 = ((unsigned int) var_10);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) max((min((min((var_8), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2459942928U)) || (((/* implicit */_Bool) (unsigned short)54577))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_2)))), (((var_10) / (((/* implicit */long long int) var_0)))))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((min((((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_3))))), (min((((/* implicit */long long int) var_9)), (var_6))))) == (var_7))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((var_5) + (var_7))), (var_10)))) < (min((min((var_8), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) % (var_6))))))));
    var_20 = ((/* implicit */_Bool) ((-745561693730247900LL) | (-6502575606024021389LL)));
    var_21 = ((/* implicit */unsigned long long int) (~((+(max((((/* implicit */unsigned int) var_9)), (var_0)))))));
}
