/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199687
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min(((~(((8609184450722467042ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) arr_4 [i_2]))));
                    var_17 = ((/* implicit */short) 473487785);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)6765)) ? (10267985098284278070ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))));
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)231), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15)))))))) ? (max((((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)26175)))), (min((((/* implicit */int) (unsigned short)20497)), (-129260646))))) : (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_4 + 1] [i_1 - 2])) ? (((/* implicit */int) (unsigned short)30281)) : (arr_2 [i_4] [i_4 - 2] [i_1 - 1])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_2 [i_1] [i_1] [i_2]), (((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (11972900374020348355ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_1 - 2] [i_1] [i_1] [i_2] [i_2])) : (4294967295U)))) ? (4294967277U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)30165))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) * (((/* implicit */int) (unsigned short)47857))))) ? (max((arr_9 [i_0] [i_0] [i_0] [i_1 - 1] [i_2]), (((/* implicit */unsigned int) (short)25521)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((unsigned long long int) ((17106071614865958443ULL) & (((/* implicit */unsigned long long int) 0LL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_10)), ((unsigned short)27474))), (((/* implicit */unsigned short) var_10)))))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) & (((/* implicit */int) var_7))))) : ((+(var_11))))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 854794913U))))), (min(((unsigned short)4402), (((/* implicit */unsigned short) (short)27288))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((max((14U), (((/* implicit */unsigned int) (short)27292)))) % (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-32740), (((/* implicit */short) (unsigned char)253)))))))))));
}
