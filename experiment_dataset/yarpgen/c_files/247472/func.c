/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247472
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
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [(signed char)8] [i_1] = ((/* implicit */unsigned short) ((short) (signed char)-27));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_17 = ((/* implicit */signed char) (((((~(arr_8 [8] [i_1] [i_2 - 1]))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)63))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))));
                    arr_10 [i_0] [(unsigned char)10] [(short)8] [2U] = ((/* implicit */int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_6)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned char)21)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)240))))))))));
                }
                arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9564)) ? (((/* implicit */int) arr_7 [i_0 + 2])) : (((/* implicit */int) (short)32752))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-4)), (min((3770676061U), (((/* implicit */unsigned int) (unsigned char)242)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_6);
    var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)255)), ((-2147483647 - 1))))) && (((/* implicit */_Bool) (unsigned char)243))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 2) 
    {
        for (long long int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            {
                var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)20)), ((unsigned short)39532)))))))));
                arr_17 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_8)))))) : (max((3770676037U), (((/* implicit */unsigned int) (unsigned short)14300))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 524291208U)), (((((/* implicit */_Bool) (unsigned char)127)) ? (9462372989909626486ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10244))))))))));
            }
        } 
    } 
}
