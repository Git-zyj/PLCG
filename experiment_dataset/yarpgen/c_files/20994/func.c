/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20994
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
    var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) var_1)) : ((((((-(131033737))) + (2147483647))) << (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_17))) - (144U)))))));
    var_20 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [(unsigned char)1] [i_0] [i_3] [(unsigned char)4] [(short)2] [i_3] [i_4 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4 - 2] [i_4] [(signed char)0] [i_4 - 2])) || (((/* implicit */_Bool) ((unsigned char) var_6)))));
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) min(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)0))))))));
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-29404)), (6766177297075014134LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)62)) || ((_Bool)1))) && (((/* implicit */_Bool) var_2)))))));
                                arr_18 [i_1] [i_6] [i_1] [i_0] [i_6] [i_2] = ((/* implicit */int) arr_16 [(short)9] [i_1] [i_2] [i_2] [i_5] [i_6] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
