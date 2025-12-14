/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249622
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
    var_11 *= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) < (((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)10757))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_0]))) : (arr_12 [i_0] [i_0] [i_1] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_3] [i_3] [i_0] [i_0])), (2087670348665621863LL)))) : ((-(((unsigned long long int) (unsigned char)188))))));
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_13 [i_0] [i_4 - 1] [0ULL] [i_3] [i_4] [i_4]))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3933365874374226917LL)) ? (((/* implicit */int) (unsigned short)3517)) : (((/* implicit */int) (unsigned char)255))))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */long long int) ((unsigned short) ((var_4) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))));
                arr_16 [i_0] [i_1] = ((/* implicit */_Bool) arr_14 [i_0] [i_1]);
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) var_7)) ? (max((var_5), (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (var_5)));
}
