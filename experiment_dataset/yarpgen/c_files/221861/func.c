/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221861
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
    var_18 = min((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_17))))), ((+(((/* implicit */int) (unsigned char)6)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (unsigned short)23023);
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */short) ((int) (unsigned char)252));
                    var_20 *= ((/* implicit */unsigned short) var_9);
                    arr_9 [i_0 + 1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) (_Bool)0)), (var_2))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)3)))))))), (((unsigned long long int) arr_3 [i_1 - 1] [i_2 - 1] [i_2]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) ((unsigned short) 433569912))) : (243810002)));
                                var_21 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (signed char)-22)), (5777341088293017587LL))), (((/* implicit */long long int) min(((unsigned char)48), (arr_5 [i_1 - 2] [i_1]))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)252);
                }
                for (short i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((3170011190U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)161))))))) ? (4503599627370464LL) : (((/* implicit */long long int) var_1))));
                    var_23 = ((/* implicit */short) arr_0 [(short)9] [i_0 - 1]);
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_22 [i_1] [i_1 + 1] [(unsigned short)10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)14))));
                    var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25059))) * (18446744073709551615ULL)))));
                }
            }
        } 
    } 
    var_25 -= ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)24)), ((short)-25059)));
    var_26 = ((/* implicit */int) var_13);
}
