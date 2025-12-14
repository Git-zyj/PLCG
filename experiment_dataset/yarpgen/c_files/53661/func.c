/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53661
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_6) | (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (12) : (var_4))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_6)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)7510)) : (((/* implicit */int) var_11)))) : ((+(-25)))))) : (var_5)));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((int) var_9)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_1 + 2] [i_0]), (((/* implicit */unsigned short) var_7)))))) > (var_9))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) > (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) + (var_6)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_5) : (arr_9 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */int) (unsigned short)1404)) : (((/* implicit */int) (unsigned short)34385))))) : ((+(arr_9 [i_4 - 3] [i_2 + 1])))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */int) arr_3 [i_0] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_15 [i_5] [i_6])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32915))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_5] [i_6])))))))) ? (max((((/* implicit */long long int) var_8)), (arr_5 [i_5] [i_6] [i_7]))) : ((((!(((/* implicit */_Bool) var_9)))) ? (max((arr_8 [i_7] [i_6] [i_6] [i_5]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))))));
                    var_19 = ((((((/* implicit */_Bool) 2755081865U)) ? ((+(((/* implicit */int) arr_21 [i_5])))) : (((/* implicit */int) arr_4 [i_5] [i_6] [i_7])))) * (((/* implicit */int) max((((unsigned char) var_1)), (((/* implicit */unsigned char) ((signed char) arr_21 [i_5])))))));
                }
            } 
        } 
    } 
}
