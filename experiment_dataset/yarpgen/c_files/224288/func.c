/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224288
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (max((max((min((1ULL), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (short)30549))))))), (((/* implicit */unsigned long long int) min((((-1939696136) % (((/* implicit */int) (signed char)-53)))), (((/* implicit */int) min(((short)30525), (((/* implicit */short) var_8))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)167))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (!(min(((!(((/* implicit */_Bool) arr_3 [12] [(short)12] [i_2])))), (((((/* implicit */_Bool) arr_9 [(signed char)11] [17] [(signed char)11] [i_3])) && (((/* implicit */_Bool) var_0)))))))))));
                                var_14 = ((/* implicit */unsigned char) (-((+(max((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]), (11609209773093257402ULL)))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = min(((-(min((((/* implicit */unsigned long long int) arr_6 [i_1])), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_6 [i_0]))))) - ((-(((/* implicit */int) arr_6 [i_0]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((max((((-1939696134) ^ (((/* implicit */int) var_0)))), (((/* implicit */int) min((var_5), ((signed char)-70)))))) != (min(((+(1939696136))), (((((/* implicit */int) var_3)) | (-1566409480))))))))));
}
