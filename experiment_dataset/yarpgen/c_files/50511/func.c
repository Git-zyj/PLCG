/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50511
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_2))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98)))));
    var_12 = var_10;
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) << (((((((-1) + (arr_0 [i_0]))) + (1769996471))) - (5)))))) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - (2131000912))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) << (((((((-1) + (arr_0 [i_0]))) + (1769996471))) - (5)))))) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) << (((((((arr_1 [i_0] [i_0]) - (2131000912))) + (2050614534))) - (12)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (arr_3 [i_1])))) : ((-(arr_4 [i_1])))))));
        arr_8 [i_1] = ((/* implicit */signed char) arr_6 [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_11 [i_2] = ((((/* implicit */int) (_Bool)0)) & (arr_9 [i_2] [i_2]));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_12 [i_4] [i_3] [i_2]))))) << (((17795987377054187540ULL) - (17795987377054187525ULL))))) << (((/* implicit */int) min((((/* implicit */signed char) arr_12 [i_2] [i_3] [i_4])), (arr_15 [i_2] [i_2] [i_4] [i_3]))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))))))));
                    arr_17 [i_3] [i_2] = ((((/* implicit */int) (short)15296)) / (267911168));
                    arr_18 [i_4] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned char) (((-((+(-1577568382188128493LL))))) / (((/* implicit */long long int) arr_4 [i_5]))));
        arr_22 [i_5] = ((/* implicit */_Bool) arr_19 [i_5]);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned long long int) ((signed char) var_10));
                        arr_32 [i_5] [i_7] [i_8 - 1] [i_7] = ((short) arr_27 [i_8 + 4] [i_8] [i_8] [i_8 + 1]);
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8] [i_8 + 1]))) * (((min((var_6), (((/* implicit */unsigned long long int) (signed char)-89)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_8])))))));
                        arr_33 [i_8 - 1] [i_7] [i_6] [i_6] [i_5] = ((/* implicit */signed char) arr_23 [i_6] [i_8]);
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-3697))))))))) : (var_4)));
}
