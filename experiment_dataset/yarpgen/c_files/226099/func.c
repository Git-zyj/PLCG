/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226099
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
    for (unsigned char i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] [i_3] [i_3] [i_2] [i_1 - 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (min((var_5), (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_6 [i_3] [i_0 - 2] [i_2] [i_3]))))) ? (((/* implicit */int) arr_10 [i_0 - 2] [i_1 + 1] [i_2] [i_3])) : (((/* implicit */int) (short)32762))));
                                arr_13 [i_4] [i_1 - 1] [i_2] [i_0 + 4] [i_2] = ((/* implicit */unsigned short) (short)-32753);
                                arr_14 [i_2] [i_3] [i_2] [i_1 + 3] [i_2] = ((((/* implicit */_Bool) min((arr_6 [i_0 + 2] [i_1 - 2] [i_2] [i_3]), (((/* implicit */unsigned char) arr_4 [i_3] [i_1 - 2] [i_0 - 2]))))) ? ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)237)))) : (((/* implicit */int) arr_4 [i_4] [i_1 + 4] [i_0 - 1])));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0 - 2] [i_1 - 2] = ((/* implicit */int) min(((short)10), (var_3)));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                arr_26 [i_5] = ((/* implicit */short) arr_11 [i_0 + 1] [i_0]);
                                arr_27 [i_0 - 2] [i_1 + 2] [i_5] [i_6 + 1] [i_7] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned short) arr_2 [i_0 + 4])), (var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 - 1] [i_1] [i_5] [i_6] [i_7]))) : ((+(max(((-9223372036854775807LL - 1LL)), (9223372036854775796LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            for (int i_10 = 2; i_10 < 20; i_10 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) var_10);
                    var_14 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    var_15 = ((/* implicit */short) var_10);
                    arr_36 [i_8] [i_9] [i_10 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63740)) ? (((((/* implicit */_Bool) (unsigned short)50025)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_30 [i_8] [i_10])))) : (max((3), (((/* implicit */int) arr_30 [i_8] [i_9]))))))) ? ((~(((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (var_5))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) arr_35 [i_10 - 2] [i_9] [i_10] [i_8])) : (((/* implicit */int) arr_35 [i_8] [i_8] [i_8] [i_8])))) : (((((/* implicit */_Bool) arr_33 [i_10] [i_10] [i_9] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))));
                    var_16 -= ((/* implicit */_Bool) ((short) var_2));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_3);
    var_18 = ((/* implicit */_Bool) var_2);
}
