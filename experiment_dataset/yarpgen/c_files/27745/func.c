/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27745
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) ((_Bool) (unsigned short)4167))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) max(((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_2 [i_1]))))), (((/* implicit */unsigned int) arr_3 [i_0] [(_Bool)1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_12 |= (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) <= (((/* implicit */int) max((arr_7 [11ULL]), (((/* implicit */unsigned short) var_3)))))))));
                            var_13 |= ((/* implicit */unsigned long long int) 1208933315);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_4] [i_1] [i_0] [8] [i_5] = ((/* implicit */unsigned char) (~(arr_19 [(unsigned short)7] [i_1] [i_1] [i_5] [(unsigned short)5])));
                                var_14 = ((/* implicit */int) min((((arr_13 [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 24827180U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))))))), (min((((/* implicit */unsigned int) min((arr_8 [(_Bool)1] [i_1] [11]), (((/* implicit */unsigned short) var_3))))), (24827195U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (signed char i_11 = 2; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_38 [i_10] [i_11] [i_11 + 1] [i_11 - 1] [i_11 + 1])))), ((~(((/* implicit */int) arr_34 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_11 + 1]))))));
                                arr_39 [i_7] [(_Bool)1] [i_10] [i_10] [(_Bool)1] = ((/* implicit */_Bool) (unsigned char)206);
                                arr_40 [i_7] [18ULL] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) arr_31 [i_7] [i_8] [i_9] [i_10])) : (-1121942327))), (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_31 [i_11 + 1] [i_10] [i_8] [i_7])) : (((/* implicit */int) var_0))));
                                arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */_Bool) min(((+((+(562949953419264ULL))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_31 [i_10] [i_10] [i_10] [i_10]))))) / (min((var_8), (((/* implicit */unsigned long long int) arr_29 [i_7] [(unsigned short)21] [i_9] [i_9]))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) var_3);
                    var_17 = ((/* implicit */_Bool) (+(1490301373)));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_49 [i_9] [i_9] [5ULL] [(short)23] [i_13] [i_9] [i_9] = ((/* implicit */int) arr_25 [i_8] [i_12] [i_13]);
                                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_7] [i_9] [i_7]))) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)32747))))))) : (arr_32 [(_Bool)1] [i_7] [i_13])));
                                var_19 = ((/* implicit */unsigned short) (_Bool)0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_27 [i_7] [9LL] [i_9])) ? (((/* implicit */int) arr_34 [i_8] [i_9] [i_14] [i_9])) : (((/* implicit */int) var_3))))));
                                arr_54 [i_7] [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_8])) ? (arr_26 [i_9] [i_8]) : (arr_26 [i_8] [i_8])))) ? (((((/* implicit */_Bool) 2449199272U)) ? (18446744073709551615ULL) : (arr_26 [i_8] [(_Bool)1]))) : (arr_26 [i_7] [i_7])));
                                var_21 += var_0;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
