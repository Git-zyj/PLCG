/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49198
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
    var_10 = ((/* implicit */signed char) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] [i_0] [(short)16] |= ((unsigned short) (+(((/* implicit */int) var_9))));
                    arr_10 [i_2] [i_2] = ((/* implicit */short) (+(arr_6 [i_1 - 1] [i_1 + 1])));
                }
            } 
        } 
        var_11 |= ((/* implicit */_Bool) var_2);
        arr_11 [i_0] = arr_4 [i_0];
    }
    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)21418), ((unsigned short)65511)))) << (((min((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) (unsigned short)24))))), (max((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3])), (var_6))))) - (9043724528916167332ULL)))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            var_13 += ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_4]), (arr_13 [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4] [(unsigned char)16])) ^ (arr_17 [i_4] [i_3] [i_3]))))))), (var_2)));
            var_14 = ((/* implicit */unsigned char) (+(min((((((/* implicit */int) arr_15 [i_4] [i_4] [i_3])) / (((/* implicit */int) arr_16 [i_3] [i_4 - 1])))), (((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) (short)7260)) : (((/* implicit */int) (unsigned short)25))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_15 = var_8;
            var_16 -= ((/* implicit */_Bool) min((max((((/* implicit */int) arr_16 [i_5] [i_5])), (((((/* implicit */int) arr_14 [i_3] [i_5])) / (((/* implicit */int) var_3)))))), (((/* implicit */int) ((signed char) arr_15 [i_5] [i_5] [i_5])))));
            var_17 = ((/* implicit */unsigned char) var_5);
        }
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_18 [i_3]))));
        arr_21 [i_3] [i_3] = ((/* implicit */unsigned short) arr_14 [i_3] [i_3]);
    }
    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
    {
        arr_26 [i_6] = ((((/* implicit */_Bool) (+((+(var_8)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_19 [i_6] [i_6]), (((/* implicit */unsigned short) var_3)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_6)))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_6])) != (((/* implicit */int) arr_25 [i_6])))))))));
        var_19 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_8) < (((/* implicit */int) var_5)))))))) ^ (max((min((((/* implicit */unsigned long long int) arr_15 [i_6] [i_6] [i_6])), (arr_18 [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_6] [i_6])) < (arr_17 [i_6] [i_6] [i_6]))))))));
        var_20 = min(((+((+(((/* implicit */int) var_5)))))), ((+(var_8))));
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)25)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 1) 
    {
        arr_29 [i_7 + 1] = ((/* implicit */short) (-((+(((/* implicit */int) arr_28 [i_7]))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_7])) >= (((/* implicit */int) var_2))))) + (((/* implicit */int) var_5)))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((((/* implicit */int) arr_28 [i_7])) + (2147483647))) >> (((((/* implicit */int) arr_27 [i_7])) + (15906))))) : (((/* implicit */int) var_0)))))));
        var_24 = ((/* implicit */unsigned short) arr_28 [i_7]);
    }
    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        arr_33 [i_8] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8]))) >= (((unsigned long long int) (short)-7532)))), ((_Bool)1));
        var_25 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) var_1)))))) ? (((/* implicit */int) min((((/* implicit */short) ((unsigned char) var_8))), (((short) arr_27 [i_8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_8]), (((/* implicit */unsigned int) arr_19 [i_8] [i_8]))))))))));
        arr_34 [i_8] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_19 [i_8] [i_8])) ^ (((/* implicit */int) var_0))))));
    }
}
