/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42392
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
    var_10 = ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (-9223372036854775798LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)138))))))) : (var_0));
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775789LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) -1692516504)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)9)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_2 + 2] [(unsigned char)18] [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_2 + 2] [i_2] [i_2 - 1])) : (((/* implicit */int) (unsigned short)43255))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned short)10515)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)119))))));
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22680)) ? (-9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_3)) ? (168922993) : (((/* implicit */int) (unsigned char)143)))) : (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned short)10517)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (short)-32390)) : (((/* implicit */int) (unsigned char)187))))) : (((((/* implicit */_Bool) (signed char)-122)) ? (391017534386999210LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155)))))));
            }
        } 
    } 
}
