/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53597
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_14 = max((max((var_9), (((/* implicit */unsigned int) 439953565)))), (((/* implicit */unsigned int) (short)63)));
                            arr_10 [i_0] [i_0] [(short)1] [i_3] [i_1] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((short) 184483329))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52813)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (short)32767))))) : (min((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */short) min((((/* implicit */int) arr_4 [i_0] [i_1])), (min((((((/* implicit */int) arr_7 [i_0] [i_1])) | (((/* implicit */int) arr_9 [i_1] [(unsigned short)4] [i_1] [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) (signed char)-36))))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */short) ((max((var_10), (((/* implicit */unsigned long long int) var_11)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16650))) : (var_11))))))), (((short) arr_0 [i_0])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
