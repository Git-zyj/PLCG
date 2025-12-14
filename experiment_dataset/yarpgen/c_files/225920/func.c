/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225920
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_0 + 1])) ? ((-(var_5))) : (min((17181521860594898223ULL), (((/* implicit */unsigned long long int) var_1))))));
                    arr_7 [(short)11] [i_1] [i_1] [i_2 - 1] = ((/* implicit */_Bool) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))))) << (((((/* implicit */int) min((arr_4 [i_0] [7ULL]), (((/* implicit */short) (unsigned char)83))))) - (57)))))));
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_4)), (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_5 [i_1 - 4] [i_1 - 1] [i_1])))))));
                                var_13 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_9))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))));
                                arr_12 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) min((((unsigned int) var_9)), (((unsigned int) max((var_6), (var_6))))));
                                var_14 &= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), (var_9))), (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_2 - 2] [i_3] [i_4])))))));
                                var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4] [i_4 - 1] [i_4] [i_2 - 2] [i_2 - 2] [i_0 + 1])))) ? ((~(arr_1 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_0);
}
