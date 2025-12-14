/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/421
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
    var_15 ^= ((/* implicit */long long int) min((var_2), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_13))))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_10))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((signed char) var_2)))));
                var_18 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) arr_2 [i_0] [i_1]))), (arr_0 [i_0])));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */int) (_Bool)1);
                                arr_13 [i_1] = ((/* implicit */signed char) max((-8), (((/* implicit */int) (signed char)-127))));
                                var_20 = ((/* implicit */long long int) (short)-25315);
                                arr_14 [i_0] [i_0] [i_2] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((short) arr_4 [i_2] [i_1]));
                            }
                        } 
                    } 
                } 
                var_21 += ((/* implicit */long long int) ((short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59413))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned short i_7 = 4; i_7 < 18; i_7 += 2) 
            {
                {
                    arr_22 [i_5] [i_6] [i_7 - 1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 - 1] [i_6] [i_5 - 1] [i_7 - 2]))) : (max((arr_17 [i_5] [i_5]), (((/* implicit */unsigned int) ((short) arr_15 [i_6])))))));
                    arr_23 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) min((arr_18 [i_7] [i_6] [i_5]), (arr_18 [i_5] [4LL] [i_5]))))))) : (arr_17 [i_7] [(unsigned short)20])));
                }
            } 
        } 
    } 
}
