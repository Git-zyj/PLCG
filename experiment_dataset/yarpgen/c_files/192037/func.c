/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192037
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
    var_16 = ((/* implicit */signed char) var_0);
    var_17 = ((/* implicit */long long int) ((min((((var_7) ? (var_12) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 242606310U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30462)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_13))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] [i_1 - 1])) ? (((/* implicit */int) arr_15 [i_2] [i_1 - 1] [i_2] [i_3] [i_4 + 1] [i_2])) : (((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] [i_0])))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-2431)) ? (0ULL) : (var_14))) > (min((var_14), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_1] [i_2] [i_4] [(signed char)3] [2ULL] [i_0])))))))));
                                arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 2])) || (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) min((arr_6 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 1]), (arr_6 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4]))))));
                                var_19 = ((/* implicit */_Bool) max((min((max((arr_11 [i_0] [i_0] [i_2] [i_3]), (((/* implicit */long long int) arr_3 [i_0] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))), (((/* implicit */long long int) var_2))));
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_12 [i_1 - 1] [i_1 - 1] [i_0] [i_1] [i_1 - 1]), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))))))) || (((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [i_0] [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_13)))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195))))))));
}
