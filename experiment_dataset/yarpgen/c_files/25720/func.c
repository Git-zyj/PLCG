/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25720
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
    var_13 = ((/* implicit */short) var_6);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_3)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) 985771950401752107ULL);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [i_3 + 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3 + 1])) ? (2371108457678092209LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_7)))))))) == (((unsigned long long int) var_7))));
                        var_16 = ((/* implicit */int) var_6);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (min((arr_4 [i_4] [i_5]), (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) (unsigned char)176)))))))));
                    var_18 = arr_8 [i_6] [i_5] [i_4];
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) 4294967294U)))));
                        arr_20 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) 455321913U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23140))) : (2626597690U)))) ^ (((((/* implicit */_Bool) var_5)) ? (arr_17 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) | (((((/* implicit */long long int) min((var_10), (((/* implicit */int) (unsigned short)1645))))) / (2371108457678092209LL)))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_28 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)23139), (((/* implicit */short) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8 - 1]))) : ((~(71281822U)))));
                    arr_29 [i_9] [i_8 - 1] [11U] [i_4] = ((/* implicit */_Bool) arr_12 [i_4]);
                }
            } 
        } 
        var_20 ^= var_5;
    }
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
    {
        arr_32 [i_10] = ((/* implicit */long long int) (!(((arr_21 [i_10] [i_10]) && (((/* implicit */_Bool) arr_9 [i_10]))))));
        var_21 = ((/* implicit */int) max((var_21), (max(((+(arr_14 [i_10] [(unsigned short)7]))), (((/* implicit */int) (unsigned short)1639))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned short) ((min((var_10), ((~(((/* implicit */int) var_4)))))) & (((((/* implicit */_Bool) arr_26 [i_11] [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
        arr_37 [i_11] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)63894))));
        arr_38 [i_11] = ((/* implicit */_Bool) var_3);
    }
    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (!((_Bool)1))))) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)67)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)173)), (-279648995611908402LL))))))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (signed char)-1))));
        var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) arr_12 [i_12])) : (((/* implicit */int) arr_12 [i_12])))), (((/* implicit */int) ((arr_23 [(short)1] [(short)1] [i_12]) != (((((/* implicit */_Bool) var_10)) ? (1743567648230931410ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
        var_26 = ((/* implicit */unsigned int) (unsigned char)205);
    }
}
