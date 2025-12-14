/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229504
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
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 7; i_2 += 2) 
            {
                {
                    var_20 = (-(((((/* implicit */_Bool) ((short) arr_1 [i_1]))) ? (((((/* implicit */_Bool) 3932160)) ? (288230376151711728LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))))) : (((/* implicit */long long int) ((/* implicit */int) var_18))))));
                    var_21 = ((/* implicit */signed char) (~((-(((/* implicit */int) (signed char)24))))));
                    arr_7 [i_0 + 2] [i_0 - 1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)115))))) >= (min((((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */long long int) var_4))))), (min((var_13), (((/* implicit */unsigned long long int) (signed char)25))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_18)), ((~(arr_3 [4ULL]))))))));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)24)) ? (3124252204237142641LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)25)))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    arr_18 [i_3] [i_4] [i_3] [i_6] [i_3] = ((/* implicit */signed char) var_5);
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((var_11) | (((((/* implicit */int) (short)17942)) << (((arr_16 [i_3] [i_4] [i_3] [i_6]) - (13525823516281497442ULL))))))))));
                    var_25 += ((/* implicit */long long int) (((~(var_0))) <= (((/* implicit */unsigned long long int) ((491828341) << (((((var_6) + (3265390251274553460LL))) - (3LL))))))));
                }
                for (signed char i_7 = 3; i_7 < 16; i_7 += 1) 
                {
                    arr_22 [i_3] [i_7] [(signed char)1] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 5833757045437173141LL)) + (arr_13 [i_7 + 1] [i_7 - 2] [i_7 - 3])));
                    var_26 = ((/* implicit */int) ((long long int) arr_21 [i_7 - 1] [i_3] [i_7] [(short)16]));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (short i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)24)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9 - 1])))));
                            arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5] [i_8])) && (((/* implicit */_Bool) arr_16 [i_5] [i_8] [i_5] [i_8]))));
                            var_28 |= ((/* implicit */int) -6807231488463302147LL);
                        }
                    } 
                } 
            }
            for (long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
            {
                arr_31 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-24))));
                var_29 = ((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) ^ (var_9))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) -849680948)) && (((/* implicit */_Bool) var_12)))))));
            }
            arr_32 [i_3] = ((/* implicit */int) var_1);
            var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))) : (288230376151711720LL))) + (var_15)));
        }
        for (int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_12))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1399135716)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (signed char)-17))))) ? (arr_21 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (signed char)123))))))))));
            var_32 -= ((/* implicit */unsigned char) 16777215);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_33 = 2147483647;
            arr_39 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-1037590036))))));
        }
        var_34 = ((/* implicit */unsigned char) arr_29 [i_3] [i_3]);
        var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) ((978320731) == (((/* implicit */int) (signed char)-1)))))), (((((/* implicit */_Bool) 10480220116713995810ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) -849680948)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_0)))))));
    }
    for (signed char i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_17) / ((-(var_16))))))));
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (((((+(288230376151711728LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)44)) <= (arr_23 [i_13] [1LL] [i_13] [i_13]))))))) ^ (884740943184785196LL))))));
        var_38 += (~(((int) var_8)));
    }
    for (signed char i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
    {
        arr_46 [i_14] [i_14] = ((/* implicit */int) (unsigned char)254);
        var_39 -= ((/* implicit */unsigned char) ((int) (signed char)48));
    }
    var_40 = ((((var_7) + (9223372036854775807LL))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)25)) ? (-288230376151711721LL) : (5833757045437173155LL))) < (-288230376151711720LL)))));
    var_41 = ((/* implicit */unsigned long long int) (unsigned char)99);
    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) 5833757045437173156LL)) ? (((((((/* implicit */unsigned long long int) var_16)) != (var_1))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-25))))) : (((((/* implicit */_Bool) -6112342114928900937LL)) ? (var_5) : (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
