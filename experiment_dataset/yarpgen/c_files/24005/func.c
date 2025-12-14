/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24005
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 4294836224U))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) | (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) >> (((min((var_5), (((/* implicit */long long int) var_11)))) - (31384LL))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)16444))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_1 [i_1 - 1])) | (((/* implicit */int) arr_1 [i_1 - 2])))));
            arr_6 [(short)3] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)62)) >> (((((/* implicit */int) min(((unsigned char)102), ((unsigned char)40)))) - (9)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? ((~(var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_8 [i_2] [i_1 - 1] [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_14 [9] [i_1 - 2] [i_2] [i_3 - 1] [i_3 + 1] [i_4] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_3 + 2] [i_3] [i_4] [i_4]))));
                            arr_15 [i_1] [i_2] [i_3 + 2] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [(unsigned short)1] [i_3 - 1] [i_3 - 1] [4ULL] [i_3 + 1]))));
                        }
                    } 
                } 
            }
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((long long int) (-(-627718665)))))));
        }
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
    }
}
