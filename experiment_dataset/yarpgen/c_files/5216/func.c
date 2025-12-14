/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5216
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
    var_17 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) -1216812875))));
                        arr_10 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((-(((var_16) ^ (((/* implicit */unsigned long long int) 268381864)))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((arr_4 [i_0] [(short)10] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 268381864)))))) : (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 268381882)) : (var_16)))))));
    }
    var_18 = ((/* implicit */short) (unsigned char)107);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_4 = 1; i_4 < 10; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (var_2) : (13866037958703994247ULL)));
        arr_15 [i_4] = ((/* implicit */signed char) arr_1 [i_4 + 2]);
        arr_16 [8LL] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_7 = 2; i_7 < 12; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 11; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        {
                            arr_28 [i_5] [i_7] [i_5] [i_6] [i_8 + 1] = ((/* implicit */int) ((unsigned char) var_10));
                            arr_29 [(short)10] [i_6] [i_8 + 2] [i_5] [i_7] = ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
            } 
            arr_30 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
        }
        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) /* same iter space */
        {
            arr_35 [i_5] [i_10] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) -5392951007016789219LL)) ? (var_1) : (var_15))));
            arr_36 [i_5] [i_10] [i_10 - 1] = ((/* implicit */long long int) (-(-268381858)));
            arr_37 [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_9);
        }
        arr_38 [12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_26 [i_5] [i_5] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10])))) ? (arr_26 [4ULL] [4ULL] [i_5] [i_5] [4ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    }
}
