/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40117
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
    var_19 += ((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)150))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((signed char) (~(var_5)))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(((((/* implicit */int) arr_5 [i_2])) >> (((arr_7 [i_0 - 1] [i_3 + 4]) - (5182724607456011375ULL))))))))));
                            }
                        } 
                    } 
                    var_23 = (+(((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (var_16)))) * (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0 + 1] [i_0] [i_2]))))))));
                }
            } 
        } 
        var_24 -= ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) arr_0 [i_0])) & (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (int i_7 = 4; i_7 < 11; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_25 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_8)), (arr_6 [i_5] [i_5] [i_5] [i_7] [i_7])));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_8))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (unsigned short)25106))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 11; i_11 += 2) 
                    {
                        for (short i_12 = 2; i_12 < 9; i_12 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) & ((+(((((/* implicit */int) var_16)) * (-1))))))))));
                                var_29 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11])))))) + (arr_25 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 1])));
                                var_30 -= (unsigned short)65535;
                                var_31 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (651978978U))))) ? (((int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (((-(var_5))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (arr_14 [i_10] [i_11 + 2]))))))))));
                                var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) (!((_Bool)0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (var_6)))) >> ((((~(((/* implicit */int) var_2)))) + (16539)))))) : (var_5)));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (+((-(arr_21 [i_9] [i_10]))))))));
                }
            } 
        } 
    }
}
