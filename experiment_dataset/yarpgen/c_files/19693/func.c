/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19693
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned char) max((var_10), (arr_8 [i_0 - 1] [i_0 + 1] [i_1] [i_0 + 1] [i_3])));
                            var_11 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((unsigned int) arr_6 [i_0])) : (((unsigned int) (signed char)-74))))));
                        }
                    } 
                } 
                var_12 |= ((/* implicit */short) (-((~(((/* implicit */int) (signed char)-83))))));
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1])) & (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [8U]))))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_0] [i_0] [i_0 - 2]))) ? (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_1] [i_0 - 1]) >= (var_6)))) : (((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)-83))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (short i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        var_16 ^= ((/* implicit */signed char) arr_4 [i_4] [i_4] [i_4]);
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((min((((/* implicit */short) arr_10 [i_4 + 2] [i_4 + 2] [i_4 - 1])), ((short)20261))), (((/* implicit */short) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned char)168))))))))));
    }
}
