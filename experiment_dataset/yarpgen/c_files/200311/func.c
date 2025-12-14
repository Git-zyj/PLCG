/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200311
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
    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_8))) ^ (((((/* implicit */int) var_6)) + (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((unsigned char) ((var_3) ? (-2108904663) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) || (((/* implicit */_Bool) arr_0 [i_0]))))) > (((/* implicit */int) arr_0 [i_1])))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (short)-25986)))));
                                var_16 = ((/* implicit */int) ((((/* implicit */int) (!(arr_3 [i_0] [i_1 + 1])))) < (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))));
                                var_17 = var_1;
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4] [i_2] = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (0ULL))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [(signed char)3] [i_0] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0])) | (((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_2])))))), (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1 + 1] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1 + 1])), ((unsigned short)31190)))) && (((/* implicit */_Bool) ((int) (_Bool)1))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))))), (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */long long int) min((((/* implicit */int) arr_12 [(short)10] [(short)10] [i_0] [i_0])), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_1)))))))));
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_4)), (max((max((1624286500915737267ULL), (16822457572793814366ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
            }
        } 
    } 
}
