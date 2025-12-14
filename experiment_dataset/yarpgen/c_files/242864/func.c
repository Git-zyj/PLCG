/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242864
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (unsigned short)16)))));
                arr_7 [i_0] [(unsigned char)9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_0 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))) && (((/* implicit */_Bool) -1730012110))));
                var_12 = ((/* implicit */signed char) arr_3 [i_0 - 2]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_25 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1730012109)) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_5 + 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [i_2 - 1] [i_2 + 1])))) != (min((((/* implicit */int) ((arr_0 [i_6] [i_6]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (-1730012091)))));
                                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((long long int) -237681175)), (((/* implicit */long long int) ((signed char) var_3))))))));
                            }
                        } 
                    } 
                } 
                arr_26 [i_2] [i_3] = ((((/* implicit */int) arr_22 [i_2 - 1])) / ((-(350790736))));
                var_14 = ((/* implicit */_Bool) arr_11 [i_2]);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_0);
    var_16 = ((/* implicit */unsigned char) var_4);
}
