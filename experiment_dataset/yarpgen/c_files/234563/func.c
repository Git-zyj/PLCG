/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234563
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 *= min((8223965776539608382ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                                arr_12 [i_2] [(_Bool)1] [i_1] [i_2] [i_3] [14ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 18084367850391675709ULL))) ? (((((/* implicit */_Bool) ((arr_5 [i_0] [i_2]) & (562941363486720ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4225878661U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4]))))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2315577287U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-17)) == (((/* implicit */int) (signed char)16))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_1 - 4]), (((/* implicit */unsigned long long int) arr_10 [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1] [i_1]))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_1 - 4] [i_1 - 2] [i_1 + 1] [i_1 - 2]))) : (((((/* implicit */int) arr_7 [i_1 - 2] [i_1] [i_1] [i_1 + 1])) * (((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) min((((arr_14 [i_5] [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)50847))) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) (short)-26809)))))));
        arr_15 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_5])) / (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) (signed char)-19))))))) ? (max((arr_14 [i_5] [i_5]), (((/* implicit */unsigned long long int) (-(1602847950U)))))) : (((/* implicit */unsigned long long int) ((long long int) ((arr_14 [i_5] [i_5]) == (arr_14 [i_5] [(_Bool)1])))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))) : (((unsigned int) ((arr_13 [i_5]) ? (((/* implicit */int) (unsigned short)37547)) : (((/* implicit */int) (unsigned short)5)))))));
        /* LoopNest 2 */
        for (short i_6 = 4; i_6 < 22; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                arr_29 [i_5] [i_8] [i_7] [i_8] = ((/* implicit */short) min((((arr_22 [i_6 - 4] [i_6 - 3] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_6 - 3]))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) % (10222778297169943224ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37497)) || (((/* implicit */_Bool) arr_18 [i_5] [i_6])))))))));
                                var_22 *= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)193)), ((-(((/* implicit */int) ((((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_9] [i_5] [i_5])) != (((/* implicit */int) (signed char)1)))))))));
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_6 - 4] [i_7] = ((/* implicit */_Bool) ((unsigned char) arr_28 [i_7] [i_7]));
                }
            } 
        } 
        var_23 &= ((/* implicit */unsigned char) arr_20 [i_5] [i_5] [(_Bool)1]);
    }
    /* LoopNest 2 */
    for (long long int i_10 = 1; i_10 < 13; i_10 += 3) 
    {
        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            {
                arr_37 [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_10] [i_11])))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_5 [i_10 + 1] [(_Bool)1])))) ? (((/* implicit */int) (unsigned short)30465)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) < (2657008434U)))))))));
            }
        } 
    } 
}
