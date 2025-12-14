/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234957
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
    var_17 &= ((/* implicit */unsigned long long int) (~((-(3843600282U)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_3 - 1] [i_3 + 1])) << (((((/* implicit */int) arr_4 [i_1 + 1] [i_3 + 1] [i_3 - 1])) - (61926)))))) ^ (min((((/* implicit */long long int) 451367007U)), (-888739902209019355LL)))));
                        var_19 = ((/* implicit */int) ((short) min((((/* implicit */long long int) arr_2 [i_3 + 1])), ((+(1986349221209817978LL))))));
                    }
                    arr_12 [i_0] [i_2] [i_2] [i_0] = (-(((int) (~(3843600283U)))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_1 [i_0] [i_1 - 1])))) ? (((((/* implicit */_Bool) (unsigned short)42373)) ? (3843600288U) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (short)-28286))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))) <= (((((/* implicit */_Bool) 10297437480780510417ULL)) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51406))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_2);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (-1639270939) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) (short)28310))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) arr_14 [i_4]);
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_14 [i_4])))) ? (((((/* implicit */_Bool) 3550920445917890691LL)) ? (arr_13 [i_4]) : (((/* implicit */unsigned int) arr_14 [i_4])))) : (((/* implicit */unsigned int) ((int) 3843600276U)))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */int) ((1040269847253519430ULL) <= (((/* implicit */unsigned long long int) arr_13 [i_5]))));
        var_25 = ((/* implicit */unsigned int) ((arr_5 [i_5] [i_5] [i_5]) - (arr_5 [i_5] [i_5] [i_5])));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_3 [i_5]) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5] [i_5])))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (-549031341) : (((/* implicit */int) arr_0 [i_5]))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        var_27 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)49)) ? (451366998U) : (((/* implicit */unsigned int) -549031341)))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_5] [i_5] [i_8])) * (((/* implicit */int) arr_21 [i_5] [i_5] [i_5])))))));
                        var_28 = arr_7 [i_6];
                        arr_28 [i_5] [i_6] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_8] [i_7] [i_7] [i_6] [i_5])) ? (arr_26 [i_5] [i_6] [i_7] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_7])))));
                    }
                } 
            } 
        } 
    }
}
