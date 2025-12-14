/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29330
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
    var_17 &= ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (unsigned char)213);
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (-8541458615557637454LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                var_19 -= (unsigned char)224;
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (~(((unsigned int) ((((/* implicit */int) (unsigned char)224)) & (((/* implicit */int) (short)15267)))))));
                            var_21 = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */short) (!((_Bool)1)));
                                var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned char)224), (var_11)))), ((~(arr_17 [i_4] [i_4] [i_5] [i_4] [i_7] [i_8])))))) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (((~(((/* implicit */int) arr_14 [i_7])))) != (min((arr_13 [i_8]), (((/* implicit */int) (unsigned char)31)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_25 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) (unsigned short)55051))));
                            var_25 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-70)))))));
                            arr_26 [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)224)) < (arr_13 [i_10]))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned char)32)), (8796093022176ULL))) < (((/* implicit */unsigned long long int) ((arr_15 [i_4] [i_9] [i_10]) & (((/* implicit */int) (unsigned char)127)))))))) : (((/* implicit */int) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)32)) && (((/* implicit */_Bool) (short)4731))))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_13)) - (193)))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_16 [i_4 + 1] [i_4] [i_4] [i_5]))))) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_4] [i_4 - 1])))) - (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)8)) & (((/* implicit */int) (unsigned char)0))))) ? ((~(((/* implicit */int) arr_12 [i_4 - 1] [i_5])))) : (((/* implicit */int) (unsigned char)224)))))))));
                /* LoopSeq 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_22 [i_11] [(signed char)5]))));
                    var_28 = ((/* implicit */int) (!(((arr_14 [i_5]) || (((((/* implicit */_Bool) (short)16438)) || ((_Bool)0)))))));
                    var_29 *= ((/* implicit */unsigned short) ((var_6) + (max((min((((/* implicit */unsigned long long int) (unsigned char)0)), (6720697568922512177ULL))), (((/* implicit */unsigned long long int) (unsigned char)224))))));
                    arr_29 [i_4] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)32)), ((short)-29350))))) % (min((var_1), (((/* implicit */long long int) (unsigned char)209))))))));
                }
                for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    arr_32 [11LL] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15342)) >> (((7695952165689094223LL) - (7695952165689094215LL)))));
                    var_30 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((var_8), (((/* implicit */int) (short)(-32767 - 1)))))))) && (((((/* implicit */_Bool) (unsigned char)209)) || (((/* implicit */_Bool) var_11))))));
                    arr_33 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4 - 1])) << (((((/* implicit */int) (short)16438)) - (16416))))))));
                    var_31 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)22))) / (7244402467466696405LL)))));
                }
            }
        } 
    } 
}
