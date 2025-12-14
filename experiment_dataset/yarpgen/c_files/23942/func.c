/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23942
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) | ((~(((/* implicit */int) (unsigned short)57770))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) max(((~((~(var_4))))), (((/* implicit */long long int) (+(arr_3 [i_0] [i_0]))))));
                var_13 -= ((/* implicit */long long int) (+((~(((/* implicit */int) arr_1 [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
                                var_15 = ((/* implicit */unsigned char) arr_0 [i_0]);
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_5))));
                                var_17 = var_0;
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~((+(((/* implicit */int) arr_11 [(unsigned char)2] [i_0] [(signed char)11] [i_0] [i_0])))))))));
                                arr_13 [i_0] [i_3] [1] [i_2] [4LL] [i_0] = var_6;
                            }
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((var_4) <= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)21))))))))));
                                var_20 = ((/* implicit */long long int) 10ULL);
                            }
                            var_21 = ((/* implicit */unsigned char) (+(min((arr_7 [9] [i_0 + 1] [9] [i_3]), (((/* implicit */int) (signed char)98))))));
                        }
                    } 
                } 
                arr_17 [i_0] = (short)-3240;
            }
        } 
    } 
}
