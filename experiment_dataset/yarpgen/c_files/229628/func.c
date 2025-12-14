/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229628
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) var_17);
                                arr_16 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-60))))) ? (arr_13 [i_0] [(unsigned char)17] [(signed char)14] [i_3 - 1] [i_4 + 1]) : ((+(((/* implicit */int) var_6))))));
                                var_19 *= ((/* implicit */int) ((short) min((min((((/* implicit */unsigned long long int) var_3)), (var_8))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [12] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)59))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [(unsigned short)7])) | (((/* implicit */int) var_10))))), ((+(var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2])))));
                    arr_18 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) << (((var_8) - (6917949613299359223ULL)))))) == (arr_6 [i_0]))))));
                    arr_19 [i_0] [(short)16] [i_2] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_5)))), (max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-72)), (arr_11 [i_0] [12ULL] [12] [12ULL])))), ((-(((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_0);
}
