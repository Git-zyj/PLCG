/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54043
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((3300930557996943207ULL) != (((/* implicit */unsigned long long int) (-(min((2525484317U), (((/* implicit */unsigned int) arr_0 [i_1])))))))));
                arr_4 [i_0] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) 3149451117U)) > (arr_1 [i_0 - 2]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */long long int) (~(var_4)));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_6 [i_4] [i_4] [i_4 - 1]))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_11 [i_1] [8U] [i_2] [8U] [i_0]) | (((/* implicit */int) (unsigned char)204)))))))), (((int) arr_3 [10ULL] [i_2] [i_4 - 1])))))));
                                arr_12 [i_2] [i_1] = ((/* implicit */long long int) var_4);
                                arr_13 [i_0 + 1] [i_1 + 1] [4LL] [i_2] [i_4] = ((/* implicit */signed char) (-((+(((((/* implicit */unsigned int) -1977641714)) ^ (0U)))))));
                                var_23 = ((/* implicit */unsigned char) max(((~(arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4 + 1] [i_4]))), (arr_9 [i_4] [i_2] [i_1 - 1] [i_0])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_9);
    var_25 = var_9;
}
