/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195101
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] = var_1;
                    /* LoopSeq 1 */
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        arr_12 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) 16777184U);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)72)) == (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (2098758536U) : (var_11)))) : (((((/* implicit */_Bool) var_15)) ? (17047028260380796633ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2])))))));
                            arr_18 [i_0] [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) ((var_5) * (((arr_2 [i_1 + 2] [i_3]) ? (1399715813328754983ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))));
                        }
                        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))))));
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_13)))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    arr_27 [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1399715813328754981ULL)) ? (((/* implicit */unsigned long long int) 1026005153U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37308))) & (1399715813328754983ULL))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(var_12)))) - (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) : (17047028260380796633ULL)))));
                    arr_28 [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))) ^ (arr_22 [i_6 - 1] [i_7] [18LL]))) ^ (((/* implicit */long long int) (~(arr_23 [i_6 + 1]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_9);
}
