/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205524
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
    var_15 = ((/* implicit */long long int) ((unsigned int) (signed char)-89));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2279274898U)) ? (min((((/* implicit */unsigned int) var_2)), (((2279274899U) >> (((var_4) - (2067199153U))))))) : (((/* implicit */unsigned int) 1213091636))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        arr_12 [i_0] [4U] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1213091633)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)112)) ^ (((/* implicit */int) (short)-126)))))))) % (max((((((/* implicit */int) (unsigned short)48903)) * (((/* implicit */int) (signed char)-106)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 + 1])) || (((/* implicit */_Bool) (signed char)122)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_16 += ((/* implicit */unsigned long long int) 1658028484U);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((((/* implicit */int) (signed char)-11)) + (2147483647))) << (((((-3101089930815520253LL) + (3101089930815520276LL))) - (23LL))))), (max((1213091617), (((/* implicit */int) (signed char)-113))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -807324871)), (var_13)))) : (max((((/* implicit */unsigned long long int) ((int) (signed char)127))), (max((127ULL), (((/* implicit */unsigned long long int) (unsigned char)186))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_17 [i_2 + 1] [i_3] = ((/* implicit */unsigned char) (((!(arr_14 [i_0 + 3] [i_1] [i_0] [i_0 + 3] [i_0 + 3] [i_2] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 127ULL))))) : (((/* implicit */int) (!(((arr_3 [i_0] [i_1]) == (((/* implicit */unsigned long long int) 26U)))))))));
                            arr_18 [i_0] [i_5] [i_2] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)106)) && (((/* implicit */_Bool) (-2147483647 - 1)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 19; i_6 += 2) 
                        {
                            arr_23 [i_3] [i_3] [i_3] [i_3 - 2] [i_2] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2]);
                            var_18 = ((/* implicit */unsigned long long int) ((-1213091633) * (((/* implicit */int) ((arr_22 [i_3] [i_3] [i_6] [i_0] [i_6]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        var_19 ^= ((/* implicit */unsigned char) 2273849228359819972ULL);
                        var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) 2273849228359819974ULL)) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (short)19662)) && (((/* implicit */_Bool) (signed char)-106))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 + 1] [i_1] [i_2 - 1] [i_7 + 1] [i_0 + 2] [i_2 - 1]))) < (-3451316323213109100LL))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        arr_31 [i_0 - 1] [i_0 - 1] [i_0 + 1] [(unsigned short)10] [i_0 + 1] [12LL] = ((/* implicit */short) var_5);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19662)) ? (2102803071469688056LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (1213091654) : (((/* implicit */int) (signed char)99))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (_Bool)0);
    /* LoopSeq 2 */
    for (short i_9 = 3; i_9 < 8; i_9 += 3) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned int) (unsigned char)205);
        arr_36 [(signed char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)69)) <= (((/* implicit */int) ((unsigned short) (signed char)-118)))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [15] [i_10] [i_10])) + (((/* implicit */int) (unsigned char)200))));
        var_24 = ((((((/* implicit */_Bool) var_0)) ? (973995159U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))))) >> (((int) 0U)));
        arr_39 [i_10] [i_10] = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) -2944152821358345955LL)) + (arr_13 [i_10] [i_10] [i_10]))));
    }
}
