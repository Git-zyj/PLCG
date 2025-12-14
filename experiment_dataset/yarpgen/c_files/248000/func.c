/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248000
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (arr_0 [i_0 - 1])))) ? ((-(var_6))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_14) : (arr_0 [i_0 - 1])))));
                arr_6 [i_1] [(short)2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_0 - 1]), (var_3)))) ? (((long long int) (short)17494)) : (-501642672193140058LL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_22 [i_6] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */_Bool) ((arr_16 [i_3] [i_5] [i_5 + 1] [i_3]) ? (arr_8 [i_2 + 1] [i_5 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            arr_23 [i_6] [i_5] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [i_5 - 2] [i_3]))));
                        }
                    } 
                } 
            } 
            arr_24 [i_3] [i_3] = ((((/* implicit */_Bool) 501642672193140058LL)) && (((/* implicit */_Bool) var_17)));
        }
        arr_25 [i_2] = (!((!(((/* implicit */_Bool) (short)17515)))));
    }
    for (int i_7 = 2; i_7 < 13; i_7 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_19 += (~(72057594037927904ULL));
            var_20 *= ((/* implicit */short) arr_28 [i_7]);
        }
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (short i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_38 [i_11] [i_9] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_7))))));
                        arr_39 [i_11] [i_9] = ((/* implicit */unsigned long long int) -1952135286);
                        arr_40 [i_11] [i_11] = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) arr_36 [(unsigned short)3] [(unsigned short)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_7))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))));
                        var_21 = ((/* implicit */long long int) 1952135279);
                    }
                } 
            } 
            var_22 = arr_10 [i_7] [i_9];
        }
        arr_41 [i_7 + 2] [i_7] = ((/* implicit */int) min((((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [12LL] [i_7 + 1] [i_7] [12LL]))))), (((/* implicit */unsigned long long int) 1952135297))));
        arr_42 [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_7 + 2])) && (((/* implicit */_Bool) arr_34 [i_7 - 1])))))));
    }
}
