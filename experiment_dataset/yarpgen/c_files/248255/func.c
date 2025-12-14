/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248255
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min((2485856703U), (2485856688U)));
                    var_12 -= ((/* implicit */unsigned char) ((min((arr_5 [i_1]), (arr_0 [i_1] [i_1]))) > (((1184394348U) * (((/* implicit */unsigned int) -1080853127))))));
                }
            } 
        } 
        var_13 = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned short i_4 = 2; i_4 < 20; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 864704473)), (2015042528098338955ULL))))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned char) (((((-(((/* implicit */int) (signed char)-68)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5])) && (((/* implicit */_Bool) -9189041500376888525LL))))))) ? (((long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (arr_11 [i_0] [i_0] [(unsigned char)16] [i_5])))) : (((/* implicit */long long int) var_9))));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [(unsigned char)13] [i_0] [13ULL] = ((/* implicit */unsigned short) -9189041500376888530LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        for (long long int i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_18 [i_0 + 1] [i_4 - 2] [i_7] [i_7 + 2] [(short)0]), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31691))))) ? (max((arr_3 [i_8] [i_8]), (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_16 [i_3] [i_8] [i_4] [i_7]))))) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (((long long int) var_0)) : (((/* implicit */long long int) 2485856697U))))));
                                arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-123)), (var_9)))) ? (min((((/* implicit */int) arr_21 [i_0] [i_4 - 1])), (-12))) : (((/* implicit */int) ((((/* implicit */_Bool) -9189041500376888530LL)) || (((/* implicit */_Bool) var_9))))))), ((-(var_4)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))), ((-(268304384LL)))))) ? ((+(((unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)166))) ? (var_5) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((int) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0 - 1] [i_0] [i_0])))));
        arr_25 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0 + 1]))))) : (((/* implicit */int) ((arr_2 [i_0 - 3] [i_0] [i_0 - 2]) == (var_9))))));
    }
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        var_19 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (signed char)16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28252))) : (15228499287454030121ULL))));
        arr_28 [(short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [(unsigned short)2] [(unsigned short)2]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 250208481U)))))))) : (min((4294967295U), (((/* implicit */unsigned int) ((unsigned short) (signed char)93)))))));
        /* LoopNest 2 */
        for (short i_10 = 4; i_10 < 18; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~((-(max((((/* implicit */unsigned long long int) var_10)), (arr_13 [i_11]))))))))));
                    arr_33 [i_9] [i_9] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((-3835769802461747138LL) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))) * (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)128))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))) * (min((15228499287454030121ULL), (((/* implicit */unsigned long long int) -9189041500376888530LL))))))));
                    /* LoopNest 2 */
                    for (short i_12 = 3; i_12 < 18; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), ((~(((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)35099))))) + (((var_5) * (((/* implicit */unsigned int) 536870911))))))))));
                                var_22 = ((/* implicit */long long int) ((signed char) max((((16440090271621730094ULL) * (((/* implicit */unsigned long long int) 2614143987U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2772125089U)) ? (((/* implicit */int) arr_9 [i_11] [i_13])) : (((/* implicit */int) (unsigned char)195))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
    {
        var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((3591193087U), (((/* implicit */unsigned int) arr_39 [(signed char)21] [i_14]))))))));
        arr_41 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) 17004502501268595261ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)44042))))), (var_2))) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_14])) || (((/* implicit */_Bool) var_8))))))))));
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)35110), (var_7)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5))))))) ? (var_2) : (min((((/* implicit */long long int) ((((/* implicit */int) var_0)) - (var_4)))), (var_2)))));
}
