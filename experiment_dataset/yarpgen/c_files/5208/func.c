/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5208
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (short)-8983)) : (((/* implicit */int) (signed char)-67)))), ((+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)17921)) < (((/* implicit */int) (signed char)-67))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 ^= (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [(_Bool)1] [(_Bool)1] [0ULL])), (var_12)))) ? (((/* implicit */unsigned long long int) var_7)) : (var_8))));
                    arr_10 [i_0] [i_0] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0])) >> (((var_7) - (2564077343804904888LL)))));
                    var_19 = var_5;
                }
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_20 = (+(max((((unsigned long long int) (unsigned short)46582)), (((/* implicit */unsigned long long int) (signed char)65)))));
                                var_21 ^= max((min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25214))))), ((+(((/* implicit */int) arr_2 [(_Bool)1])))))), (((/* implicit */int) arr_4 [i_0] [i_0] [(short)14])));
                                arr_19 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)191)))), ((-(((/* implicit */int) arr_16 [i_3] [i_4 - 1] [i_5] [i_4 - 1] [(unsigned char)8] [0U]))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [(unsigned char)11] [i_0] [i_0] = ((/* implicit */unsigned long long int) 2147483647);
                }
            }
        } 
    } 
}
