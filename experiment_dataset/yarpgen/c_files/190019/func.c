/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190019
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (((-(((/* implicit */int) var_9)))) == (((/* implicit */int) ((unsigned char) arr_1 [i_1])))))) & (((/* implicit */int) (short)-30386))));
                        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : ((~(((/* implicit */int) arr_10 [i_2]))))))) : ((~(((549755805696ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3])))))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */short) (-(var_2)));
        var_13 = ((/* implicit */signed char) -1690013173267624184LL);
    }
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_22 [i_6] [i_5] [i_6 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1690013173267624212LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 7131829359791700941ULL)) ? (arr_0 [i_4]) : (((/* implicit */unsigned long long int) arr_6 [i_4] [i_6 - 1])))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)4))))))))) : (18446744073709551604ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_14 = min((max((((/* implicit */unsigned long long int) 1612799016U)), (144115188067467264ULL))), (((/* implicit */unsigned long long int) (unsigned char)56)));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (arr_27 [i_4] [i_6 + 1] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_6 + 1] [i_8]))))), (((/* implicit */unsigned int) arr_4 [i_6] [i_7 + 1] [i_8])))))));
                                var_16 = ((/* implicit */short) ((((var_6) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)160)) : (arr_6 [i_7 + 1] [i_6 - 4])))))) / (((/* implicit */unsigned int) ((((/* implicit */int) (short)4)) / (((/* implicit */int) ((unsigned char) (short)4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)127)) : ((-(((/* implicit */int) (signed char)77))))))) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) max((((/* implicit */short) arr_17 [i_4] [i_4] [i_4])), (arr_14 [i_4]))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
    {
        var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6943)) ? (7131829359791700923ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9] [i_9] [i_9])))));
        var_19 |= ((/* implicit */signed char) var_3);
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)64)))))));
        var_20 = ((/* implicit */unsigned char) 1690013173267624184LL);
    }
    var_21 = ((/* implicit */unsigned char) var_6);
}
