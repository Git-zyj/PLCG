/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217456
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */unsigned long long int) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-95)))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_2))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (arr_1 [11U] [11U]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_2]))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-95)))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 3; i_4 < 23; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */int) (signed char)94);
                        var_24 = ((/* implicit */int) (signed char)-95);
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((63ULL) * (var_10)));
    }
    var_26 -= ((/* implicit */int) ((signed char) (unsigned char)110));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */signed char) arr_10 [i_5 + 1] [i_5 + 1] [i_5 - 1]);
        arr_18 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [13LL])))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 2) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned long long int) (signed char)85);
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [i_6 + 2]))) : (((((/* implicit */_Bool) 12004153842144972344ULL)) ? (4294967295U) : (((/* implicit */unsigned int) -1816779031)))))))));
        var_28 ^= ((/* implicit */unsigned short) var_5);
    }
    /* vectorizable */
    for (unsigned short i_7 = 4; i_7 < 15; i_7 += 2) /* same iter space */
    {
        arr_27 [i_7] = (+((~(((/* implicit */int) arr_19 [i_7])))));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6442590231564579264ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7]))) : (16458344433435991990ULL)))) && (((/* implicit */_Bool) arr_11 [(unsigned char)19] [(signed char)6] [(unsigned char)19] [i_7 - 3]))));
        var_29 += ((/* implicit */unsigned long long int) ((unsigned short) (-(arr_8 [i_7]))));
    }
}
