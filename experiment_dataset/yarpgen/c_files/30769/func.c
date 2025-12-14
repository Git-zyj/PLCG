/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30769
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) -1796113084);
        arr_5 [i_0] [i_0] = arr_1 [i_0];
        arr_6 [i_0] = ((/* implicit */signed char) max((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (var_5))), (((/* implicit */int) (!(((/* implicit */_Bool) 8132929851930532527ULL)))))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        arr_11 [i_1] [i_1] = ((/* implicit */int) (-(((arr_7 [i_1 + 2]) << (((((/* implicit */int) (signed char)125)) - (124)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                for (int i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    {
                        arr_20 [i_3] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
                        arr_21 [i_3] [i_3] [i_4] [i_4 - 3] [i_4 + 3] [i_4 + 3] = ((/* implicit */unsigned long long int) ((arr_7 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))));
                    }
                } 
            } 
            arr_22 [5LL] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((6647748466160749209LL) / (arr_2 [i_2])))) ? (arr_7 [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (arr_3 [(short)19] [(short)19])))))));
            arr_23 [i_2] [9LL] = ((/* implicit */short) ((int) ((var_7) + (6647748466160749209LL))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    {
                        arr_34 [i_1] [i_1] [i_1] [i_5] [i_1] [i_5] = ((/* implicit */signed char) ((15854905620524005612ULL) & (((/* implicit */unsigned long long int) arr_14 [i_1]))));
                        arr_35 [i_1] [i_5] [i_1] [i_5] = ((/* implicit */unsigned int) ((arr_7 [i_1 - 1]) >= (arr_7 [i_1 - 4])));
                        arr_36 [i_1] = ((unsigned long long int) var_9);
                        arr_37 [i_7] [i_7] [i_5] [i_5] = (signed char)21;
                    }
                } 
            } 
            arr_38 [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) var_6);
            arr_39 [12] [12] [i_5] = ((((/* implicit */_Bool) arr_25 [i_1])) ? (arr_7 [i_1]) : (((/* implicit */long long int) var_6)));
            arr_40 [i_1] [i_5] = ((/* implicit */unsigned int) ((arr_15 [i_1 + 2] [i_1 - 2] [i_1 + 2]) < (arr_15 [i_1 + 1] [i_1 + 1] [i_1 - 3])));
        }
        arr_41 [3LL] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_8 [i_1])));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_44 [i_8] = ((/* implicit */unsigned char) (+(arr_7 [i_8])));
        arr_45 [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_25 [6U]))));
        /* LoopSeq 2 */
        for (short i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 1) 
            {
                arr_53 [i_8] [i_8] [i_8] [(short)2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) arr_10 [i_10 - 1]))), (2591838453185546004ULL)));
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_59 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_9 [i_10] [i_10]) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (arr_56 [i_10 - 1] [i_10 + 1] [i_8])))) : (var_13)));
                            arr_60 [i_9 + 1] [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(6647748466160749209LL)));
                            arr_61 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((signed char) (signed char)125));
                            arr_62 [i_8] [1ULL] [(signed char)6] [(signed char)6] = max((((int) 2822728928U)), (((/* implicit */int) arr_24 [i_8] [i_8] [i_10])));
                            arr_63 [i_8] [i_8] [i_8] [i_10] [5LL] [i_8] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_11] [i_10 + 2] [i_11 - 2] [i_9 - 1])) ? (((/* implicit */int) var_8)) : (var_0)));
                        }
                    } 
                } 
                arr_64 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) max((min((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) var_6))))), ((+(1156447791067274323LL))))), (((/* implicit */long long int) (unsigned char)61))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_13 = 3; i_13 < 10; i_13 += 1) 
                {
                    arr_68 [i_13] [i_8] [i_8] [i_8] = ((/* implicit */int) (_Bool)1);
                    arr_69 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_8] [i_9 + 2] [i_10 + 2] [i_13 - 2]))));
                    arr_70 [i_8] = ((/* implicit */_Bool) var_6);
                    arr_71 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-28)) & (((/* implicit */int) arr_16 [i_8] [i_8]))));
                }
                arr_72 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_8] [i_8])) ? (((/* implicit */long long int) ((arr_47 [i_8] [i_8]) ? (675974441) : (((/* implicit */int) (signed char)-27))))) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [i_8]))) : (var_13))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219)))))));
            }
            arr_73 [i_8] [i_8] = (signed char)-28;
        }
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            arr_76 [6LL] = ((/* implicit */unsigned long long int) -402083941);
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (long long int i_16 = 1; i_16 < 8; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        {
                            arr_85 [i_8] [i_16] [i_15] [i_14] [i_8] = ((/* implicit */unsigned char) arr_15 [i_15] [i_14] [i_15]);
                            arr_86 [i_15] [i_15] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) -1889588041))) / (arr_83 [i_8] [i_8] [i_17])));
                        }
                    } 
                } 
            } 
            arr_87 [i_8] = ((/* implicit */unsigned long long int) arr_77 [i_8]);
        }
        arr_88 [i_8] = max((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_25 [i_8])), (6647748466160749209LL))), (var_3)))), (((unsigned long long int) var_12)));
    }
    for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
    {
        arr_91 [i_18] = ((/* implicit */short) (-((-(min((var_4), (((/* implicit */long long int) arr_17 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))))));
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            for (long long int i_20 = 1; i_20 < 18; i_20 += 1) 
            {
                {
                    arr_99 [i_18] [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_18] [i_18] [i_18])) ? (min((((/* implicit */long long int) max((3617808614U), (((/* implicit */unsigned int) var_0))))), (((long long int) var_12)))) : (((/* implicit */long long int) arr_14 [i_18]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 1) 
                    {
                        arr_104 [i_21] = ((/* implicit */unsigned char) ((-1156447791067274323LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                        arr_105 [i_18] = ((/* implicit */long long int) arr_26 [i_20 - 1] [i_20]);
                    }
                }
            } 
        } 
    }
    var_14 = ((/* implicit */signed char) 5755299105378808841LL);
    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1596183804)) ? (((/* implicit */int) min(((signed char)-3), ((signed char)-26)))) : (1596183804)))) % (-1156447791067274323LL)));
}
