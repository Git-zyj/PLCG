/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201094
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
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((max((arr_1 [i_0] [i_3]), (((/* implicit */unsigned long long int) arr_0 [13LL] [i_3])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)5)), (var_1))))))));
                            var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_8 [i_0] [i_1] [21U] [(unsigned short)22])), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)64)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) (signed char)69))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) == ((-(max((var_9), (9555809110900993236ULL)))))));
                        }
                    } 
                } 
                var_19 = arr_3 [i_0];
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((_Bool) (signed char)-75));
}
