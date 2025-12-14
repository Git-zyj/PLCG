/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228933
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
    var_12 = ((/* implicit */unsigned int) ((unsigned long long int) var_11));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */_Bool) var_2);
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((4254223225U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13)))))) ? ((~(1578764344U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)16858)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_7 [i_1] |= ((/* implicit */unsigned short) arr_5 [i_1]);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_7))))) : (arr_9 [i_1] [i_2] [i_3])));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 1484100093U))));
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) (unsigned char)65);
                                var_16 = ((/* implicit */unsigned short) ((var_11) | (((/* implicit */long long int) var_10))));
                                arr_17 [i_1] [i_1] [i_3] [(unsigned short)15] [i_4] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_0)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_1])) ? (var_8) : (((/* implicit */unsigned int) arr_14 [i_1] [i_1] [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [i_1]))))) ? (((/* implicit */long long int) ((unsigned int) (_Bool)1))) : (arr_11 [(short)9] [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned long long int) arr_15 [12ULL] [0] [12ULL] [i_6] [i_2])))));
                                arr_24 [i_1] [i_2] [i_3] [i_3] [i_6] [i_7 + 3] = ((/* implicit */long long int) (~(var_5)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 3) 
    {
        var_19 *= ((/* implicit */unsigned char) ((unsigned int) var_6));
        arr_27 [i_8] [i_8] = ((/* implicit */_Bool) (short)16843);
    }
}
