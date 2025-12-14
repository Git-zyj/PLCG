/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229276
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_10 *= ((/* implicit */_Bool) arr_3 [(unsigned char)6]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_7)), (15597129047460389280ULL))), (min((min((var_2), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) min(((short)0), (((/* implicit */short) var_5)))))))));
                    var_11 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1312659303U)))))) : (min((var_2), (((/* implicit */unsigned long long int) var_1)))))))));
                    arr_12 [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned long long int) (unsigned char)152);
                    arr_13 [i_0] = (_Bool)1;
                    arr_14 [i_0] [i_2] = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (short i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        arr_18 [i_3 + 2] = ((/* implicit */long long int) (unsigned char)55);
        var_12 = ((/* implicit */short) (unsigned char)157);
        arr_19 [i_3] [i_3 - 1] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)37)), ((+((-(((/* implicit */int) var_9))))))));
        arr_20 [i_3] [i_3] = ((/* implicit */unsigned int) var_0);
        arr_21 [i_3] = ((/* implicit */long long int) var_1);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_13 = ((/* implicit */_Bool) var_8);
        arr_24 [(short)1] = ((/* implicit */unsigned int) ((681904731) << (((var_3) - (7613410013457172416LL)))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        arr_28 [i_5] = ((/* implicit */int) arr_23 [i_5] [i_5]);
        var_14 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (((unsigned long long int) var_0)));
    }
    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
}
