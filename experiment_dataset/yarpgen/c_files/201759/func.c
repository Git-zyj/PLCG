/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201759
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned short)36088))))))) ? (6034106121760235064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4602678819172646912LL)) ? (122344707U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16644)))))) || (((/* implicit */_Bool) (unsigned short)64202))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_12 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1322))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_2] [i_4 - 2])) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10)))))));
                                var_13 = ((/* implicit */unsigned char) var_10);
                                var_14 &= ((/* implicit */_Bool) ((11128555413524594536ULL) * (min((((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))))), (((((/* implicit */_Bool) (unsigned short)64209)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [(signed char)17]))) : (arr_12 [i_0 - 1])))))));
                                arr_13 [i_0 - 3] [15LL] [(_Bool)1] [i_0 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1323)) ^ (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))))) ? (((((/* implicit */int) arr_0 [i_0 - 3] [i_1])) << (((var_0) - (1828515753253839584LL))))) : (((/* implicit */int) min((arr_0 [i_0 + 2] [i_0 + 2]), (arr_0 [i_0 + 1] [i_1]))))));
                                arr_14 [i_0] [i_0] [i_2] [10U] [(unsigned char)17] [i_4 + 3] [i_4 - 2] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_0 + 3])) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((var_1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((unsigned short) (short)-21454))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-10)) >= (((/* implicit */int) var_6)))))))))))));
    var_16 = ((/* implicit */unsigned char) var_0);
}
