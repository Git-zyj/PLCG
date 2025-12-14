/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203533
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
    var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) (short)3462)), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)205))));
    var_16 *= max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) / (3393931102158604460LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7)))))));
                    var_18 -= ((/* implicit */short) (_Bool)1);
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)7)))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */_Bool) arr_9 [(_Bool)1] [10ULL] [i_0 - 1]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_4 [i_3 + 1])));
        var_21 = ((/* implicit */unsigned short) var_13);
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_7))));
            arr_15 [i_3] [i_4] [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)8493))) ? (arr_4 [i_3 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_4])) ^ (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_23 -= ((/* implicit */short) ((long long int) var_1));
                        arr_21 [i_3] [i_4] [12LL] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 4) 
        {
            var_24 = ((/* implicit */short) arr_20 [i_7] [i_3 + 1] [i_3 + 1] [i_3]);
            /* LoopNest 2 */
            for (short i_8 = 2; i_8 < 19; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (arr_18 [(unsigned short)2] [i_8 - 2] [i_7 - 2] [(unsigned short)0] [(unsigned short)2])));
                        arr_29 [i_8] = (i_8 % 2 == zero) ? (((/* implicit */signed char) ((arr_25 [i_8] [i_9]) >> (((((/* implicit */int) (short)-32383)) + (32399)))))) : (((/* implicit */signed char) ((((arr_25 [i_8] [i_9]) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-32383)) + (32399))))));
                        arr_30 [i_9] [(short)16] [i_7] [i_7 + 1] [i_3 - 1] |= ((/* implicit */long long int) arr_28 [i_3] [i_7] [i_8 + 2] [i_8 + 2] [i_8] [i_9]);
                        arr_31 [(short)18] [i_8] [i_8] [i_9] = ((/* implicit */short) -3393931102158604461LL);
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) var_7);
        }
        var_27 = arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1];
    }
}
