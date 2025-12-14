/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236804
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_16)))) ? (((/* implicit */int) max((arr_10 [i_4] [1] [i_2] [i_1] [1]), (arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_10))))));
                                var_19 = ((/* implicit */long long int) min((var_19), ((-(8007297953143201828LL)))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 8007297953143201828LL)), (((((/* implicit */_Bool) (~(var_3)))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_11 [(unsigned short)6] [i_3 + 1] [i_3] [i_2] [i_1])))))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_15))) - (((((arr_8 [i_0]) + (arr_11 [i_0] [i_1] [i_2] [i_1] [i_1]))) - (((/* implicit */int) (short)-6142))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) -8007297953143201804LL);
                arr_14 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) max((min((var_1), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_1] [i_0])), (var_15)))))), (min((((((var_1) + (9223372036854775807LL))) << (((((arr_2 [i_0] [i_0] [i_0]) + (5507571819634658805LL))) - (45LL))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (arr_9 [i_1] [i_0] [i_0] [i_0])))))))) : (((/* implicit */unsigned char) max((min((var_1), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_1] [i_0])), (var_15)))))), (min((((((var_1) + (9223372036854775807LL))) << (((((((((arr_2 [i_0] [i_0] [i_0]) + (5507571819634658805LL))) - (45LL))) + (3144006736623180350LL))) - (49LL))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (arr_9 [i_1] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((9223372036854775807LL) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)20)) % (((/* implicit */int) (unsigned char)24))))))))))));
    var_24 -= ((min((max((var_14), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((unsigned char) var_14))))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_17))))))));
    var_25 = ((/* implicit */unsigned short) ((max((var_5), (((/* implicit */unsigned long long int) var_17)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) != (2944199213813895619LL)))) >= (((((/* implicit */int) var_9)) + (((/* implicit */int) var_0))))))))));
    var_26 = ((/* implicit */unsigned char) (((~(min((-2944199213813895618LL), (var_14))))) << (((max((((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (var_13)))))) - (1263243171U)))));
}
