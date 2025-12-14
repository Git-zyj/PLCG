/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23801
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) var_9))), (max((var_0), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_10))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) (unsigned short)40602))), (var_3))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1))))), (max(((-(4587340641784674809LL))), (((/* implicit */long long int) (short)-25587))))));
        var_15 = ((/* implicit */unsigned int) (unsigned short)40607);
        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)24928)), (3966970017U)));
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_17 -= ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
        var_18 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_2 [i_1 + 1])))));
        arr_6 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 4179038225U))) ? (((((/* implicit */_Bool) -1586335359173877411LL)) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 + 1])))) : (((/* implicit */int) ((signed char) (short)-32180)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_19 = ((/* implicit */_Bool) (-(arr_8 [i_2] [i_2])));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)40587)) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) > (((/* implicit */int) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) || (((/* implicit */_Bool) 9459306124954234079ULL)))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_21 = ((/* implicit */long long int) var_13);
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) 9459306124954234079ULL))));
        var_23 |= var_2;
    }
    for (int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_19 [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))) | (var_8)));
            arr_20 [i_4] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)53464))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_11))));
        }
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53464)))))))), (((arr_8 [i_4] [i_4]) | (((/* implicit */long long int) 2185315933U)))))))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((unsigned int) max((arr_16 [i_4]), (arr_16 [i_4])))))));
    }
}
