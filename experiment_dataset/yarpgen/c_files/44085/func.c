/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44085
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0] [i_0 + 4] [i_0 + 4])), ((signed char)112)))) != (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_1]))));
                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) < (-1091038312)))))) << ((((~(-1091038312))) - (1091038301)))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_0 [i_0]))));
                arr_6 [i_0 - 2] = ((/* implicit */int) arr_4 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 11; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_2 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_2 - 2])))))))) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) min((arr_10 [i_2 - 3]), (arr_10 [i_2 - 1]))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_8 [i_2 + 4]))) << (((max((arr_13 [i_2 + 1]), (arr_13 [i_2]))) + (437868451)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) -1091038312);
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                var_22 ^= ((/* implicit */signed char) ((short) ((arr_16 [i_4] [i_5]) != (((/* implicit */unsigned long long int) arr_14 [i_5])))));
                arr_18 [i_4] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)24627), ((unsigned short)58387)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50368)) ? (arr_16 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9)))))) ? (((((/* implicit */_Bool) 460499048)) ? (((/* implicit */int) (unsigned short)24628)) : (((/* implicit */int) (unsigned short)40922)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)58387)) <= (((/* implicit */int) (signed char)5)))))))) : (15037938843863523866ULL)));
                var_23 = ((/* implicit */unsigned long long int) max(((signed char)9), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_5])))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned short) (~(max(((+(((/* implicit */int) (signed char)119)))), (((/* implicit */int) (unsigned short)41283))))));
                            arr_24 [i_4] [i_4] [i_4] [i_6 - 1] [i_4] = ((/* implicit */unsigned long long int) (signed char)119);
                            arr_25 [i_7] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_7] [i_6 - 1] [i_6 + 1] [i_7]))))) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_6] [i_7]))));
                            var_25 *= ((/* implicit */unsigned long long int) arr_20 [i_4] [i_4] [i_4]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) arr_14 [i_4]);
            }
        } 
    } 
}
