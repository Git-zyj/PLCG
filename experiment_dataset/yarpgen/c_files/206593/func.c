/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206593
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
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0 + 1] [i_0 + 1] [2ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1420099811141369542ULL)) || (((/* implicit */_Bool) (unsigned short)65535))));
                            arr_9 [i_0] = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) 7763287669849349370ULL)) ? (var_6) : (arr_3 [i_0]))) == (((/* implicit */int) (unsigned short)43707)))));
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                            var_15 = ((/* implicit */unsigned short) (~(arr_4 [i_3] [i_1] [i_0])));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((signed char) var_11));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_1) - (var_7)))) ? (((/* implicit */unsigned long long int) ((var_13) ? (1103841525U) : (((/* implicit */unsigned int) 2147483647))))) : (((((/* implicit */_Bool) 6078879908855228790ULL)) ? (11307997115646178619ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))) - ((-(17765125521023823846ULL)))));
}
