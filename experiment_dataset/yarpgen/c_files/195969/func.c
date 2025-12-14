/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195969
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
    var_11 += var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [1] [i_2] [i_2 + 2] [(signed char)1] [i_0] = ((/* implicit */int) min((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15229))) : (var_3))), (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_1] [i_0]))))))), (((/* implicit */unsigned long long int) min((arr_4 [i_2 + 2] [i_1 - 1]), (arr_4 [i_2 + 2] [i_1 - 2]))))));
                            var_12 = ((/* implicit */int) (short)27792);
                            var_13 -= ((/* implicit */unsigned short) (short)-24340);
                            arr_11 [i_0] [i_0] [i_1 + 2] [i_1 + 2] [i_2 + 1] [i_3] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_2)) ? (var_3) : (var_7))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-15229)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))), (min((((/* implicit */unsigned long long int) (short)15229)), (8222863618660842656ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 4) 
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned char) (_Bool)1))))))))));
                    arr_15 [i_0] [i_1 + 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)15229)), (3361987712573481127ULL)))) || (((/* implicit */_Bool) ((0U) >> ((((+(((/* implicit */int) var_10)))) - (3557))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / ((+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 8222863618660842661ULL)))))))));
                    arr_19 [5ULL] [i_5] [(signed char)2] [(signed char)2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_7) - (3361987712573481134ULL))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_3)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_10)))))))));
                    arr_20 [i_5] [i_5] [i_0] [i_0] = min((arr_4 [i_5] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) <= (var_7)))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_3);
}
