/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193894
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
    var_14 |= ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 3] [i_0] |= var_2;
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */long long int) var_13))))))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned long long int) (~(var_11)))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 25)) : (16468030618381639104ULL)))));
                        arr_13 [i_4] [i_4] [13] [i_4] [i_1] = var_9;
                    }
                } 
            } 
            var_17 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 4]))))), (((/* implicit */unsigned long long int) var_6))));
            arr_14 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1620155771978938668LL)) ? ((+(0U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
            var_18 = ((/* implicit */long long int) var_5);
            var_19 = ((/* implicit */short) max((((/* implicit */int) ((short) arr_0 [i_1] [i_1]))), (((((/* implicit */_Bool) 14636572994704923237ULL)) ? (((/* implicit */int) (short)-16384)) : ((-2147483647 - 1))))));
        }
        for (long long int i_5 = 4; i_5 < 13; i_5 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((unsigned char) var_13));
            arr_18 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) 2088617282976015196LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (491520U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)17)))))));
            arr_19 [i_5 - 4] [i_1] = (+((+(((/* implicit */int) (unsigned char)255)))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned int) var_12));
                        var_22 = ((/* implicit */int) arr_7 [i_1] [i_5] [i_1]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                arr_29 [i_8] [i_8] = ((/* implicit */long long int) (signed char)-121);
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6))));
                arr_30 [i_1 + 2] [i_8 - 1] = ((/* implicit */long long int) (unsigned char)0);
                var_24 = ((unsigned char) arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_1]);
            }
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (short i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    {
                        var_25 -= ((/* implicit */signed char) ((unsigned int) (signed char)119));
                        arr_36 [i_1] [i_1 + 4] [i_1] [i_10] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_8 - 1] [i_8 - 1]))))) || (((/* implicit */_Bool) var_12))));
                        arr_37 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) 973203327U));
                        arr_38 [i_10] [(signed char)14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                        arr_39 [i_1] [i_11] [i_10] [i_1] [i_1] = ((/* implicit */int) (signed char)108);
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */long long int) max((((17175674880ULL) / (((/* implicit */unsigned long long int) 31LL)))), ((-(2013213162214078170ULL)))));
    }
}
