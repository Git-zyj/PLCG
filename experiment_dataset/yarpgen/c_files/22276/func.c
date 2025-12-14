/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22276
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
    var_18 = ((/* implicit */long long int) ((((int) (-(((/* implicit */int) var_5))))) - (((/* implicit */int) var_14))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [7U] |= arr_0 [i_0];
        var_19 = ((unsigned short) ((unsigned long long int) arr_2 [i_0 - 1]));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((-1LL) + (-24LL)));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) ((max((-21LL), (((/* implicit */long long int) arr_0 [i_1])))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2])) && (((/* implicit */_Bool) arr_5 [i_1] [i_0]))))))))))))));
                                arr_15 [i_0] [i_1] [i_4] [i_3] [i_4] = max((6529980838855527053ULL), (max((((11916763234854024562ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64756))))), (((/* implicit */unsigned long long int) ((((-2) + (2147483647))) >> (((6529980838855527053ULL) - (6529980838855527043ULL)))))))));
                                var_22 = (((+(max((arr_5 [i_1] [i_1]), (var_4))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64165)) << (((((((/* implicit */int) (short)-11006)) + (11028))) - (14)))))) > ((~(arr_4 [(_Bool)1] [i_0]))))))));
                            }
                        } 
                    } 
                    arr_16 [(unsigned char)2] = ((/* implicit */unsigned int) arr_13 [i_1] [i_1]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            arr_21 [i_5 - 1] [i_0] = ((/* implicit */signed char) ((long long int) ((arr_20 [i_5 - 2] [(unsigned char)3] [i_0 - 1]) ^ (arr_20 [i_5 - 2] [(signed char)10] [i_0 - 1]))));
            /* LoopNest 3 */
            for (unsigned int i_6 = 4; i_6 < 20; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8160)) || (((/* implicit */_Bool) (short)-12743))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (signed char)(-127 - 1))))) != (((int) arr_10 [i_7] [i_5] [i_6] [i_7]))))))));
                            arr_30 [i_7] [i_5] [i_5 + 1] [i_5] = ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_0] [i_0 - 1])) + (2147483647))) >> (((arr_27 [i_0] [i_5] [i_5] [i_7] [i_7]) + (7556241482970084493LL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            var_24 = min((((unsigned int) arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1])), (((/* implicit */unsigned int) ((_Bool) arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
            var_25 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (~(arr_20 [i_0 - 1] [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_0] [i_0])) >> (((((/* implicit */int) var_14)) + (23988)))))) : (((((/* implicit */_Bool) arr_25 [8ULL] [(signed char)19])) ? (arr_18 [i_0]) : (((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_0 - 1] [i_9])))))));
            arr_33 [1U] [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_16)), (var_15))) >> ((((~(arr_5 [i_0 - 1] [i_0 - 1]))) - (2649048953U)))));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) var_16);
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_11))));
        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1)) && (((/* implicit */_Bool) arr_36 [i_10])))))));
    }
    /* LoopNest 2 */
    for (short i_11 = 1; i_11 < 18; i_11 += 4) 
    {
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            {
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)254)) * (((/* implicit */int) (short)-31529))));
                var_30 = ((/* implicit */unsigned long long int) (short)32763);
                /* LoopNest 3 */
                for (unsigned short i_13 = 2; i_13 < 17; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) ((18446744073709551592ULL) * (((unsigned long long int) arr_38 [i_11]))));
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((signed char) (unsigned short)1370)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((arr_14 [(unsigned short)13]) >= (((/* implicit */unsigned long long int) 11))))) < (((/* implicit */int) arr_23 [i_11 - 1] [i_13 - 1])))))) : (((((/* implicit */_Bool) arr_10 [i_13] [i_11 + 1] [i_15 + 1] [i_11 - 1])) ? (arr_10 [i_11] [i_11 + 1] [i_15 + 1] [17LL]) : (arr_10 [13] [i_11 - 1] [i_15 + 1] [7LL])))));
                                var_33 -= ((/* implicit */long long int) arr_18 [i_12]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
