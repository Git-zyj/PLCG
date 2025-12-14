/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245942
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) max((arr_4 [i_0] [i_1] [i_1] [i_2]), (arr_4 [i_0] [i_0] [i_2] [i_2]))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-22230)))) - (max((8U), (((/* implicit */unsigned int) arr_1 [i_2] [i_1])))))));
                }
                arr_8 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (~(min((((18446744073709551610ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((max((14055423476173083741ULL), (((/* implicit */unsigned long long int) 4294967279U)))) < (((/* implicit */unsigned long long int) var_15))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((3U) * (3U))), (((/* implicit */unsigned int) var_11))))) >= (7076512938509921153ULL)));
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = (i_3 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_3])) >> (((((((/* implicit */_Bool) 16801146430865909220ULL)) && (((/* implicit */_Bool) arr_10 [i_3])))) ? (((/* implicit */int) arr_10 [i_3])) : (((((/* implicit */int) var_3)) / (((/* implicit */int) (short)-14689))))))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_3])) >> (((((((((/* implicit */_Bool) 16801146430865909220ULL)) && (((/* implicit */_Bool) arr_10 [i_3])))) ? (((/* implicit */int) arr_10 [i_3])) : (((((/* implicit */int) var_3)) / (((/* implicit */int) (short)-14689)))))) - (20))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3]))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (max((arr_14 [i_4]), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (unsigned short)31744)) * (((/* implicit */int) var_10))))))))));
        arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14784256021681643715ULL)) ? (max((((/* implicit */unsigned long long int) arr_15 [i_4])), (8616966472559663920ULL))) : (((/* implicit */unsigned long long int) max((((var_11) % (((/* implicit */int) (signed char)17)))), (((/* implicit */int) (signed char)4)))))));
        var_18 *= ((/* implicit */short) max(((signed char)-2), ((signed char)122)));
    }
    for (short i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */short) arr_17 [i_5] [i_5]);
        /* LoopNest 3 */
        for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    {
                        arr_29 [i_5 - 2] [i_5] [(short)19] [i_8] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) / (arr_28 [i_8] [(short)14] [i_8 + 1] [i_5] [i_8 + 1] [i_8 + 1])))) % (((7796315215965601824ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89)))))));
                        arr_30 [i_5] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)12))))));
                        arr_31 [i_5] [(unsigned short)14] [15U] = ((/* implicit */unsigned char) (short)32767);
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) var_5);
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(var_15)))) | (((unsigned long long int) (signed char)-1)))))));
}
