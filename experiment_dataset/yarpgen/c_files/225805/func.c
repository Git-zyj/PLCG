/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225805
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
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) - (14331562017981183635ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (-((+(133955584)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)0)))) - (((((/* implicit */int) (unsigned short)55539)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3] [i_4 - 1])) && (((/* implicit */_Bool) (unsigned short)47229))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)97)))))));
                                var_17 = ((/* implicit */unsigned short) (((~(arr_10 [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_4 + 2] [i_4] [i_4]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16383)) && (((/* implicit */_Bool) (unsigned short)4))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [(unsigned short)22] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47232))))) <= (((/* implicit */int) arr_2 [i_0])))) && (((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) var_9))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_0)))))))));
                arr_15 [i_0] = ((/* implicit */signed char) (+(((arr_10 [(unsigned short)19] [i_0] [i_0] [i_0] [(signed char)18] [i_1]) + (((/* implicit */unsigned int) 1816755069))))));
            }
        } 
    } 
}
