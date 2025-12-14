/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240856
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
    var_12 -= ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) max(((short)-1), ((short)0))))))), (max((((/* implicit */long long int) min((((/* implicit */signed char) var_5)), (var_7)))), (max((((/* implicit */long long int) var_5)), (8148860318944305523LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) (-(max(((-(((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_0 - 1]))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */long long int) max(((~(((/* implicit */int) var_7)))), ((~(((/* implicit */int) arr_5 [i_0] [8]))))))), (min((max((((/* implicit */long long int) arr_1 [i_0] [i_1])), (var_4))), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_1])), (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))))))))));
                            var_15 = max((max((((/* implicit */long long int) max((-1956022335), (((/* implicit */int) (unsigned short)42666))))), ((~(-2214822262423271608LL))))), ((-((+(-5418578470768536729LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned short)65535)), (var_1))), (min((((/* implicit */int) (_Bool)1)), (var_1)))))), (max((min((4677419075080589326ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) var_9)))))))));
    var_17 = ((/* implicit */unsigned short) max(((-(max((((/* implicit */unsigned long long int) var_11)), (var_8))))), (((/* implicit */unsigned long long int) (+((~(var_9))))))));
}
