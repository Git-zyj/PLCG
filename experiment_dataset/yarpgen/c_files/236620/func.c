/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236620
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_1 - 1]);
                            var_11 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((long long int) 615916261U))) ? (arr_0 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) var_2))))));
                            var_12 = ((/* implicit */long long int) (-(((int) arr_1 [i_0] [i_0]))));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15824))) : (arr_8 [i_3] [i_2] [i_1 - 1] [i_1 - 1] [i_0] [i_0]))) == (((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_0] [i_0]) + (1485392250U)))))))));
                            var_14 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 69492064U)) ? (((arr_6 [i_0] [i_0] [i_0] [i_1 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-15824))))) : (((unsigned int) (unsigned char)240)))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_1 + 1] = ((/* implicit */short) var_7);
                arr_11 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (var_8))))));
                arr_12 [i_0] = ((/* implicit */short) arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                var_15 |= ((/* implicit */int) min((min(((~(8536648534824133338ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 + 1])) ? (arr_0 [i_0] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) (short)-15825))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (22547539U) : (var_8))), ((((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15835)) << (((var_10) - (1308519464U)))))) & (((((/* implicit */_Bool) (short)15792)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) : (18446744073709551615ULL)))))));
    var_17 = ((/* implicit */_Bool) 896U);
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned char)142)) - (126)))));
}
