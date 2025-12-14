/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196813
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
    var_10 = ((/* implicit */int) (((+(((unsigned int) (signed char)-1)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_0])))) ? (min((arr_3 [i_2] [(signed char)3] [i_0]), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((int) arr_1 [i_0])))));
                    arr_9 [i_2] [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((int) var_0)) ^ (((int) arr_0 [i_0] [0LL]))))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (var_0) : (((/* implicit */long long int) 2772590998U)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_1 - 1])), (((((/* implicit */_Bool) arr_0 [i_2 - 1] [8LL])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    var_12 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) ((-249443509) != (((/* implicit */int) (signed char)119))))) != (((/* implicit */int) ((-249443509) != (((/* implicit */int) arr_0 [0U] [0U])))))))) : (((((/* implicit */_Bool) -249443489)) ? (((int) 249443489)) : (((/* implicit */int) (signed char)-26)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned char) (((~((~(15U))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2 + 1] [i_4] [i_4] [i_1 + 1])) * (((((/* implicit */int) (unsigned char)112)) * (((/* implicit */int) var_6)))))))));
                                var_14 = 4294967295U;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
