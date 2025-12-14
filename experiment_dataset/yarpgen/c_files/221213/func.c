/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221213
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) var_10);
        arr_3 [18U] |= ((/* implicit */int) arr_0 [(_Bool)1]);
        arr_4 [i_0] = ((/* implicit */long long int) ((((arr_1 [i_0] [i_0]) - (((/* implicit */int) var_1)))) - (arr_1 [i_0] [i_0])));
        var_19 = ((/* implicit */int) (_Bool)0);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((var_6) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned short)2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (var_6))))) : (((((/* implicit */long long int) var_11)) ^ (arr_0 [i_1])))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_19 [(unsigned short)0] [(unsigned short)0] [i_3 - 2] [i_1] = ((/* implicit */unsigned char) (-(1608391199)));
                        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                        arr_20 [8ULL] [i_4] [i_3] [(unsigned char)4] |= ((/* implicit */unsigned long long int) (((~(var_12))) == (1608391213)));
                        var_21 &= ((/* implicit */unsigned int) (_Bool)0);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */int) (short)4788)), (arr_2 [i_5])));
        arr_24 [i_5] = ((/* implicit */int) var_17);
    }
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            {
                var_22 ^= ((/* implicit */_Bool) var_16);
                var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((3323853147U) / (var_9)))) ? (arr_27 [18LL] [18LL]) : (var_8))), (arr_25 [i_6])));
                var_24 ^= ((/* implicit */unsigned int) (short)448);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_25 |= ((/* implicit */_Bool) (+(var_4)));
                            /* LoopSeq 1 */
                            for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                            {
                                arr_36 [i_10] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */short) var_7);
                                var_26 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 1351565480)))))));
                            }
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((2147483647) / (((/* implicit */int) (unsigned char)52)))), (((/* implicit */int) arr_35 [4] [(unsigned short)7] [(unsigned short)11] [i_6 - 1] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) max((((/* implicit */short) ((var_14) <= (arr_25 [i_8])))), (arr_33 [(short)10] [i_6 + 1] [(short)10] [i_6 + 1] [i_7])))) : (((((arr_32 [i_6] [i_6 + 1] [i_7] [(_Bool)1] [(_Bool)1] [i_7]) ? (((/* implicit */int) arr_28 [i_6] [i_6])) : (((/* implicit */int) var_5)))) ^ (((/* implicit */int) ((((/* implicit */long long int) arr_29 [i_7] [(short)4] [i_7])) != (var_16))))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(max((((var_3) | (((/* implicit */int) (short)18667)))), (var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
    var_30 ^= var_1;
}
