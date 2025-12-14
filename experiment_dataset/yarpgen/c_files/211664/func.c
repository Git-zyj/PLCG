/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211664
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_7))));
    var_12 = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned short)11921)) && (((/* implicit */_Bool) var_2))))))), (var_0)));
    var_13 = max((var_6), (((/* implicit */int) var_5)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) max(((~(((((/* implicit */int) (short)27124)) >> (((((/* implicit */int) (unsigned char)255)) - (237))))))), ((+(((/* implicit */int) arr_4 [i_0]))))));
                arr_6 [i_0] [i_0] [i_1] |= ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65519)) ? (-1536890491) : (((/* implicit */int) arr_5 [i_0] [i_0])))) < ((+(-356539265)))))) >> (max((((/* implicit */int) arr_5 [i_1 + 1] [i_1])), (var_6))));
                var_15 += ((/* implicit */int) (unsigned short)22044);
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 524160)) : (4142750841517679148ULL))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 4] [i_1 + 1])))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_8), (max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)8)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)249)) / (2147483631))) * (((((/* implicit */_Bool) 4294967295U)) ? (2147483647) : (-356539266)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_4)) : (var_7)))), (max((arr_8 [i_3]), (((/* implicit */unsigned long long int) (short)-2820))))))));
                arr_12 [i_2] [i_2] [i_2] = ((arr_8 [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (max((var_8), (((/* implicit */unsigned short) var_0)))))))));
                arr_13 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_2))));
            }
        } 
    } 
}
