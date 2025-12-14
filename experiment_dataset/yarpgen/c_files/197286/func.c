/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197286
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
    var_14 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_0 [i_1 + 1])))));
                arr_5 [i_1 + 3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (~(2226724607237794366ULL)))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_1 - 1]))), (((unsigned long long int) arr_7 [i_1 - 1]))));
                    var_16 = ((/* implicit */unsigned int) (signed char)118);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        arr_10 [i_1 + 4] [i_3 + 1] = (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1626)) || ((_Bool)0)))))));
                        var_17 = ((/* implicit */int) (signed char)80);
                        arr_11 [i_0] [i_2] = ((/* implicit */_Bool) ((long long int) min((4294967276U), (((/* implicit */unsigned int) arr_8 [i_1 + 4] [i_1 + 4] [i_2] [i_3 - 1])))));
                        var_18 *= arr_3 [i_0];
                    }
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (arr_1 [i_1 + 4])))) ? ((-(arr_6 [i_2] [i_2] [i_1 + 3] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_2] [i_2] [i_1 + 2] [i_0])), ((signed char)90))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    arr_14 [i_0] [i_1 - 1] [i_4] = ((/* implicit */unsigned int) (signed char)83);
                    var_21 |= max((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_4])) : (arr_13 [i_4] [i_1 + 3]))));
                    var_22 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) 9525349176769972128ULL)) ? (((/* implicit */unsigned long long int) arr_6 [i_4] [13U] [i_1 + 4] [i_0])) : (var_0))), (((unsigned long long int) 8921394896939579488ULL))))));
                }
                arr_15 [i_0] [i_0] [i_1 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)84)) | (((/* implicit */int) (signed char)92))));
            }
        } 
    } 
}
