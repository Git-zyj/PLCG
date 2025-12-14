/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229149
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : ((-9223372036854775807LL - 1LL)))))))) || (((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_1]) + (arr_3 [i_1])))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_1])), (4144170346796768885ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)91)), ((short)(-32767 - 1))))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
                arr_6 [i_1] = ((/* implicit */short) arr_3 [i_1]);
                var_16 *= ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) 1027575485U)) ? (var_2) : (arr_2 [(short)8]))))), (((/* implicit */unsigned int) max((((int) 499327497)), (((/* implicit */int) var_11)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((min((816734493), (((/* implicit */int) ((((/* implicit */int) (short)-144)) >= (arr_7 [i_2] [i_2])))))) * (((/* implicit */int) var_3))));
        var_17 ^= ((((arr_7 [i_2] [i_2]) + (2147483647))) >> (((/* implicit */int) arr_8 [i_2])));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */short) (-(max((((/* implicit */unsigned int) (short)1213)), (max((3226978889U), (((/* implicit */unsigned int) (short)0))))))));
            var_18 = ((/* implicit */unsigned short) var_0);
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (short)18881);
                        var_20 -= 8811644460021130453ULL;
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) arr_13 [(unsigned short)12]);
        }
        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147475456U)) && (((/* implicit */_Bool) arr_16 [i_2] [i_2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (((arr_23 [i_2] [i_7]) ? (var_1) : (433282980440276974ULL))))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                var_23 = ((/* implicit */int) var_3);
                var_24 *= ((/* implicit */unsigned short) max(((short)-55), (((/* implicit */short) var_10))));
                arr_26 [i_2] [i_2] [i_7] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_10)), (((3806489075U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_7] [8] [i_2] [i_2] [i_8])))))));
                var_25 = (~(((((/* implicit */unsigned int) ((int) arr_18 [i_8]))) * ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8]))) : (872853222U))))));
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169)))));
                var_27 |= ((/* implicit */unsigned long long int) ((short) (short)4214));
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (short)-18))));
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                {
                    arr_31 [i_2] [i_7] [i_9] [i_9] [i_10] = ((/* implicit */short) ((long long int) arr_30 [i_2] [i_7] [i_7] [i_7] [i_9] [i_9]));
                    arr_32 [i_2] [i_2] [i_9] [i_9] [i_2] = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_7] [i_9]);
                    arr_33 [10ULL] [i_9] [i_9] [i_7] [i_2] = ((/* implicit */short) ((unsigned long long int) arr_8 [i_2]));
                }
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                {
                    arr_38 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) 2147483647);
                    var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [(unsigned short)12])) || (((/* implicit */_Bool) (unsigned char)230))));
                }
            }
        }
        arr_39 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [(_Bool)1])) || (((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2])))))))) >= (((max((872853222U), (((/* implicit */unsigned int) (short)0)))) << (((/* implicit */int) ((562881233944576ULL) >= (((/* implicit */unsigned long long int) arr_18 [(signed char)16])))))))));
    }
}
