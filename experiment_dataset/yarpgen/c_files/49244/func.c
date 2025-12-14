/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49244
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) arr_1 [i_0 - 2] [i_0 - 4]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */int) ((signed char) arr_0 [i_0 + 1] [i_2 - 1]));
                    arr_7 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1])) ? (arr_5 [(signed char)15] [i_1] [i_2 - 3] [i_2 - 3]) : (arr_5 [i_2] [i_2] [i_2 - 3] [i_2]));
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_2 [4LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
                }
            } 
        } 
        arr_9 [i_0 - 4] [i_0 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_12 ^= ((/* implicit */signed char) ((arr_11 [i_3]) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (_Bool)1))));
        arr_12 [0LL] = ((/* implicit */signed char) arr_5 [i_3] [i_3] [15] [i_3]);
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) arr_1 [(_Bool)1] [i_3]))) : (((/* implicit */int) (_Bool)0)))))));
    }
    for (long long int i_4 = 4; i_4 < 17; i_4 += 1) 
    {
        arr_15 [i_4 - 1] = ((/* implicit */long long int) (_Bool)1);
        arr_16 [i_4] [i_4] = ((/* implicit */_Bool) min((((signed char) arr_4 [i_4] [i_4] [i_4] [i_4 - 4])), (((/* implicit */signed char) var_2))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((unsigned short) arr_14 [i_5 - 2])))));
        var_15 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 714136035)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_22 [i_5] [i_6 - 1] [(_Bool)1] [(signed char)4]);
                    arr_23 [i_5 - 1] [i_6 - 1] = 1724231727;
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5 + 1] [i_6 - 2])) ? (((/* implicit */long long int) 264542927)) : (arr_1 [i_5 + 1] [i_6 - 2]))))));
                            var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 67108863)) ? (((/* implicit */int) (_Bool)0)) : (1724231727)));
                            arr_28 [i_5 + 1] [i_5 + 1] [(_Bool)1] [i_8] [i_9] [4U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_6 - 2] [i_6 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 1])) ? (arr_27 [i_6 - 2] [i_6 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 1]) : (arr_27 [i_6 - 2] [i_6 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 1])));
                        }
                        arr_29 [i_5 - 2] [i_6 + 1] [i_7] [i_8] [i_5 - 1] = ((/* implicit */_Bool) var_0);
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 4; i_10 < 10; i_10 += 1) 
                    {
                        arr_32 [i_5] = ((/* implicit */unsigned char) arr_4 [(_Bool)1] [i_6] [i_7] [(_Bool)1]);
                        var_19 ^= ((/* implicit */long long int) ((signed char) 18446744073709551615ULL));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((signed char) arr_31 [i_6 - 1])))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_5 + 1] [i_6] [i_7] [i_11]))));
                        arr_36 [i_5] [i_11] = (_Bool)1;
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) var_0);
    }
}
