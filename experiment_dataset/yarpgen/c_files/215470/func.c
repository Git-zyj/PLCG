/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215470
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (18446744073709551590ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48))))))))) ? (((/* implicit */int) ((unsigned short) ((var_0) < (var_2))))) : ((-((~(((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((short) (signed char)-106));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((short)31568), (((/* implicit */short) (_Bool)0)))))))) <= ((+(((/* implicit */int) var_10)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2 + 1] [i_3] = ((/* implicit */unsigned int) ((signed char) min((arr_0 [i_1 - 2]), ((signed char)-77))));
                            arr_12 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_0 + 2] [i_0] [i_0])))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 3; i_4 < 22; i_4 += 2) 
                            {
                                var_17 *= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_13 [i_0 + 1] [i_1 - 1] [i_2] [i_2] [i_2 - 1])) | (var_4))) <= (((unsigned long long int) var_12))));
                                var_18 = ((/* implicit */_Bool) (+((+(min((var_3), (((/* implicit */long long int) var_8))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((int) 2147483647))), (var_5)))) ? (((unsigned long long int) (-(arr_9 [i_0] [i_1] [i_0] [i_0] [(short)17])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3450420530941444179ULL))))));
                                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_5)) ^ (2305843008139952128ULL))) / (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1))) : (((/* implicit */unsigned long long int) min((var_2), (var_0))))))));
                            }
                            arr_15 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((max((var_2), (((/* implicit */long long int) (short)16017)))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_3] [i_3] [i_2 - 1] [i_2] [i_2 - 1]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))))));
                        }
                    } 
                } 
                arr_16 [i_0] [(_Bool)1] = ((/* implicit */short) (-(2218763077U)));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 6700773858861947249ULL))));
            }
        } 
    } 
}
