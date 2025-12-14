/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25262
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((min((((/* implicit */unsigned char) (_Bool)1)), (var_7))), (((/* implicit */unsigned char) min(((_Bool)1), (arr_2 [i_0] [9U] [i_0]))))))), (((((/* implicit */_Bool) min(((unsigned char)8), (arr_0 [i_0])))) ? (min((arr_5 [i_0]), (((/* implicit */long long int) var_9)))) : (min((arr_6 [i_0] [i_1]), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_1] |= ((/* implicit */signed char) min((min((max((((/* implicit */long long int) 2042834838)), (4166435065278090157LL))), (((/* implicit */long long int) min((arr_12 [i_0] [i_0] [i_0] [i_2] [i_0]), (((/* implicit */int) var_6))))))), (max((((/* implicit */long long int) max((arr_0 [i_2]), ((unsigned char)8)))), (min((((/* implicit */long long int) (unsigned char)8)), (arr_5 [i_4])))))));
                                var_11 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [(_Bool)1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((arr_11 [i_1] [i_0] [i_1] [i_2] [i_1] [i_0] [i_1]), (((/* implicit */unsigned int) var_8)))) : (min((var_3), (((/* implicit */unsigned int) var_7))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [(short)16] [(unsigned char)21] [(unsigned short)9] [i_1] [i_0]), (((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_3 + 2] [i_4])))))) : (min((((/* implicit */long long int) arr_8 [i_4] [i_1] [i_2] [i_0] [i_1] [i_0])), (-5286556088810734332LL)))))));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_3 - 1] [i_3 + 2])), (3681823536413150416LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))) : (min((var_3), (((/* implicit */unsigned int) (unsigned char)7))))));
                                var_13 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)24)), (var_0)))), (min((-9016005928525969630LL), (((/* implicit */long long int) (signed char)4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) 1378336795)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-117)), (var_7)))))), (((/* implicit */unsigned int) min((min((var_8), (((/* implicit */int) var_5)))), (min((var_1), (((/* implicit */int) var_2)))))))));
}
