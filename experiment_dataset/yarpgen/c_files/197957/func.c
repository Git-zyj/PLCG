/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197957
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
    var_18 = ((/* implicit */short) -6528729123800902578LL);
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_17)), ((+((+(var_7)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) (signed char)19);
                    var_21 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 -= ((/* implicit */unsigned int) min((min((-6528729123800902578LL), (((/* implicit */long long int) (short)-28610)))), (((/* implicit */long long int) (~(var_10))))));
                        arr_19 [i_5] [i_5] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) 642198060633185496ULL);
                        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) 2701568209U)) ? ((+(((2001390375) & (((/* implicit */int) (signed char)-15)))))) : (max((min((-785202187), (((/* implicit */int) (short)-22365)))), ((+(((/* implicit */int) (signed char)-3))))))));
                        arr_20 [i_3] [i_5] [i_5] [i_6] = ((/* implicit */int) max((min((min((((/* implicit */unsigned long long int) arr_3 [i_3])), (var_14))), (((/* implicit */unsigned long long int) arr_17 [i_3] [i_4] [i_5 + 1] [i_6] [11])))), (((/* implicit */unsigned long long int) (-(arr_9 [i_3]))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) arr_1 [i_3] [i_3]);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        for (short i_10 = 1; i_10 < 13; i_10 += 3) 
                        {
                            {
                                arr_32 [i_3] [i_7] [i_8] [i_9] [i_9] [i_8] [i_10 + 1] = ((/* implicit */_Bool) min((arr_0 [i_3]), (((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) 7067876669382584011ULL)))), ((!((_Bool)1))))))));
                                var_25 ^= ((/* implicit */_Bool) ((unsigned int) (short)28599));
                            }
                        } 
                    } 
                    arr_33 [i_3] [5LL] [i_8] = ((/* implicit */signed char) min((min((((/* implicit */int) var_15)), (2001390375))), (arr_6 [(signed char)14] [(signed char)12] [i_8 + 1] [(signed char)14])));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (unsigned char)125))));
                    var_27 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) arr_9 [6ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) : (var_8))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)116)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
    {
        arr_37 [i_11] = ((short) (~(var_2)));
        arr_38 [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1593399099U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_11] [i_11] [i_11] [i_11]) == (arr_7 [i_11] [i_11] [i_11])))))));
        arr_39 [i_11] = ((/* implicit */int) 1481997343U);
        arr_40 [i_11] [10] = ((/* implicit */unsigned short) (unsigned char)124);
    }
    for (int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) arr_15 [i_12] [i_12] [(unsigned char)4] [i_12]);
        var_29 = ((/* implicit */short) var_4);
    }
    var_30 = ((/* implicit */unsigned int) var_15);
}
