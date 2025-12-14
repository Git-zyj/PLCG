/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244408
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 = max((arr_1 [i_0]), (((/* implicit */long long int) ((663985831) / (((/* implicit */int) (signed char)116))))));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-4)) / (-663985834))) >> (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) + (75)))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) + (arr_1 [i_0])));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) var_11))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_2), (arr_4 [i_2 + 1] [i_3 - 1]))))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned int) 1125899906842616ULL)), (((((/* implicit */_Bool) var_0)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30843)))))))) ? (max((((/* implicit */unsigned long long int) 663985829)), (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_11 [i_4]), (arr_11 [i_4]))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (390332076U)))))) : (((/* implicit */long long int) -169279713))));
        var_21 &= ((/* implicit */unsigned char) var_9);
    }
    var_22 = ((/* implicit */unsigned long long int) ((var_13) || (((/* implicit */_Bool) var_7))));
}
