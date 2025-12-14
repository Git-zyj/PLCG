/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47112
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
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) arr_3 [i_4]);
                                var_17 = ((/* implicit */int) ((unsigned long long int) var_4));
                                var_18 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_3 - 1] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3 + 1] [i_0 - 1])))), (((/* implicit */int) ((unsigned short) arr_5 [i_3 + 1] [i_3 + 1] [i_0 - 1])))));
                                var_19 = ((/* implicit */short) max((2147483632U), (((/* implicit */unsigned int) (short)32741))));
                                var_20 |= ((/* implicit */unsigned int) (-(((arr_14 [i_4] [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 + 1]) - (arr_14 [i_4] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
                            }
                        } 
                    } 
                    arr_16 [(unsigned short)12] [i_1] [(unsigned short)9] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (signed char)-2)) * (((/* implicit */int) (unsigned short)65535)))));
                    arr_17 [i_1] [i_1] [i_1] [i_0] = min((min(((short)-4), (((/* implicit */short) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((/* implicit */short) arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) -257397114412140061LL))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) arr_24 [i_5] [i_6]);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_10 [(unsigned short)0] [i_6] [i_6] [(unsigned short)0])) - (((((/* implicit */_Bool) (unsigned char)31)) ? (-257397114412140061LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38)))))));
                            arr_31 [i_8] [i_8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_8]), (((/* implicit */unsigned int) var_2))))) ? (arr_27 [i_8] [i_5] [i_5] [i_5]) : (((/* implicit */int) ((short) -730701356)))));
                            var_24 = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) ((257397114412140036LL) != (((/* implicit */long long int) 730701363))))), (-7245739249862991704LL)))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-730701346)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_7] [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5)))) : (((9603389570764122522ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_6] [i_7]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
