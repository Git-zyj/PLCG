/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231460
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
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((var_12) - (((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))));
                var_15 = (+(arr_0 [i_0] [i_1]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */int) var_11);
                arr_14 [i_2] = ((/* implicit */long long int) arr_11 [i_2] [i_2]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_7))));
        arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_4])) || (((/* implicit */_Bool) max(((+(((/* implicit */int) arr_11 [(_Bool)1] [(unsigned short)3])))), (((/* implicit */int) var_9)))))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32)) ? (min((((/* implicit */unsigned long long int) arr_0 [i_4] [i_4])), (var_1))) : (arr_7 [i_4])));
    }
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_3 [i_7 + 1] [i_7 + 1] [i_7 + 1])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_12 [i_6] [i_6]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_5] [11ULL] [11ULL] [i_8] [i_8]))))))))));
                                var_19 |= ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((arr_22 [i_5]) >> (((((/* implicit */int) var_5)) - (16189)))))))), (min(((~(arr_16 [i_5]))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_5] [i_8])) ^ (((/* implicit */int) arr_11 [i_9] [i_6])))))))));
                            }
                        } 
                    } 
                    arr_33 [i_5] [i_5] [i_5] |= ((/* implicit */_Bool) arr_6 [i_6]);
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) max(((+(arr_7 [i_5]))), (((/* implicit */unsigned long long int) var_9))));
                        var_21 |= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1047859961))))), ((unsigned short)65535)));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) (!(var_10)));
                        var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [2] [i_6]))))) ? (var_3) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)1216)), (4294967295U)))))), (((/* implicit */unsigned long long int) var_2))));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_36 [i_6] [i_7] [i_6] [i_6]))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_25 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_16 [i_5]))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32126))))))) : (arr_27 [i_5])));
    }
    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) var_2);
        var_27 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) 1267475520U)))));
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            for (long long int i_14 = 4; i_14 < 17; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    {
                        var_28 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_39 [i_15]))) : ((+(arr_39 [i_15])))));
                        var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) var_8)) ? ((+(var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_14 - 4] [i_14 - 4] [i_14] [i_14] [i_14])))))))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned int) var_9);
}
