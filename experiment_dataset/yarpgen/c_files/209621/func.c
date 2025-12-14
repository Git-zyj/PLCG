/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209621
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
    var_18 = ((/* implicit */_Bool) (-(max((var_11), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_0 - 1] [0U] [i_1] |= ((/* implicit */short) (-(((var_13) ? (((/* implicit */int) arr_2 [(short)0])) : (((/* implicit */int) arr_1 [(short)5] [i_0 - 1]))))));
            arr_7 [i_1] [i_0 + 1] [i_1] = ((/* implicit */signed char) (~((~(max((var_5), (((/* implicit */unsigned int) (unsigned char)255))))))));
        }
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), ((unsigned short)2545))))))) ^ (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))), (((/* implicit */int) min(((unsigned short)63049), (arr_2 [(_Bool)1]))))))));
        arr_8 [i_0 + 1] = ((arr_3 [(unsigned short)0] [(unsigned short)0]) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)227))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [(_Bool)1] [i_3] [i_3] [i_4] [9ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_3] [(_Bool)1] [i_3] [6U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) : (((4838375987809771447LL) * (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                            var_20 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 1957641194460842652LL))))));
                            arr_20 [3] [i_3] [i_3] [i_4] [i_3] [12U] [i_0 + 1] = ((/* implicit */short) arr_5 [i_0 + 1] [i_0 - 1]);
                        }
                    } 
                } 
            } 
            var_21 ^= arr_11 [i_2] [i_0 + 1] [i_0 - 1] [i_0 - 1];
            arr_21 [i_0 - 1] = ((/* implicit */unsigned long long int) ((4294967288U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1957641194460842656LL)) && (((/* implicit */_Bool) (unsigned short)13516))))))));
        }
    }
    var_22 = ((/* implicit */long long int) var_14);
    var_23 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 ^= arr_22 [i_6] [i_6];
        arr_26 [i_6] = ((/* implicit */int) arr_24 [i_6]);
    }
}
