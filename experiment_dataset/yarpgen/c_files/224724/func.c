/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224724
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
    var_14 = ((/* implicit */short) min((((((/* implicit */int) var_4)) + (((/* implicit */int) var_2)))), ((-(((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)108)) < (((/* implicit */int) max(((signed char)-127), (((/* implicit */signed char) (_Bool)0)))))));
                arr_4 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_5] [i_5] [i_2] [(short)7] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned short)63049))) ? (((/* implicit */int) arr_2 [i_2] [i_3] [i_4])) : (((/* implicit */int) ((_Bool) (unsigned short)63032)))));
                                arr_20 [(unsigned short)9] [i_2] [i_4] [i_4] [i_4] [(unsigned char)7] [i_4] = ((/* implicit */signed char) 8536610783041854287LL);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_3 [i_2] [i_3] [i_4])))), (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
}
