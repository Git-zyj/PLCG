/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47474
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((((unsigned long long int) max(((unsigned char)166), (arr_0 [i_0])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        var_15 = (_Bool)0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((((var_3) / (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26201)) ? (468418047U) : (((/* implicit */unsigned int) var_1))))) ? ((~(-1000222445))) : (((-1150290940) & (1150290939)))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [(_Bool)1] [i_2 + 3])))) != (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_5))))))) % (((/* implicit */int) min((var_2), (min((((/* implicit */unsigned short) (unsigned char)253)), ((unsigned short)54422))))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0] [i_0]))))))));
                    arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */short) arr_6 [i_0] [i_1 + 1]);
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / ((-(((unsigned int) (unsigned short)11113))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(2ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (-1000222445))))))) ? (1000222444) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)16703)) ? (235328307) : (((/* implicit */int) (unsigned short)65325)))) == (1150290943))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_21 = arr_8 [i_3] [i_3];
        arr_10 [(unsigned char)16] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-29991))) - (arr_8 [i_3] [(unsigned char)23])))) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)21222)) : (((/* implicit */int) var_5)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6469595219238908440LL)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) 5763347025831976558ULL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))));
    var_23 |= ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    arr_17 [(short)9] [i_5] [i_5] = var_4;
                    arr_18 [i_4] = ((/* implicit */unsigned char) (~(max((((((/* implicit */int) var_12)) ^ (var_3))), ((~(((/* implicit */int) var_2))))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_12))))))) ? (-726087533) : (((/* implicit */int) max(((unsigned short)35990), (((/* implicit */unsigned short) ((arr_12 [i_5] [i_6]) == (4116081071U)))))))));
                }
            } 
        } 
    } 
}
