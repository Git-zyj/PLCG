/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248028
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
    var_12 = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_8)) != (((/* implicit */int) ((unsigned char) var_4)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (arr_2 [i_0]))))) != (arr_10 [i_0] [i_1] [i_2] [i_2] [(unsigned char)3])))) : (((/* implicit */int) (unsigned short)24638))));
                                var_13 = ((/* implicit */int) max((var_13), ((+((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? ((+(-51942159))) : ((+(((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2]))))));
                    arr_14 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_4 [i_1 + 2] [i_1] [i_2]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? ((~(((/* implicit */int) (unsigned char)127)))) : (((/* implicit */int) ((unsigned char) arr_4 [i_1 - 1] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            {
                var_14 = ((/* implicit */int) (!((_Bool)1)));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    arr_22 [i_6] &= 4257461624U;
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) != (0ULL))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
                }
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    arr_26 [i_6] |= ((/* implicit */_Bool) (signed char)60);
                    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) != (18446744073709551600ULL))) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (_Bool)1))));
                    arr_27 [i_5] [4U] [i_8] [i_5] = ((/* implicit */int) (_Bool)1);
                    var_17 ^= ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned char) ((913966280) != (((/* implicit */int) (signed char)60))))), (((unsigned char) 784180761)))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13547387106170906545ULL)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)30))))) ? (max((16971649691979221123ULL), (((/* implicit */unsigned long long int) (unsigned char)134)))) : (var_4)))));
    var_19 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 1746210751U)) != (15669184776289693278ULL))) ? ((~(37505673U))) : (max((((/* implicit */unsigned int) var_2)), (((unsigned int) var_4))))));
}
