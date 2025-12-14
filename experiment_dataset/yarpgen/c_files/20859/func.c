/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20859
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
    var_12 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) != (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((unsigned int) arr_1 [i_0]))))) ? (((/* implicit */int) ((_Bool) (~(arr_5 [i_0] [i_1] [i_1]))))) : (((/* implicit */int) (unsigned char)224))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [5] [i_3 - 1] [i_2] [i_4] = -1104796276;
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_0]), (((/* implicit */unsigned short) arr_13 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_4]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_3 + 1]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (5882285989228131600ULL)))))));
                                arr_16 [(unsigned short)4] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) max((var_10), (((/* implicit */signed char) arr_6 [i_4]))))))));
                                var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) min((((/* implicit */int) arr_8 [i_4] [i_2] [i_2] [i_2] [9U])), (arr_4 [i_2] [(short)3])))));
                                var_15 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_3 - 1] [i_2] [i_4 + 1])) / (((/* implicit */int) arr_12 [i_0] [0] [3U] [(unsigned short)2] [i_3 + 1] [i_0] [i_4 + 1])))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */int) min((((unsigned long long int) ((6921238525785194464ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))))), (((/* implicit */unsigned long long int) var_5))));
            }
        } 
    } 
}
