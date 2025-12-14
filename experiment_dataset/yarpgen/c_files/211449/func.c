/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211449
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
    var_13 += ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] [9] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_8 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [0] [i_2]), (arr_8 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3])))), ((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (signed char)-43)))) : (((/* implicit */int) (signed char)42))))));
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_12))));
                            var_15 = ((/* implicit */_Bool) min((((long long int) (~(((/* implicit */int) (unsigned short)28208))))), (((/* implicit */long long int) var_4))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0])))))), (min((((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1917)))))), ((~(((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-56)) != (((/* implicit */int) (unsigned char)141)))))) < (var_5)));
    var_18 = ((/* implicit */int) var_4);
}
