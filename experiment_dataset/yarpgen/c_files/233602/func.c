/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233602
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            arr_8 [i_2] [i_3] [i_0] [i_3] [i_2] = ((/* implicit */unsigned short) -5672909235396444144LL);
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) max((arr_6 [(unsigned short)4] [i_0] [7LL] [i_0] [i_2] [i_0]), (((/* implicit */long long int) (unsigned short)65520)))))) ? (max((8198125762542847597LL), (((/* implicit */long long int) ((unsigned short) (unsigned short)65527))))) : (((/* implicit */long long int) ((int) ((long long int) arr_3 [i_0]))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (+(arr_4 [0U])));
                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)47441))))) % (max((arr_5 [i_0] [i_0] [i_0]), (max((9223372036854775794LL), (((/* implicit */long long int) (unsigned short)14946))))))));
                var_22 = ((/* implicit */long long int) max((max((((/* implicit */int) var_10)), (var_9))), (max((((/* implicit */int) var_1)), (arr_3 [i_0])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((max((var_0), (((/* implicit */unsigned int) var_3)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_24 = ((/* implicit */long long int) ((((min((((/* implicit */int) var_11)), ((+(-2036779364))))) + (2147483647))) >> (((((/* implicit */int) var_4)) - (1145)))));
    var_25 = ((/* implicit */long long int) min((min((min((var_18), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (+(var_7)))))), (((/* implicit */unsigned int) (+(max((var_19), (((/* implicit */int) (unsigned short)65514)))))))));
}
