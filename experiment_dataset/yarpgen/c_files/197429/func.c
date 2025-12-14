/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197429
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_10 = var_1;
                                var_11 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_3 [i_4] [i_3] [1U])) ? (arr_0 [i_1] [i_3]) : (((/* implicit */int) (short)32753)))) / (((/* implicit */int) ((signed char) var_6)))))));
                                arr_13 [i_0 - 3] [i_1] [i_1] [i_3] [(unsigned short)0] [i_1 - 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) arr_0 [i_4] [i_4])) / (var_7))), (((/* implicit */long long int) min((((/* implicit */int) var_2)), (1338131242))))))), (var_8)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_12 = ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_2)), (arr_18 [i_1]))), (arr_18 [i_1])))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) -1338131270)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1392320429U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_7 [i_5] [i_0] [i_0])), (var_2))))))) : (var_9));
                            var_13 = ((/* implicit */long long int) 3961131696U);
                            arr_19 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_5] [6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_0 - 2] [i_0 + 2] [i_1 - 1] [i_1 + 1])), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (arr_3 [i_0 + 2] [i_1 + 1] [5U])));
                            var_14 &= ((/* implicit */_Bool) ((var_8) & (((((/* implicit */_Bool) ((unsigned long long int) 10ULL))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) arr_10 [(unsigned char)14] [i_6] [i_5] [i_0] [(unsigned char)14]))))));
                            arr_20 [i_0 + 2] [i_1] [i_5] [10ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(unsigned short)7] [i_1] [i_0 + 1])) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_1] [i_0] [7LL])), (arr_9 [i_0 - 3] [i_0] [i_0 - 3] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 2; i_7 < 18; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (unsigned int i_10 = 3; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) 9223372036854775806LL);
                            var_16 = ((/* implicit */unsigned short) 333835608U);
                            var_17 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((var_9) ^ (arr_21 [i_7] [i_8])))), (min((((/* implicit */unsigned long long int) var_9)), (var_5)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (long long int i_12 = 1; i_12 < 17; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_42 [i_7] [i_13] [i_13] [i_12] [i_13] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_32 [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_7 - 1])), (var_5))), (((/* implicit */unsigned long long int) ((short) var_9)))));
                                arr_43 [i_11] [i_11] [i_11] [i_13] [i_13] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (arr_29 [i_8] [i_8])))), (((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5)))))));
                                arr_44 [i_7] [i_8] [i_7] [i_7] [i_13] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_26 [i_7] [i_8])) ? (((/* implicit */int) arr_26 [i_11] [i_8])) : (((/* implicit */int) arr_26 [i_7] [i_7])))) ^ (((/* implicit */int) ((unsigned short) (signed char)114)))));
                                var_18 = ((/* implicit */long long int) (~(3961131687U)));
                                arr_45 [(signed char)0] [(unsigned short)7] [(unsigned short)12] [i_12 - 1] [i_12 - 1] [i_13] [i_12 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((var_1) / (((/* implicit */long long int) 4004400630U))))))) ? (min((min((((/* implicit */long long int) var_6)), (6338662233103944987LL))), (min((-7636554346446874653LL), (((/* implicit */long long int) (unsigned short)19170)))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (short)-3347))))))));
                            }
                        } 
                    } 
                } 
                arr_46 [i_8] [i_7 - 1] = ((/* implicit */unsigned long long int) var_1);
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((short) (~(((((/* implicit */_Bool) arr_29 [i_14] [i_14])) ? (((/* implicit */int) arr_49 [i_15] [i_14] [i_8] [i_15])) : (((/* implicit */int) var_2)))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_5))))))), (((((/* implicit */_Bool) 2190393394960227636LL)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-9223372036854775799LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
