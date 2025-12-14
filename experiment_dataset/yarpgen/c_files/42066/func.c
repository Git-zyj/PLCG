/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42066
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
    var_19 = ((/* implicit */unsigned long long int) (~(1296641401U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) ((unsigned char) 1296641419U))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))))), ((~(((/* implicit */int) arr_4 [i_1] [i_1]))))));
        var_22 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [8]))))) | ((~(arr_3 [i_1] [i_1]))))), (((arr_3 [i_1] [i_1]) & (((((/* implicit */_Bool) 17592895166861950733ULL)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_12 [i_4] [i_3 + 2] [i_2] [i_1] &= ((/* implicit */int) var_6);
                        var_23 = ((/* implicit */unsigned int) max((7471799347473391388ULL), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_10 [i_4])))), (((/* implicit */int) (unsigned short)65535)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_7))));
        var_25 = ((/* implicit */long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)22368))))))))));
    }
    var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_16)))), (((unsigned long long int) (~(((/* implicit */int) (unsigned short)46818)))))));
}
