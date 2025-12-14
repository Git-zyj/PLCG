/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241913
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_10)));
        var_15 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) 2090381451)))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((unsigned long long int) (-(((/* implicit */int) var_11))))) >> (((max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) || ((_Bool)1)))), (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_2) : (((/* implicit */int) var_12)))))) - (696289743)))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1048575ULL)) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) (signed char)53))));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned int) arr_5 [i_1]);
        arr_8 [i_1 + 2] = (+(((/* implicit */int) (_Bool)1)));
    }
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        var_17 *= ((/* implicit */unsigned long long int) var_3);
                        arr_17 [i_2] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4])) ? ((~((~(((/* implicit */int) arr_15 [i_5] [i_4] [i_3] [i_3] [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_10))))) ? ((~(-2147483624))) : (((((/* implicit */int) arr_15 [i_3] [i_3] [i_4] [i_5] [i_5])) | (arr_9 [i_5])))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((799249706), (((/* implicit */int) var_6))));
                        arr_21 [i_3] [i_4] = ((/* implicit */signed char) var_12);
                        arr_22 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_19 [i_2]);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) var_3);
                        var_19 = ((/* implicit */unsigned long long int) ((int) ((arr_18 [i_3] [i_3] [i_3] [i_3]) | (((/* implicit */int) (_Bool)1)))));
                        var_20 -= ((/* implicit */unsigned char) ((int) arr_23 [0] [i_4] [i_7]));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_29 [i_3] = ((/* implicit */unsigned char) ((((unsigned int) arr_18 [i_4] [i_4] [i_4] [i_3])) != (((/* implicit */unsigned int) arr_9 [i_2]))));
                        var_21 *= ((/* implicit */unsigned int) var_13);
                    }
                    arr_30 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */int) (((-(((var_4) ^ (var_5))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
}
