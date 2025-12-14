/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2168
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_9))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4238959998U))));
            var_17 = ((/* implicit */unsigned short) ((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0])))) << (((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3))) >> (((arr_3 [i_0] [i_0] [i_0]) - (1473359831U))))) - (30ULL)))));
        }
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (short i_3 = 4; i_3 < 19; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) (signed char)-124)) && (((/* implicit */_Bool) var_7)))))) ? (((((/* implicit */_Bool) (~(-4543961790965469020LL)))) ? (14272086554562095816ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_4 - 1] [i_3 + 1])))) : (((/* implicit */unsigned long long int) var_10))));
                                arr_15 [i_0] [(signed char)13] [i_3 - 1] [i_3] [i_2] [i_5] [i_0] = ((/* implicit */int) min((((long long int) ((long long int) var_9))), (((/* implicit */long long int) var_8))));
                                var_19 |= ((/* implicit */unsigned long long int) (-(((unsigned int) (!(((/* implicit */_Bool) var_9)))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((unsigned int) var_4))) / (((((/* implicit */_Bool) arr_14 [i_0] [(signed char)18] [19ULL])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [7] [7] [i_3 - 4]))))))) | (var_3)));
                    arr_16 [i_0] [i_3] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    }
    for (unsigned int i_6 = 2; i_6 < 13; i_6 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) -2056403400))), (((unsigned int) ((arr_7 [i_6] [5U] [i_6]) % (((/* implicit */int) (unsigned short)9176)))))));
        arr_21 [i_6] = (~(min((((int) arr_17 [i_6 - 2])), (((/* implicit */int) arr_10 [i_6 + 1] [i_6] [i_6])))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                {
                    var_22 |= ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((signed char) (-(arr_19 [i_8])))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((short) 3628696126U));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_6 - 1])), (var_15)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_11 = 1; i_11 < 9; i_11 += 4) 
    {
        arr_37 [i_11 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11]))) : (arr_23 [i_11 - 1] [i_11 + 1])))) ? (arr_30 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [2U] [i_11 + 1])))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) arr_2 [i_11 + 1]))) > (((/* implicit */int) ((unsigned short) var_2)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-8149)) ? (arr_0 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
        arr_38 [i_11] |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((-1429537806640836612LL) > (((/* implicit */long long int) -20))))))));
    }
    var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(1035910182)))) ? (((((/* implicit */_Bool) var_15)) ? (13606145595224904395ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (-6)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (-4543961790965469002LL))))));
}
