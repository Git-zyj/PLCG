/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49816
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), ((~(11974737804108804710ULL)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 6; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? ((-(-1699042150))) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)58231)))))));
                            arr_14 [(_Bool)1] [i_1] [i_2] [8U] [i_0] [(signed char)0] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2520477612U)));
                        }
                        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((short) 1152919305583591424ULL)))))));
                            arr_18 [(_Bool)1] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 134217727)) || (((/* implicit */_Bool) var_2)))))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_15 [i_5] [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2])))));
                        }
                        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (short)30107)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0])))))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */int) (short)3334)) : (((/* implicit */int) arr_16 [i_2] [i_1] [i_2] [(short)8] [9] [i_0] [i_0])))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(arr_7 [i_0])))) / (var_3)));
                        var_16 = ((/* implicit */long long int) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_8 [i_0] [i_0] [i_0]))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)864)) : (((/* implicit */int) (_Bool)0)))))))) : (max((425120016437813334ULL), (((/* implicit */unsigned long long int) (unsigned char)79))))));
                    }
                } 
            } 
        } 
    }
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) (unsigned short)45350)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (unsigned short)5476)))) : (var_8)));
}
