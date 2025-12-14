/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207932
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                arr_5 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)14424))));
                arr_6 [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_1 + 2]), (arr_2 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5343658001452914977LL)) ? (-5343658001452914978LL) : (((var_6) ? (var_5) : (arr_0 [i_0])))))) : (min((var_7), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (var_1)))))));
            }
        } 
    } 
    var_16 += -13LL;
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_5 = 3; i_5 < 15; i_5 += 1) 
                    {
                        arr_20 [i_5 - 3] [i_4] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -5343658001452914983LL)) ? (10274341605818647629ULL) : (((/* implicit */unsigned long long int) 2711929166U)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_12))))))));
                        var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 7483989597272983751ULL)) ? (3115143287073399087LL) : (5761744223492620201LL)))));
                        var_18 = ((/* implicit */long long int) (+(((((unsigned long long int) var_14)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            arr_26 [i_7] [i_4] [i_4] [i_4] [i_2] = arr_18 [i_2] [i_4] [i_4] [i_6] [i_4] [i_2];
                            var_19 *= var_11;
                        }
                        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2711929166U)) && (((/* implicit */_Bool) arr_25 [i_2] [i_3] [i_8 + 1]))));
                            var_21 = ((/* implicit */short) var_12);
                            arr_29 [i_8 + 1] [i_4] [i_2] [i_4 - 1] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) 3115143287073399087LL);
                            var_22 = ((/* implicit */short) min((var_22), ((short)32762)));
                            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)59335))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) ((long long int) var_5));
                    }
                    for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
                    {
                        var_25 *= ((/* implicit */unsigned short) ((long long int) min((arr_16 [i_9] [i_9 + 2] [i_9 - 1]), (((/* implicit */long long int) (unsigned short)9614)))));
                        /* LoopSeq 1 */
                        for (short i_10 = 2; i_10 < 14; i_10 += 3) 
                        {
                            var_26 -= var_0;
                            var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5652356702469134532LL)) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_4] [i_9] [i_10 + 1])) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [(short)4]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [i_2] [i_2] [i_2] [i_9 + 2] [i_10 + 1]), (arr_19 [i_2] [i_3] [i_4] [i_9] [i_9]))))) : (var_9)))));
                            arr_34 [i_4] [i_3] = ((/* implicit */unsigned short) max((((((((/* implicit */unsigned long long int) var_13)) + (var_4))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))))), (((arr_18 [i_2] [i_4] [i_4] [i_9] [i_4 - 1] [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_27 [i_4] [i_10]), ((short)-16389)))))))));
                        }
                        var_28 = min((((5343658001452914982LL) >> (((((/* implicit */int) var_11)) - (3068))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) (unsigned short)59335)) : (((/* implicit */int) var_0))))));
                    }
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) arr_13 [i_2] [i_3]);
                        var_30 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (-(arr_36 [i_2] [i_3] [i_3] [i_4] [i_11]))))) >> (((/* implicit */int) (_Bool)1))));
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((short) 7847826009659596743LL)))));
                        var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32762)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (min((3509114971664330226ULL), (3509114971664330226ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-13555))))))))));
                    }
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_2] [i_3] [i_4] [i_2] [i_2] [i_4 - 1] [i_4])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [i_4] [i_4 - 1]))))) : (max((0ULL), (((/* implicit */unsigned long long int) 5343658001452914977LL))))));
                }
            } 
        } 
    } 
}
