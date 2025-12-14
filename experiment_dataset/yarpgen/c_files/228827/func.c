/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228827
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 1] = var_1;
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)13)), (-1)));
                    var_17 = ((/* implicit */unsigned short) ((min((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2]))) & (arr_0 [(signed char)0] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) -14)), (9223372036854775802LL)))), (16ULL));
                                arr_14 [i_0] [8] [i_0] [2ULL] [i_3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [12ULL] [i_0]), (arr_11 [i_3] [i_1] [4LL] [i_3] [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)38)) || (((/* implicit */_Bool) 21))))) : (((/* implicit */int) arr_10 [12] [9] [i_2] [i_2] [i_2]))))) ? (var_5) : (((/* implicit */unsigned long long int) (~(arr_12 [i_0] [i_0 + 1] [i_2] [i_4 - 2] [i_0]))))));
                                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) max((((/* implicit */int) (unsigned char)4)), (arr_11 [i_0] [i_3] [i_2] [i_3] [i_0] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [12] = ((/* implicit */signed char) ((min((arr_1 [i_0 + 1] [i_0 + 1]), (var_11))) * (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)250)), (var_6)))) || (((/* implicit */_Bool) min((var_12), (arr_6 [i_0] [i_2])))))))));
                                arr_24 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_15 [4ULL] [i_0] [i_0] [11ULL]), (((/* implicit */unsigned long long int) 2147483647))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned char)236)))) : (min((29), (((/* implicit */int) arr_22 [i_0] [1] [i_1] [i_2] [i_2] [i_0])))))) & (((/* implicit */int) var_8))));
                                var_20 = ((/* implicit */unsigned long long int) arr_1 [i_6] [i_6]);
                                arr_25 [0LL] [i_1] [i_1] [i_0] [0LL] = ((/* implicit */signed char) (unsigned char)2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_3);
    var_22 = (-(var_7));
    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) (unsigned char)248))) : (var_7)));
}
