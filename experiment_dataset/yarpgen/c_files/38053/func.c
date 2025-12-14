/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38053
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_17 ^= ((/* implicit */unsigned long long int) arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) max((max((((/* implicit */short) var_0)), (var_12))), (((/* implicit */short) ((arr_10 [i_4] [i_3] [i_2] [i_1] [i_0] [(unsigned short)11]) <= (9U))))))) && (((((/* implicit */_Bool) var_14)) && (((((/* implicit */_Bool) 12363280380752339184ULL)) || (((/* implicit */_Bool) var_9)))))));
                                var_19 = var_16;
                                var_20 = ((/* implicit */unsigned char) ((unsigned int) min((max((((/* implicit */int) var_15)), (arr_8 [i_0] [(short)10] [i_2] [i_3] [(short)14]))), (((/* implicit */int) var_12)))));
                                arr_12 [(_Bool)1] [i_1] [i_2] [i_3] [i_4] [i_2] |= ((/* implicit */int) min((((/* implicit */long long int) ((int) arr_5 [i_1]))), ((~(arr_5 [i_0])))));
                                arr_13 [i_0] [i_1] [(signed char)1] [i_3] [i_4] [i_4] = ((/* implicit */int) ((arr_9 [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8LL])))));
                            }
                        } 
                    } 
                    arr_14 [(unsigned short)7] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20341))));
                }
                arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (signed char)89))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20340)))))));
                arr_16 [i_0] [(unsigned char)5] [(signed char)11] = ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                arr_24 [i_5 - 1] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_18 [i_5] [i_5 - 1])))));
                arr_25 [12LL] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_16), (var_1)))) / (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_5 - 1])) >= (((/* implicit */int) (short)23734)))))) : (max((((/* implicit */unsigned long long int) var_7)), (((12363280380752339179ULL) | (6083463692957212412ULL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((((/* implicit */short) max((var_1), (var_0)))), (var_2))))));
}
