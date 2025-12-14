/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36382
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) (-((-(arr_4 [i_1] [i_0])))));
            arr_5 [i_0] [i_1] [(signed char)9] = ((/* implicit */long long int) ((((var_10) << (((((/* implicit */int) var_5)) - (6932))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
        }
        for (int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1776440697U)) ? (3542606449134029130LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1])))));
            var_14 = ((/* implicit */int) (!(arr_7 [i_2] [i_2 + 2])));
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (var_10) : (((/* implicit */unsigned int) 1655023563)))) : (2207676646U))))));
            arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2518526598U)) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 2])) : (((/* implicit */int) arr_0 [i_2 - 2] [i_2]))));
        }
        var_16 = ((/* implicit */long long int) ((2518526608U) * (1776440694U)));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0]))))))));
        var_18 = ((/* implicit */_Bool) ((arr_7 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((arr_3 [i_0]) && (arr_6 [i_0] [i_0]))))));
        arr_9 [i_0] [i_0] = var_7;
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) var_1);
        arr_13 [i_3] = ((int) ((short) ((((/* implicit */_Bool) (short)-5659)) ? (2518526612U) : (2207676668U))));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) - (11U))) & (((((/* implicit */_Bool) (-(arr_10 [i_3] [i_3])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-9))))) : (max((1776440690U), (((/* implicit */unsigned int) arr_11 [2U]))))))));
        arr_14 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3]))));
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_8))));
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_3))));
                    arr_22 [i_4] [16] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6])) ? (((((/* implicit */int) (unsigned char)116)) >> (((((/* implicit */int) var_5)) - (6936))))) : (((/* implicit */int) ((unsigned short) arr_15 [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)127))) != (1776440702U))))) : (max((((/* implicit */unsigned long long int) arr_16 [i_5 + 1] [(_Bool)1])), (var_6)))));
                    var_23 = ((signed char) (-(((/* implicit */int) var_2))));
                }
            } 
        } 
        arr_23 [i_4] = ((/* implicit */long long int) ((unsigned int) (signed char)92));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 3; i_8 < 23; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_8 + 1] [i_7 + 1] [i_7 + 1])) / (((/* implicit */int) (unsigned char)26))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_7 + 1])) * (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_29 [(unsigned char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))) : (2207676661U)))))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((3030104429882249599LL), (((/* implicit */long long int) arr_33 [i_8]))))))) ? (max((((/* implicit */unsigned long long int) arr_27 [i_7])), (var_1))) : (((/* implicit */unsigned long long int) (~((~(953114604))))))));
                    arr_34 [i_8] [i_9] = ((/* implicit */int) (~(((arr_28 [i_7 + 1] [i_8] [i_7 + 1]) & (((/* implicit */long long int) -1))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2207676668U)), (var_6)))) ? (((/* implicit */int) arr_31 [i_7] [i_7] [i_8 - 3])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_32 [i_7] [(unsigned char)21] [i_8 + 2])), (arr_31 [i_8] [(signed char)13] [i_8 + 2]))))));
                }
            } 
        } 
        arr_35 [i_7] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)50)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
    }
    var_27 = ((/* implicit */long long int) var_10);
    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
}
