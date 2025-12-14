/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51138
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
    var_13 = ((/* implicit */unsigned short) (-(0U)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (_Bool)0)))));
        var_15 = ((/* implicit */short) (((((+(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) >> (((/* implicit */int) ((11ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))))))));
        var_16 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (signed char)87)))))));
        var_17 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29329))))))))));
        var_18 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)3)))) ^ (((((((/* implicit */int) (signed char)49)) | (((/* implicit */int) (unsigned char)49)))) | (((/* implicit */int) (!((_Bool)1))))))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 - 1]))))))));
        arr_5 [i_1] [i_1] = var_4;
        var_20 = ((/* implicit */long long int) ((unsigned short) ((arr_4 [i_1 - 1] [i_1 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 18; i_2 += 3) 
        {
            for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) < ((+(((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_3 + 1]))))));
                    var_22 = ((/* implicit */int) var_11);
                    var_23 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) arr_11 [i_1] [i_1])) + (112))) - (4)))))) - (arr_4 [(unsigned short)13] [i_3]))) | (((/* implicit */unsigned long long int) ((unsigned int) -7616130516459544186LL)))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)46))) != (var_3))));
    }
    var_25 = ((/* implicit */signed char) var_12);
}
