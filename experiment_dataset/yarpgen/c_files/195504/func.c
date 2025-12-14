/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195504
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((var_4) ? (arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))));
                var_11 = ((((/* implicit */_Bool) min((arr_2 [i_1] [i_0 + 1] [i_0 - 1]), (var_3)))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0 - 1]))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_0 [19LL])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_1)))) ? (min((var_1), (((/* implicit */unsigned long long int) (short)-10)))) : (max((var_7), (((/* implicit */unsigned long long int) var_2)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) + (17122818448415042929ULL)))));
    var_13 = ((/* implicit */unsigned int) (~(min((var_7), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) max((((var_0) ? (((/* implicit */unsigned long long int) var_5)) : (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (min((arr_3 [i_2]), (arr_3 [i_2])))));
        arr_9 [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6411))) - (((var_0) ? (min((var_3), (((/* implicit */unsigned long long int) arr_6 [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (923131217U) : (923131191U)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_24 [i_2] [i_2] [i_4] [(signed char)1] [(short)3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)0)) : (arr_19 [i_6 - 4] [i_2] [i_6] [i_6] [i_6 - 4] [i_6 - 4])))));
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) | (max((((/* implicit */unsigned long long int) arr_0 [i_2])), (var_3)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) arr_19 [(signed char)12] [i_2] [i_2] [i_3] [i_4] [i_4]);
                    var_15 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((((/* implicit */int) (short)0)) == (arr_19 [10] [i_4] [i_3] [(_Bool)0] [i_3] [i_4])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3])))))))));
                }
            } 
        } 
        arr_26 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_21 [i_2] [(signed char)11] [i_2] [i_2] [8ULL])) ? (5023534239141373050ULL) : (arr_21 [i_2] [(_Bool)0] [i_2] [i_2] [i_2]))), (((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])))));
    }
}
