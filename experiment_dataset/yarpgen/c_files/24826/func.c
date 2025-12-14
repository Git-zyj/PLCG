/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24826
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
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */int) arr_1 [i_1] [i_2]);
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [(unsigned short)8] [i_2]))) ? (-7904607643977316215LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [9])) ? (arr_4 [15U]) : (((/* implicit */int) (short)-32532)))))))) ? (((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) arr_6 [14ULL] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) 7904607643977316222LL)) : (12344895603585057225ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((long long int) ((((/* implicit */_Bool) arr_6 [i_1] [(unsigned short)2] [(short)10])) ? (var_5) : (((/* implicit */unsigned int) -1254543612))))))))));
                        var_16 ^= ((/* implicit */signed char) 7904607643977316215LL);
                    }
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */int) (unsigned char)114);
                    arr_11 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 7904607643977316225LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned long long int) (signed char)75)))));
                            arr_21 [(unsigned char)4] [(signed char)2] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_4] [i_5] [(unsigned char)4])))) ? (((int) var_10)) : (((int) 644251133712832917LL))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_6])))));
                            arr_22 [i_4] [i_4] [(short)6] [i_4] [i_4] = ((/* implicit */_Bool) ((long long int) arr_2 [i_7] [i_6]));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */signed char) var_1);
                arr_23 [i_4] [i_5 + 2] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_13 [i_5 + 1] [i_5 + 1])))), (((((/* implicit */_Bool) arr_16 [i_4] [i_5 + 1])) ? (((/* implicit */int) arr_13 [i_5 + 3] [i_5 - 2])) : (((/* implicit */int) (signed char)-76))))));
                /* LoopSeq 2 */
                for (int i_8 = 2; i_8 < 8; i_8 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((signed char) arr_19 [i_8] [i_4] [i_4] [2LL]));
                    var_20 = arr_19 [i_4] [i_4] [i_4] [i_4];
                }
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((unsigned long long int) arr_6 [(unsigned short)6] [(unsigned char)8] [(unsigned short)6]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (((unsigned char) 15))))) : (var_1))))));
                    arr_29 [i_4] [i_4] [i_9] = ((/* implicit */signed char) (unsigned short)47810);
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_5] [i_9]))))) ? (((long long int) (unsigned short)30841)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [0] [i_5] [i_9]))))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)0))))))));
}
