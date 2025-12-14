/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35579
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
    var_18 = ((/* implicit */unsigned int) var_13);
    var_19 += ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32767)))))), ((+(((/* implicit */int) var_2))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                                var_21 = ((/* implicit */int) arr_3 [i_0] [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) (short)32767);
                                arr_18 [i_1] [i_1] [i_6] = ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 3] [i_1] [i_5 - 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [4ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (66977792) : (((/* implicit */int) arr_5 [i_0] [i_0] [(short)4] [i_0]))))) ? (((arr_13 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_16 [i_0] [(signed char)9] [i_0 - 1] [i_0])) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (unsigned char)249))))));
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 22; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    {
                        arr_32 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (unsigned char)55))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_29 [i_7] [7] [i_9] [7]))))) ? (((arr_29 [i_10] [i_9] [i_7 - 2] [i_7 - 2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_29 [i_8] [i_8] [i_9] [i_10])))) : (((((/* implicit */_Bool) (unsigned char)201)) ? (var_9) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_10]))))));
                        arr_33 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_10])) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9069))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)55)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        arr_34 [20ULL] [(_Bool)1] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        arr_35 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (unsigned char)185)) > (((/* implicit */int) var_12)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_10))));
                    arr_40 [i_7 - 1] [i_7] [(_Bool)1] [i_12] = ((/* implicit */unsigned long long int) var_7);
                }
            } 
        } 
        var_25 = (_Bool)0;
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_5))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 10; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            for (short i_15 = 2; i_15 < 10; i_15 += 3) 
            {
                for (short i_16 = 1; i_16 < 11; i_16 += 3) 
                {
                    {
                        var_27 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-99)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))) : ((-(var_15)))));
                        var_28 = ((/* implicit */unsigned long long int) arr_43 [i_13] [(_Bool)1]);
                        arr_56 [i_13] [i_13] [i_15] [i_13] = ((/* implicit */_Bool) var_15);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_13 - 1] [i_13])))))));
    }
}
