/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28215
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
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) 1442310987);
                            var_14 += ((/* implicit */long long int) var_9);
                            arr_13 [i_0] [i_1] [i_1] [i_3] [(unsigned char)5] [(short)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_8 [i_3] [i_2] [i_1]), (arr_5 [i_0 + 1] [i_0 + 1])))) ? (((unsigned long long int) var_13)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_10 [i_3 + 1] [i_3] [i_2] [(short)5] [i_0]))))) >> (((((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_6 [(_Bool)0] [i_1])))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((arr_9 [i_3 + 1] [i_2] [(short)7] [i_0 - 1] [(short)7]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_2])))))))) + (22)))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */_Bool) max((14009089152547338741ULL), (((/* implicit */unsigned long long int) (short)-14365))))) ? (((((/* implicit */_Bool) 1764431869U)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (signed char)-20)))) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 1])) != (((/* implicit */int) arr_8 [i_0 - 1] [16ULL] [i_0 + 1]))))) : (((/* implicit */int) max((((/* implicit */short) arr_8 [10U] [10U] [(short)16])), (var_5))))))));
                var_16 = ((/* implicit */unsigned short) (~(arr_9 [11] [3LL] [i_0 - 1] [i_1] [i_0 - 1])));
                arr_14 [i_0] [(unsigned short)4] [i_0] |= ((/* implicit */_Bool) ((((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (var_12))) & (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_8))))), (var_12)))) ? (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) var_1))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (signed char)19)) | (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))))))));
    var_18 |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned int) var_10)), (var_2))))));
}
