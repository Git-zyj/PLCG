/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220187
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_10 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0 + 1]))));
        arr_4 [i_0] = ((((((/* implicit */int) arr_2 [i_0] [i_0 - 1])) > (((/* implicit */int) arr_3 [i_0])))) ? (max((((/* implicit */int) arr_2 [i_0] [i_0 - 2])), (var_0))) : (((/* implicit */int) max((arr_3 [i_0]), (arr_1 [i_0])))));
    }
    for (signed char i_1 = 2; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_1 + 4] [i_1 + 4])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1])))))));
        var_11 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_5 [i_1 + 1] [22LL])))) * (((((/* implicit */_Bool) -1237497274)) ? (((/* implicit */int) arr_5 [i_1 + 4] [i_1 + 4])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2]))))));
        arr_8 [i_1] [(unsigned char)8] = ((/* implicit */unsigned char) (short)-4612);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            for (int i_3 = 4; i_3 < 23; i_3 += 4) 
            {
                {
                    var_12 += ((/* implicit */unsigned char) var_7);
                    var_13 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_11 [i_3] [i_1 + 4] [i_3]), (((/* implicit */short) arr_13 [i_1])))))));
                    var_14 &= ((/* implicit */signed char) arr_13 [i_3]);
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1 - 2])) && (((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1 - 1]))))) | (((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_11 [i_1] [i_1 + 2] [i_1 + 3]))))));
    }
    for (signed char i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_5)))) - (56)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (int i_7 = 1; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_27 [i_4 - 1] [i_4 - 1] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_6);
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            var_16 ^= ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) (signed char)-41)) ? (var_3) : (((/* implicit */int) arr_13 [i_8])))))), (max((((((/* implicit */int) arr_10 [i_8] [i_7])) / (var_3))), (((((/* implicit */int) arr_28 [i_4] [i_4] [i_4 + 1] [i_4])) ^ (((/* implicit */int) var_2))))))));
                            arr_30 [i_4] [i_4] [i_5] [i_6] [i_6] [i_7 + 1] [i_7 + 1] = arr_14 [i_4] [i_4] [i_4];
                            arr_31 [i_8] [i_7] [i_7 - 1] [i_6] [i_5] [i_4] = ((/* implicit */short) var_6);
                        }
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            arr_36 [i_9] = ((/* implicit */long long int) arr_18 [i_4] [i_6] [i_9]);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (((((/* implicit */_Bool) ((unsigned char) arr_11 [i_9] [i_5] [i_6]))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        }
                        var_18 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(0LL)))))) && (((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4] [(short)6]))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) var_4);
    var_20 = ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_0)) ? (13445198872055596679ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69)))))))));
    var_21 = ((/* implicit */signed char) ((int) min((var_8), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (2055155537)))))));
}
