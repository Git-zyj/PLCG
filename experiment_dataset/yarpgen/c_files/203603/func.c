/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203603
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_5 [i_4] [i_1]))) <= (((/* implicit */int) arr_7 [i_4] [i_1] [i_4] [i_3] [i_4]))));
                                arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_11)))), (((min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_3] [i_4])), (133169152ULL))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) var_3))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))) | (var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) : (max((((/* implicit */unsigned long long int) arr_5 [i_4] [i_4])), (8ULL)))));
                                var_22 = ((/* implicit */_Bool) arr_5 [i_1] [i_0]);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) + (((((/* implicit */int) arr_3 [i_0] [i_0])) << (((((/* implicit */int) min((arr_3 [i_2] [i_2]), (((/* implicit */unsigned char) var_15))))) - (151)))))));
                }
            } 
        } 
        var_24 += ((/* implicit */unsigned short) 0ULL);
        var_25 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2ULL)))) && (((/* implicit */_Bool) ((long long int) max((var_0), (2ULL)))))));
        var_26 |= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])), (0ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        var_27 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255)))))));
        arr_15 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_5])) ^ (18446744073709551613ULL)))) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)17154))));
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_6))));
    }
    var_30 += ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    var_31 += ((/* implicit */long long int) ((min((var_10), (((/* implicit */long long int) ((var_0) >= (var_16)))))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_6] [i_6])) & (((/* implicit */int) var_18)))))));
                    var_32 &= ((/* implicit */_Bool) (short)-23932);
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62293)) & (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) (unsigned short)50705))))))));
}
