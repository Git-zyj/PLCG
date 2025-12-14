/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197265
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) var_2))), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_4)))))))) : (max((((/* implicit */int) min(((unsigned short)14123), ((unsigned short)25151)))), ((~(var_8)))))));
    var_12 = min(((unsigned short)14123), (((/* implicit */unsigned short) (unsigned char)72)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((arr_4 [i_1]) != (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) (short)-196))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned char) arr_8 [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_0 - 1])), (arr_12 [i_0]))));
                                var_14 = ((/* implicit */signed char) arr_12 [i_4]);
                                var_15 = ((/* implicit */short) ((_Bool) (signed char)127));
                                arr_13 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [4])) << (((arr_4 [i_1]) - (5757017414431084930ULL))))), (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1] [i_0])) & (((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1] [i_3] [i_3] [6ULL]))))))) ? (((/* implicit */unsigned long long int) ((((arr_1 [i_0 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2] [i_3] [i_0] [i_0 - 1])) : ((((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)69))))))) : (min((min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1] [i_1])), (arr_10 [i_1] [i_1] [i_2] [i_3]))), (((arr_2 [i_0]) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1])))))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [4])) << (((((arr_4 [i_1]) - (5757017414431084930ULL))) - (18293102948381400608ULL))))), (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1] [i_0])) & (((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1] [i_3] [i_3] [6ULL]))))))) ? (((/* implicit */unsigned long long int) ((((arr_1 [i_0 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2] [i_3] [i_0] [i_0 - 1])) : ((((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)69))))))) : (min((min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1] [i_1])), (arr_10 [i_1] [i_1] [i_2] [i_3]))), (((arr_2 [i_0]) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = var_1;
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned int) 439020297)) : (((unsigned int) (signed char)90))))) ? (((/* implicit */int) ((_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) >= (((/* implicit */int) (unsigned short)0)))))));
}
