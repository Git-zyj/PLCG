/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234979
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0]))));
                            var_12 ^= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))), (((((/* implicit */int) (short)-21420)) / (((/* implicit */int) (unsigned short)8191))))));
                        }
                    } 
                } 
                var_13 = var_4;
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_11 [i_1 - 1] [24] [i_1 - 1]) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_1 - 1] [20LL] [i_1 - 1])))) >> (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_14 |= ((/* implicit */unsigned char) 540807620U);
        var_15 = ((/* implicit */int) (signed char)52);
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((((/* implicit */int) max((arr_12 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) var_1))))) ^ (((/* implicit */int) min(((unsigned short)8212), (var_4)))))) | (((((/* implicit */_Bool) (unsigned short)59785)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)3))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)57345)), (arr_20 [i_6] [(signed char)4]))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), ((+((-(((/* implicit */int) var_0))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */unsigned long long int) var_8)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_7)))))))) ? (((/* implicit */int) min((max((var_4), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) (short)-7782))))) : (((/* implicit */int) (signed char)-4))));
}
