/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238515
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
    var_18 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_1] [i_2] [i_1])), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))) : (arr_5 [6LL] [i_3] [i_3])))));
                                var_20 = (((!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_2])))) ? (((((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_1] [i_0 + 3] [i_2] [i_0 + 3])) || (((/* implicit */_Bool) var_15)))) ? (((arr_8 [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (arr_10 [i_0] [i_2] [i_2] [i_0] [i_3] [i_2])))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_10))))));
                                var_21 = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(arr_15 [i_6 - 2])))) < (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_6 + 2] [(short)14] [i_0 - 1])) - (((/* implicit */int) arr_4 [i_5 - 1]))))), (var_17)))));
                            var_22 = ((/* implicit */unsigned int) (~(max((arr_11 [i_6 + 1] [i_6 - 3] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]), (((/* implicit */int) (short)-17316))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) max((arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_7] [i_0 + 1]), (arr_9 [i_0] [i_0 - 1] [i_0 + 3] [i_7] [i_0 + 1])))) : (((long long int) arr_5 [i_7] [i_0 + 2] [i_7])))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [i_7])))) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (((unsigned long long int) var_11))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_1 [i_0])))))) : (((/* implicit */int) max((arr_4 [i_0 + 3]), (arr_20 [i_0 + 3] [i_0 + 1] [i_0 - 2])))))))));
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (arr_12 [i_0]) : (((/* implicit */int) arr_7 [i_0 - 2] [i_7] [i_8]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_8])) : (((/* implicit */int) (unsigned short)55427))))) : (min((((/* implicit */long long int) arr_20 [i_7] [i_7] [i_0 + 1])), (arr_8 [i_1]))))))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 + 1]) - (arr_11 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0 + 3] [i_0 + 2])))) ? (min((((/* implicit */long long int) (signed char)34)), (-4LL))) : (((/* implicit */long long int) (+(arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        for (short i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            {
                arr_29 [i_9] [i_10] [i_9] = ((/* implicit */unsigned long long int) var_10);
                /* LoopNest 2 */
                for (short i_11 = 3; i_11 < 15; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) -26LL))) < (max((arr_15 [i_9]), (arr_10 [i_9] [i_12] [i_9] [i_9] [i_9] [i_9])))))) : (((((/* implicit */_Bool) arr_5 [i_12] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) ((((/* implicit */int) (short)10)) < (1869500721)))) : (((/* implicit */int) min((arr_4 [i_9]), (((/* implicit */short) (_Bool)1)))))))));
                            arr_36 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1797238030)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52888)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) -1797238051))) ? (((/* implicit */long long int) ((var_5) << (((arr_2 [i_9]) - (2026931484U)))))) : ((+(arr_8 [i_9])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9])) || (((/* implicit */_Bool) var_14))))), ((+(arr_28 [i_11] [i_10] [i_11])))))));
                            var_28 = ((/* implicit */int) ((((_Bool) (~(arr_2 [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_12))))))) : (((((/* implicit */_Bool) arr_5 [i_12] [i_11 + 3] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9] [i_11 - 2] [i_11]))) : (arr_5 [i_12] [i_11 - 3] [i_11])))));
                        }
                    } 
                } 
                arr_37 [i_9] [i_9] = ((/* implicit */int) arr_25 [i_9] [i_9]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            {
                var_29 ^= ((/* implicit */unsigned short) (-((((~(var_8))) >> ((((+(((/* implicit */int) var_16)))) - (197)))))));
                var_30 = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                var_31 = ((/* implicit */int) arr_44 [i_15 - 1] [i_15 - 1]);
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_13))));
            }
        } 
    } 
}
