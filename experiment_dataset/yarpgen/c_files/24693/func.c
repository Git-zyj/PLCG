/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24693
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
    var_15 *= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_9 [i_0] [(unsigned short)2] [i_2 - 1] [i_3 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) & (var_12)))) + (((((/* implicit */unsigned int) ((/* implicit */int) (short)4))) + (1926762633U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_4))));
                            /* LoopSeq 3 */
                            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                            {
                                var_19 ^= ((/* implicit */unsigned int) arr_7 [i_0]);
                                var_20 ^= ((/* implicit */unsigned int) arr_11 [i_6] [i_5] [i_4] [i_1] [i_0 - 1]);
                            }
                            for (int i_7 = 2; i_7 < 22; i_7 += 3) 
                            {
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                                arr_24 [i_0] [i_1] [i_4] [i_5] [i_7] [i_7 - 2] = ((/* implicit */unsigned long long int) ((min((max((var_12), (((/* implicit */int) var_14)))), (((((/* implicit */int) var_13)) ^ (var_12))))) >> (((((/* implicit */int) var_6)) - (56597)))));
                                arr_25 [i_5] [i_1 - 1] |= ((/* implicit */signed char) arr_13 [i_0 + 1] [i_0] [(short)16] [i_0 + 1]);
                            }
                            for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) 
                            {
                                var_22 = ((/* implicit */int) var_10);
                                var_23 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [2LL] [i_5] [2LL] [2LL] [i_4])) || (((/* implicit */_Bool) var_7)))))))), (((((/* implicit */long long int) max((arr_18 [3ULL] [i_1] [1] [i_1] [16U] [i_1]), (arr_3 [i_8])))) * (max((((/* implicit */long long int) (signed char)39)), (-4780172495310751570LL)))))));
                            }
                            arr_29 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((min((min((arr_9 [i_5] [i_1 + 1] [i_4] [(unsigned short)22]), (((/* implicit */long long int) arr_3 [i_4])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1 - 1] [13ULL] [i_5] [i_1 - 1] [(signed char)12])) ? (var_2) : (var_12)))))) + (9223372036854775807LL))) << (((((((/* implicit */int) ((short) arr_16 [i_5] [i_1 - 1] [8ULL] [i_1 - 1] [i_0 - 1]))) + (24344))) - (4)))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (arr_2 [i_4] [i_5]) : (arr_2 [i_0] [i_0 + 1]))), (((/* implicit */unsigned int) ((2634471875U) != (arr_2 [i_0] [i_1 + 1])))))))));
                        }
                    } 
                } 
                arr_30 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) (+(var_0))))));
            }
        } 
    } 
}
