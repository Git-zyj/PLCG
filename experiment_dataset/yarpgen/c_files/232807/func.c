/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232807
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
    var_19 ^= ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-7764588387132303343LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) >= (var_2))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_3] [i_2] = ((/* implicit */long long int) max((var_17), (((/* implicit */unsigned int) var_9))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) arr_0 [i_1]);
                            }
                        } 
                    } 
                    arr_16 [5ULL] [i_2] [i_2] = ((/* implicit */unsigned short) (-(var_13)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_0])), (arr_6 [i_5])))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) ((unsigned char) 3121590658U)))))));
                                arr_22 [i_6] [i_5] [i_2] [i_5] [i_6 - 1] = ((/* implicit */_Bool) min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_3))))), (((/* implicit */unsigned long long int) ((var_0) <= (((((/* implicit */_Bool) var_1)) ? (7764588387132303337LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0 + 1]))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((max((var_2), (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))), ((~(((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_15)))) < (var_2))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
}
