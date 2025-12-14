/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238477
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(unsigned char)9] [i_1])) & (((/* implicit */int) (unsigned char)20))))) | (((21U) / (21U))))));
                arr_6 [i_1] = ((min(((-2147483647 - 1)), (((/* implicit */int) arr_4 [i_0] [i_0])))) % (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_10), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) / (max((4294967273U), (var_12)))))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned char)255))));
                    var_16 = ((/* implicit */signed char) 1878213157U);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) 13U);
                                arr_21 [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551592ULL) | (((/* implicit */unsigned long long int) arr_7 [i_4]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) ^ (18446744073709551569ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)36)), (arr_19 [i_6] [(unsigned short)8] [i_4] [i_3] [i_2]))))))))));
                                var_18 = ((/* implicit */int) 4294967274U);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-5083)), (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-5083)) + (2147483647))) >> (((14199075647254178286ULL) - (14199075647254178275ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [2U]))) : (0U)))));
                    arr_22 [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_3] [i_4] [(unsigned short)8])) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) min((-778723140), (((/* implicit */int) (unsigned char)135))))))) < (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (unsigned char)243)), (4294967277U))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (unsigned int i_9 = 3; i_9 < 16; i_9 += 4) 
            {
                {
                    arr_32 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((((/* implicit */int) (signed char)-46)) + (2147483647))) >> (((((/* implicit */int) (signed char)-54)) + (77))))))) || (((/* implicit */_Bool) 2682047273U))));
                    arr_33 [i_7] [(unsigned char)8] [i_9 - 1] [i_7] = ((/* implicit */unsigned long long int) arr_25 [i_9] [i_9]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                {
                    arr_40 [i_12] [5U] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7103551877493944283ULL)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) 21U)) && (((/* implicit */_Bool) arr_28 [(unsigned short)8])))))))) : (22U)));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (signed char)50))));
                    arr_41 [i_10] = ((/* implicit */unsigned short) (((-(arr_35 [i_10]))) >> (((/* implicit */int) max((arr_29 [i_10] [i_10] [i_10]), ((!(((/* implicit */_Bool) 2147483647)))))))));
                }
            } 
        } 
    } 
}
