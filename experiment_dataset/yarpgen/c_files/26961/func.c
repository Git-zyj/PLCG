/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26961
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
    var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-32668)) : (-1203391601)))) ? (var_7) : (((/* implicit */long long int) (~(-1203391605)))))), (((/* implicit */long long int) (~(max((276984707U), (((/* implicit */unsigned int) -33555315)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_3)) / (((-1203391601) / (((/* implicit */int) (unsigned short)5631)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2 - 2] [i_0 + 3] [i_0 - 1] [3ULL])) ? (((/* implicit */unsigned long long int) arr_10 [i_2 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1])) : (((((/* implicit */_Bool) (unsigned short)59895)) ? (13880930937802124768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) 13880930937802124786ULL))) + (((/* implicit */int) ((_Bool) arr_3 [i_0 + 2]))))))));
                            arr_12 [8ULL] [i_2] [i_2] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (unsigned char)46)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 3; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_17 [i_5 + 1] [i_1] [i_5 + 1] [i_0 - 1] [i_4 - 3] [i_6]))));
                                arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((9623296578716761805ULL), (((/* implicit */unsigned long long int) -290091318))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6] [(short)6] [i_4] [i_1] [0])))));
                                arr_24 [i_5 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((arr_17 [i_0 - 1] [i_0 - 1] [i_4 - 3] [i_5] [i_5 - 1] [i_4 - 3]) ? (((/* implicit */int) arr_17 [i_0 + 2] [i_0 + 1] [i_4 - 3] [i_4] [i_5 + 1] [i_4])) : (1842628489))), (((/* implicit */int) ((((/* implicit */_Bool) 2919631398418537711ULL)) && (arr_17 [i_0 - 1] [i_0 + 3] [i_4 - 2] [(_Bool)1] [i_5 - 1] [i_6]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
