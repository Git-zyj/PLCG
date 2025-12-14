/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205063
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
                    var_18 = min((((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [(short)0])), (arr_9 [i_2]))) <= (((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_1]))))))), (((((long long int) var_6)) | (((/* implicit */long long int) ((/* implicit */int) ((short) -7852225730178871711LL)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((7137789360837907744ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11466)))));
                                var_20 = min((arr_8 [i_0] [i_0] [i_2] [i_3]), (((/* implicit */unsigned char) ((signed char) min((((/* implicit */long long int) (unsigned short)11766)), (-7852225730178871701LL))))));
                                arr_15 [i_4] [i_4] [i_4] |= ((/* implicit */short) min(((~(((13622209860878383315ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8878))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_0 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_21 ^= ((/* implicit */long long int) var_12);
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) + (((/* implicit */int) (short)9386))))) && ((!(((/* implicit */_Bool) var_11)))))))) : (((unsigned int) 7852225730178871710LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) 7852225730178871710LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (7852225730178871694LL))))), (((/* implicit */long long int) var_10))));
}
