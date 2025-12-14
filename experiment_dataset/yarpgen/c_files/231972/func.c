/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231972
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (-8533080887117287827LL) : (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) * (14368687240836477587ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_20 = max((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) var_0)), (4078056832873074009ULL))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_3] [i_2] [i_0])) ? (min((((/* implicit */unsigned long long int) (unsigned short)36369)), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) var_17)))))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((14368687240836477587ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) ((unsigned char) var_3)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_18 [(signed char)18] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((((/* implicit */int) (unsigned short)36369)) | (((/* implicit */int) (unsigned char)1))))));
                            var_22 = ((/* implicit */unsigned short) max((861244355U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_6])) || (((/* implicit */_Bool) max((15856943831837719226ULL), (((/* implicit */unsigned long long int) (signed char)127))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((short) var_4));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_5);
}
