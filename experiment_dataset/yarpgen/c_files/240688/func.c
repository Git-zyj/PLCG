/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240688
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), ((unsigned char)0))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((((/* implicit */_Bool) 4294967290U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 2] [i_0 + 2] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (short)255))))), (min((((((/* implicit */_Bool) (signed char)-72)) ? (var_7) : (((/* implicit */unsigned long long int) -2102629179)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)255)))))))));
                                var_18 = ((/* implicit */_Bool) var_4);
                                arr_13 [i_1] [i_3] [i_2] [i_0] [i_1] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) 2440078574U)), (arr_2 [i_2] [i_4]))) ^ (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_4])) * (((/* implicit */int) var_14)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_2] [i_5] [(short)14] [(short)14] [i_6] = ((/* implicit */unsigned long long int) (((+(max((((/* implicit */int) (unsigned char)225)), (var_3))))) ^ (((/* implicit */int) (_Bool)1))));
                                arr_21 [i_1] [i_1] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */int) var_14)) | (((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0] [18U] [(short)8] [(short)8]))))) ? (((/* implicit */int) var_9)) : ((~(arr_8 [i_2])))))));
                                var_19 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((16646144), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : ((-(9223372036854775807LL)))))) != (arr_2 [i_5] [i_5 + 2])));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) var_13);
                }
            } 
        } 
    } 
}
