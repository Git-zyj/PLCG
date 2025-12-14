/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195642
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */int) (_Bool)1);
        arr_3 [i_0] = ((/* implicit */unsigned char) var_8);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) min((var_8), (((/* implicit */int) ((unsigned char) (signed char)26))))));
        var_15 -= ((/* implicit */short) var_12);
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((min((((((/* implicit */int) var_4)) - (((/* implicit */int) arr_7 [i_1])))), (((var_10) ? (var_8) : (((/* implicit */int) arr_5 [i_1])))))) ^ (var_9)));
        var_16 += ((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_0)), (var_12)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) 466534651)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_12 [i_1 + 1]) <= (arr_12 [i_2])));
                arr_16 [i_1] [i_1] [i_3] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_1 - 1])) && (((var_7) != (var_8)))));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_7 [i_1]);
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [10LL])) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13))))))));
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) (short)32767)) - (-217612387)))));
                /* LoopSeq 1 */
                for (int i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    var_19 |= ((/* implicit */unsigned char) arr_2 [i_4]);
                    arr_24 [i_1] [i_4] [i_2] [i_1] = ((/* implicit */short) ((((var_13) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-126)))))));
                }
                var_20 += ((/* implicit */int) ((signed char) arr_13 [i_1] [i_1]));
            }
            arr_25 [i_1] [i_1] = ((/* implicit */signed char) var_11);
            arr_26 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (var_9)))) && (((/* implicit */_Bool) var_9))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        arr_29 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (unsigned char)14)))));
        var_21 = ((/* implicit */signed char) var_10);
        arr_30 [i_6] [i_6] |= ((/* implicit */_Bool) var_1);
        arr_31 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_19 [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_6] [i_6]))));
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) + (((((/* implicit */_Bool) arr_7 [4])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    }
    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        arr_35 [i_7] = ((/* implicit */unsigned char) var_12);
        var_23 = ((/* implicit */long long int) ((int) (+(397973407))));
    }
    var_24 = (+(var_8));
    var_25 = (-(max((var_9), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))))))));
    var_26 = ((/* implicit */int) var_10);
    var_27 = ((929691208) != (-466534663));
}
