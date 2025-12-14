/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235457
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((int) min((var_10), (((/* implicit */long long int) arr_4 [i_0 - 4] [i_0])))));
                    arr_7 [i_2] [i_1 + 3] [i_0] = ((/* implicit */long long int) ((unsigned int) ((short) (_Bool)1)));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((long long int) min((((arr_0 [i_0]) | (arr_0 [12]))), (((/* implicit */int) min(((unsigned short)54050), (((/* implicit */unsigned short) (_Bool)0)))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_3 = 4; i_3 < 14; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_0 [i_3]))));
            var_17 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_3] [i_3 + 2]);
            arr_10 [i_3] [i_3 - 2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_0 + 1]), (arr_5 [i_0 + 2])))) ? (min((max((((/* implicit */long long int) (unsigned short)511)), (7997810669994203021LL))), (((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((arr_2 [i_0 + 2] [i_3] [i_3 + 2]) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 - 4])))))));
            arr_11 [i_0] [i_3] = ((/* implicit */long long int) ((unsigned short) (-((~(var_6))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_1 [i_3]))));
        }
        var_19 = min((min((((/* implicit */long long int) var_1)), (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (arr_2 [i_0 - 2] [i_0 - 2] [i_0]));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (long long int i_5 = 2; i_5 < 11; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_29 [i_4] [i_4] [(short)0] [i_8] [i_5] = ((/* implicit */short) ((((((/* implicit */int) arr_18 [i_4] [i_6 + 1] [i_8 - 1])) > (((/* implicit */int) (unsigned short)57944)))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_6 + 1]))))), (min((((/* implicit */long long int) arr_20 [i_6])), (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_6] [i_5 - 1] [i_5])) < (((/* implicit */int) (unsigned short)63033))))))));
                                arr_30 [i_5] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_5 - 1] [i_8 + 1])) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) arr_4 [i_5 - 1] [i_8 - 1])))), (((((/* implicit */_Bool) arr_4 [i_5 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_8 - 1])) : (((/* implicit */int) (unsigned short)14970))))));
                                arr_31 [i_8] [i_5] [i_6 + 2] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -2281619766242405230LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)35612))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 2; i_11 < 12; i_11 += 1) 
                        {
                            {
                                arr_40 [i_5] [i_5] [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_5 + 1] [i_11 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)21982), ((unsigned short)65535))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36727)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31613))))) ? (-553123387) : (arr_0 [i_4])))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) (short)3)))) : ((~(var_7)))))) ? (((((/* implicit */_Bool) 5237687581938113305LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10982))) : (-5237687581938113307LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) var_0)) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) != (((/* implicit */long long int) var_5)))))))))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) (~(-5237687581938113306LL)));
                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_5]))))) <= (((/* implicit */int) (unsigned short)19996))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_7)) : (var_6))) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_0))))))));
}
