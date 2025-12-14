/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44708
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [(signed char)11] [(signed char)5] = arr_2 [(short)0];
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-64))))), (min((min((7211137670038275002LL), (((/* implicit */long long int) (unsigned short)38129)))), (max((((/* implicit */long long int) (unsigned short)38145)), (-1LL)))))));
                    var_11 ^= ((/* implicit */unsigned short) (-(min((min((((/* implicit */unsigned long long int) (signed char)38)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) (unsigned short)27406)) : (((/* implicit */int) (short)15468)))))))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) arr_2 [(signed char)1]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 3) 
    {
        arr_11 [8ULL] = ((/* implicit */long long int) 12755669402209002019ULL);
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) 7564242279592526665LL);
                    arr_19 [i_3] [12LL] [(unsigned char)7] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((long long int) (signed char)-60)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4]))) : (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                    var_14 += ((/* implicit */unsigned char) var_5);
                }
            } 
        } 
    }
    for (long long int i_6 = 2; i_6 < 16; i_6 += 3) /* same iter space */
    {
        arr_22 [(unsigned char)12] = ((/* implicit */unsigned char) min(((-(-9054698376471071975LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))) > (((((/* implicit */_Bool) (unsigned char)2)) ? (9759701821856663820ULL) : (18446744073709551615ULL))))))));
        arr_23 [i_6] [15] = ((/* implicit */unsigned long long int) 1LL);
        var_15 ^= ((/* implicit */unsigned long long int) var_7);
    }
    for (long long int i_7 = 2; i_7 < 16; i_7 += 3) /* same iter space */
    {
        arr_27 [4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((arr_15 [(signed char)19] [i_7]), (((/* implicit */int) arr_21 [8] [i_7])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)4] [(unsigned short)4] [i_7])))))))) ? (((((/* implicit */_Bool) -9223372036854775797LL)) ? (((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7]))) : (2875170604097953958LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38123))))) : ((~(var_5)))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_7] [i_7] [14ULL])) << (((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (min((12755669402209002019ULL), (((/* implicit */unsigned long long int) -4321090995107252113LL)))))) - (12755669402209002009ULL)))));
        arr_28 [(short)4] = ((/* implicit */int) min((7502136621331096795ULL), (880753381878495358ULL)));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_7 - 2] [i_7 - 2]))));
    }
}
