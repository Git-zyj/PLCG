/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238118
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_3)) ? (10030134020286427376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) : (((((/* implicit */_Bool) 7344256802688937877LL)) ? (10030134020286427357ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41071))) / (((((8416610053423124260ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24470))))) ? (min((((/* implicit */long long int) var_2)), (137438822400LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [11LL])) && (((/* implicit */_Bool) -6180625766722770113LL)))))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] &= ((((arr_4 [i_2] [i_2]) >> (((6180625766722770115LL) - (6180625766722770059LL))))) < (814331783453727891LL));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_4 + 2])) * (((/* implicit */int) arr_8 [i_4 + 2]))));
                    arr_17 [i_4 + 1] [i_2] = ((/* implicit */unsigned short) 4294967290U);
                    arr_18 [i_2] [9LL] = ((/* implicit */int) ((10030134020286427384ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 1114925695U))))))));
                    var_23 = ((/* implicit */unsigned char) ((arr_14 [3LL] [i_4 + 1] [i_4 + 2]) < (arr_13 [i_4] [i_4 + 2] [i_4])));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) / (4140184180U))))));
                        arr_23 [(short)2] = ((/* implicit */unsigned char) (short)-1);
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_3])) ? (-5862067947896150006LL) : (arr_22 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) var_16)))))) : (154783135U)));
                        var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) arr_25 [i_4 + 1] [i_4 + 2] [i_4 - 1] [(short)8] [i_4 - 1] [i_4 + 2])) : (((/* implicit */int) var_3))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_7 = 1; i_7 < 11; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    {
                        arr_36 [i_2] |= ((/* implicit */int) arr_26 [i_9 + 1] [i_7] [i_7] [i_2] [i_7] [i_2]);
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-(-137438822407LL))))));
                    }
                } 
            } 
        } 
        arr_37 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_4)))))));
    }
    for (long long int i_10 = 2; i_10 < 22; i_10 += 4) 
    {
        arr_40 [i_10] = ((/* implicit */_Bool) min((-814331783453727918LL), (((/* implicit */long long int) (signed char)4))));
        arr_41 [i_10] = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)241)))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)100))))) : (((/* implicit */int) var_5))))));
    }
}
