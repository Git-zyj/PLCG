/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40790
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
    var_13 = ((/* implicit */unsigned short) ((long long int) (+(18089790844076557187ULL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_7)))));
        arr_2 [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) - (var_1)))) ? (((((/* implicit */_Bool) (signed char)17)) ? (-439013696) : (((/* implicit */int) (unsigned char)40)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))));
    }
    var_15 = ((((/* implicit */_Bool) ((((_Bool) -6400536174646782242LL)) ? (min((((/* implicit */int) var_8)), (var_9))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned short) -821231951))) : (((((var_5) ? (var_3) : (((/* implicit */int) var_12)))) / (max((((/* implicit */int) var_5)), (var_9))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            {
                arr_10 [i_1] = max((min((max((((/* implicit */unsigned long long int) var_10)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (min((arr_8 [i_1] [i_1]), (((/* implicit */unsigned int) arr_6 [i_2]))))))));
                var_16 = (!(((/* implicit */_Bool) max((max((var_9), (-301086461))), (((/* implicit */int) max((arr_6 [1LL]), (((/* implicit */unsigned short) var_8)))))))));
                var_17 -= ((/* implicit */unsigned char) arr_4 [i_1] [(unsigned short)2]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) var_6);
                            arr_16 [i_3] [i_3] [i_4 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((signed char) arr_12 [i_1] [i_2] [i_3] [i_3]))) ? (var_9) : (var_3))) : (var_4)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (signed char i_8 = 4; i_8 < 9; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) 67108863)) / (4438457407467202078LL)))))));
                            arr_27 [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) (short)482));
                            /* LoopSeq 1 */
                            for (unsigned char i_9 = 2; i_9 < 8; i_9 += 2) 
                            {
                                var_20 = ((/* implicit */short) ((unsigned int) (_Bool)0));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_7))));
                                arr_31 [i_5] [i_6] [i_6] [i_7] [i_8 + 1] [i_5] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) > (var_1))));
                            }
                            /* LoopSeq 1 */
                            for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                            {
                                var_22 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) var_9)) | (max((1334746678U), (arr_8 [i_5] [i_6])))))), (arr_19 [i_8] [i_8])));
                                var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_8 - 1] [i_8] [i_8 - 4] [i_8] [i_10] [i_8 - 3]))))) ? (max((((arr_21 [i_10] [i_7] [i_6] [i_5 - 3]) | (((/* implicit */unsigned long long int) 3962666586U)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_24 [i_10] [i_8] [i_7])), (arr_19 [1U] [i_7])))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_0)))) * (((/* implicit */int) arr_1 [i_5 - 2]))))));
                            }
                        }
                    } 
                } 
                arr_35 [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((long long int) arr_18 [i_5])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_5 - 1] [i_5])) ? (((/* implicit */int) (short)-8800)) : (((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_7)))) : (max((((/* implicit */long long int) ((arr_15 [i_5] [i_6] [i_5] [i_5]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)29769))))), (((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_6] [i_5] [i_6])) ? (arr_28 [i_5 + 1]) : (((/* implicit */long long int) arr_22 [i_5] [i_5]))))))));
            }
        } 
    } 
}
