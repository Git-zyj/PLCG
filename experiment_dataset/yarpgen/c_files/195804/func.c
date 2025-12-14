/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195804
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
    var_11 -= ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 = min((((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_3 [i_1 + 1] [i_0 - 2]))))), (((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) arr_5 [i_0 + 1])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_13 -= ((/* implicit */signed char) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((7520729199938693325ULL) - (7520729199938693321ULL)))));
                    var_14 = ((/* implicit */unsigned long long int) arr_2 [i_1 + 1]);
                    var_15 = ((/* implicit */signed char) (unsigned char)47);
                    var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_1 + 1])), (((((/* implicit */int) (unsigned char)62)) / ((-(((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (var_2)));
                                arr_14 [i_3] [i_3] [i_2] [i_1] [i_3] = var_4;
                            }
                        } 
                    } 
                }
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [1] [1] [i_1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)87)) > (((/* implicit */int) (signed char)79))))))))))));
                var_19 -= var_7;
            }
        } 
    } 
}
