/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190853
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
    var_13 = ((/* implicit */signed char) var_9);
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)10)))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)22150)) : (((/* implicit */int) (unsigned char)246))))) ^ (((((/* implicit */_Bool) (unsigned char)250)) ? (3146507128U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] = var_8;
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_4])) ? (((((/* implicit */unsigned long long int) 1464332432U)) + (65535ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20137)))))) && (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)38010)), (-1760839686))))));
                                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [(unsigned short)12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_5 [i_2 - 1] [i_2 - 1] [i_2]))))) : (((((/* implicit */_Bool) (short)3655)) ? (((/* implicit */unsigned long long int) 131071U)) : (var_12)))));
                                arr_13 [i_0] [i_2] [i_1] [11U] [i_2 - 1] [(short)8] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)0)))) && ((!(((/* implicit */_Bool) arr_9 [i_3] [i_3])))))))) / (((((/* implicit */_Bool) (short)16383)) ? ((~(arr_4 [i_2] [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)13217)) : (((/* implicit */int) (short)31075))))) ? (arr_11 [i_3] [13U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38010)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-116))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16383)))))))) : (max((((/* implicit */long long int) var_11)), (((arr_0 [9LL]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)7754))))))))))));
                            }
                        } 
                    } 
                    arr_14 [13] [(signed char)5] [i_2] [(short)10] = arr_4 [i_2] [i_2 - 1] [i_2 - 3];
                    arr_15 [i_2] [i_1] [7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27515)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3828782710U)))) ? (((((/* implicit */_Bool) (short)-3655)) ? (((/* implicit */int) arr_6 [(short)5] [(short)5] [2ULL] [i_2 - 1])) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) 2364266713359226948LL)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (short)7743))))))) : (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 - 2])) ? (arr_11 [i_2 + 1] [i_2 + 1]) : (arr_11 [i_2 - 2] [i_2 + 1])))));
                }
            } 
        } 
    } 
}
