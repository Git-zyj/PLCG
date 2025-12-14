/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19605
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1 + 3] [i_0] = max((((/* implicit */long long int) ((-608877945) | (608877946)))), (5365395671555086999LL));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((max((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2])))), (((/* implicit */unsigned long long int) min((arr_9 [i_1] [i_3]), (((/* implicit */int) var_16))))))), (min((arr_4 [i_1 - 1] [i_0 - 1]), (arr_8 [i_0 + 1] [i_1 - 2] [4] [i_1 - 2])))));
                            var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) (~(arr_0 [i_2])))) >= (min((((/* implicit */unsigned int) var_17)), (arr_7 [i_3] [(signed char)0] [i_3]))))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_14))));
}
