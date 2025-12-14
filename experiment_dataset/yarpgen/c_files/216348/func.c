/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216348
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
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0])), (var_13)))), ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */signed char) var_2)), (var_13))), (((/* implicit */signed char) ((((/* implicit */_Bool) -1762293779)) && (((/* implicit */_Bool) (short)-15)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (min((var_6), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
                            arr_12 [i_0] [i_0] [1] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_4 [i_0]))) <= ((~(((/* implicit */int) var_8))))))), (var_8)));
                            arr_13 [i_3] [i_3] [i_3] [i_0] |= ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_14 [i_0 - 3] [i_0 - 1] [i_0] [i_0])) ? (var_15) : (((/* implicit */unsigned int) arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))));
                            arr_20 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max(((short)-15), ((short)0)))), (max((((/* implicit */unsigned int) max((var_7), (arr_18 [i_5] [i_0] [i_4] [4U])))), (var_10)))));
                            arr_21 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_0 - 1] [(short)6] [i_0])))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_10);
                                arr_25 [i_0] [i_1] [i_1] [i_5] [(unsigned char)2] [4ULL] &= ((unsigned short) (short)14);
                                arr_26 [i_0] [i_0] [(unsigned short)0] = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_0] [i_0] [i_0]);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                            {
                                arr_31 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
                                arr_32 [i_0 - 3] [(signed char)10] [i_7] [i_0 - 3] [i_7] [i_0] = ((/* implicit */unsigned long long int) var_0);
                            }
                        }
                    } 
                } 
                arr_33 [i_0 - 2] [i_0] [i_0] = min((((/* implicit */unsigned int) ((short) var_14))), (var_10));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min(((signed char)-114), ((signed char)-114)));
}
