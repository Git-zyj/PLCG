/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213833
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)112))))), (((((/* implicit */_Bool) (unsigned short)56)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (var_1))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)65479)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2 - 1] [i_1] [i_4] = ((/* implicit */_Bool) var_13);
                                arr_14 [i_0] [i_0] [(short)8] [i_0] [i_0] [12] [i_0] &= ((/* implicit */signed char) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_19 [i_1] [i_6] = ((/* implicit */unsigned int) arr_15 [i_0] [i_2 - 1]);
                                var_16 = ((/* implicit */long long int) (~(((((_Bool) (signed char)70)) ? (1059974852U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                arr_20 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), (arr_17 [(signed char)2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */signed char) var_6);
    var_18 = ((/* implicit */_Bool) (unsigned char)112);
}
