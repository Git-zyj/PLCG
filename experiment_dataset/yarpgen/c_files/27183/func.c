/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27183
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
    var_17 = ((/* implicit */unsigned short) ((unsigned char) var_2));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)59925)) ? (((/* implicit */int) (unsigned short)59895)) : (((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_7 [i_0] [i_1] [i_2 + 2] [i_3] [(unsigned short)2] [(unsigned short)3]))) ? (((long long int) (unsigned short)59925)) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
                    }
                    for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -3802440324657506785LL))));
                        arr_12 [i_1] [i_4] [i_2 - 1] = ((/* implicit */short) (_Bool)1);
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_4] = (+(((/* implicit */int) ((short) (unsigned short)59918))));
                        var_20 = ((/* implicit */short) min((var_20), (arr_0 [i_1])));
                        arr_14 [i_0] [i_1] [(short)8] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))), (((unsigned long long int) 252406945698221576ULL))));
                    }
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned long long int) (~(arr_2 [i_2] [(_Bool)1] [i_2 + 1])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 4; i_7 < 23; i_7 += 2) 
                {
                    {
                        arr_23 [i_7] [i_5] = ((_Bool) ((unsigned short) ((_Bool) arr_15 [i_5] [i_6] [i_6])));
                        var_22 = ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                        arr_24 [i_6] [i_7] |= ((/* implicit */_Bool) ((unsigned long long int) min((980868853), (((/* implicit */int) arr_1 [i_7 - 2])))));
                    }
                } 
            } 
        } 
        arr_25 [7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_1 [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)13]))))));
        var_24 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((unsigned long long int) arr_10 [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (signed char)-87))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48862))))) : (((/* implicit */int) (short)(-32767 - 1)))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 3; i_10 < 21; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    arr_37 [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 252406945698221576ULL))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (((!(((/* implicit */_Bool) 252406945698221581ULL)))) ? (((/* implicit */int) arr_36 [9ULL] [i_10 - 3] [i_10 - 2])) : (((/* implicit */int) (unsigned short)59895)))))));
                    var_26 ^= ((/* implicit */unsigned char) ((arr_21 [i_10 + 2] [i_10] [i_10 + 1] [i_10]) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */unsigned int) ((arr_8 [i_8] [i_8] [i_8] [i_8] [i_8] [(_Bool)1]) ? (((/* implicit */int) arr_33 [i_8] [i_9] [i_8] [i_11])) : (((/* implicit */int) arr_3 [i_9]))))) : (((unsigned int) (_Bool)1))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8787503087616ULL)) ? (((/* implicit */int) arr_9 [i_10 - 2] [i_9] [i_10])) : (((/* implicit */int) arr_26 [i_11])))))));
                }
                for (int i_12 = 2; i_12 < 22; i_12 += 2) 
                {
                    var_29 += ((/* implicit */long long int) ((short) (unsigned char)242));
                    arr_40 [i_8] [5] [i_10 + 1] [i_12] [i_8] = ((/* implicit */int) ((unsigned char) arr_18 [i_10 - 3] [i_10] [i_10 - 3] [i_8]));
                }
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_8] [i_9] [i_8] [8ULL]))))) ? (2097148) : (((/* implicit */int) arr_28 [i_8] [i_8])))))));
                /* LoopSeq 2 */
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                {
                    var_31 = (+(1577104189784193244ULL));
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (signed char)-100))));
                    var_33 = ((/* implicit */unsigned short) 255);
                    arr_43 [i_9] [i_9] [i_10 - 2] [(unsigned char)15] [i_9] [i_8] = ((/* implicit */unsigned int) arr_4 [8LL] [i_10 + 3]);
                }
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */int) min((var_34), ((~(((/* implicit */int) (unsigned char)212))))));
                    var_35 = ((/* implicit */unsigned int) ((int) arr_22 [i_8] [i_9] [i_9] [i_8]));
                    arr_47 [i_14] [i_9] [i_8] [i_14] = ((/* implicit */int) ((long long int) arr_15 [i_8] [i_10 + 1] [i_8]));
                    var_36 &= ((/* implicit */short) 2145386496U);
                }
                var_37 = ((/* implicit */unsigned long long int) ((int) arr_7 [i_10 + 3] [i_9] [i_8] [i_10 + 1] [i_10] [i_10 - 3]));
            }
            arr_48 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32176)) ? (((/* implicit */int) (signed char)-43)) : (-1587118738)));
        }
    }
    var_38 = ((/* implicit */unsigned int) (unsigned short)5645);
}
