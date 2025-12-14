/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202167
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_12))));
    var_14 &= ((/* implicit */unsigned short) max((var_1), (((/* implicit */long long int) var_7))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0 + 1])) == (((/* implicit */int) var_8))));
        arr_4 [i_0 + 1] = ((/* implicit */short) arr_0 [i_0 + 1]);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (-(var_10)));
        var_15 = ((/* implicit */unsigned short) arr_2 [i_0 + 1]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) << (((/* implicit */int) arr_2 [i_0 - 1]))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1 + 2]));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (5217210785596837360LL)));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((arr_10 [i_4 - 1] [i_4 - 1] [i_1 + 2]) & (arr_10 [i_1] [i_1] [i_2])));
                            arr_22 [i_1] [i_4] [4ULL] [i_2] [i_1] = ((/* implicit */unsigned char) arr_20 [i_1] [i_1 - 2] [19U] [i_4] [i_5 - 1] [19U]);
                            var_19 = ((/* implicit */unsigned char) ((long long int) arr_9 [i_1] [(unsigned char)16]));
                            arr_23 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) 5217210785596837360LL);
                            arr_24 [i_1] [9LL] [i_3] [(unsigned short)15] [i_5] = ((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_4]);
                        }
                        arr_25 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] = ((/* implicit */signed char) ((arr_15 [i_1] [15LL] [i_1] [15LL] [15LL] [i_4]) - (arr_15 [i_4] [i_2] [i_1] [i_2] [i_3] [3LL])));
                        arr_26 [i_2] [i_1] [(short)3] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 5217210785596837352LL)) % (arr_17 [i_4 - 1] [i_3] [i_2] [18ULL]))) % (((/* implicit */unsigned long long int) var_6))));
                        var_20 = ((_Bool) -1130827032);
                    }
                }
            } 
        } 
        arr_27 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [(unsigned short)7] [i_1 - 2])) || (((/* implicit */_Bool) arr_18 [i_1] [i_1 - 2]))));
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 18; i_6 += 3) 
    {
        arr_32 [i_6] = ((/* implicit */int) ((((/* implicit */int) arr_21 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6] [i_6 - 1] [i_6])) >= (((/* implicit */int) var_8))));
        arr_33 [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_6 + 2])) != (((/* implicit */int) arr_6 [i_6 + 2]))));
        arr_34 [i_6] = ((/* implicit */signed char) -1130827059);
        arr_35 [i_6 + 3] = ((/* implicit */signed char) (+(var_11)));
    }
    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned short)12080)) : (1130827060)));
                    var_22 |= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_28 [i_7 + 2] [i_7])) ^ (((/* implicit */int) arr_44 [i_7] [(_Bool)1] [i_7 - 1] [12])))));
                }
            } 
        } 
        arr_45 [i_7] = var_10;
        arr_46 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7 + 2] [i_7 + 1])) ? (arr_14 [i_7 + 1] [i_7 + 2]) : (arr_14 [i_7 + 2] [i_7 + 1])))) ? ((-(arr_14 [i_7 - 1] [i_7 - 1]))) : ((+(arr_14 [i_7 + 2] [i_7 - 1])))));
        var_23 = ((((/* implicit */_Bool) (short)-23485)) || (((/* implicit */_Bool) ((((4814699662810184886ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-797))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-93))))))));
    }
    var_24 = ((/* implicit */unsigned char) var_4);
}
