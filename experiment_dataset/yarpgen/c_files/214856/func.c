/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214856
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 1]) ? (((/* implicit */int) (unsigned short)43168)) : (((/* implicit */int) (unsigned short)22368))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] = (unsigned short)43167;
                                arr_16 [i_0] [(unsigned short)18] [i_2] [(short)18] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_3] [i_4 + 2])) : (((/* implicit */int) (short)32759))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            arr_21 [i_0] = ((/* implicit */signed char) (short)12864);
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_6] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [19ULL]);
                            arr_32 [i_6] [i_5] [(unsigned short)18] = ((/* implicit */short) (unsigned short)43172);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            arr_35 [i_0] = ((/* implicit */unsigned short) arr_28 [i_9]);
            arr_36 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_19 [i_0] [i_0]));
        }
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
        {
            arr_40 [i_10] [i_10] [i_10] = ((/* implicit */short) (_Bool)1);
            arr_41 [i_10] [i_10] [(signed char)10] = ((/* implicit */unsigned int) arr_11 [(short)18] [(short)18] [i_10] [(unsigned char)15]);
            arr_42 [i_10] = ((/* implicit */signed char) var_2);
        }
        arr_43 [i_0] = ((/* implicit */long long int) ((signed char) ((_Bool) (signed char)-33)));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [(short)15] [12ULL] [(short)15])) ? (((((/* implicit */_Bool) (unsigned short)43167)) ? (((/* implicit */int) arr_39 [i_11])) : (-871070637))) : (10)));
        arr_47 [i_11] = arr_18 [i_11] [i_11] [i_11];
        arr_48 [i_11] = ((/* implicit */short) 10);
        arr_49 [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_2 [i_11] [i_11] [i_11]);
    }
    var_16 = ((/* implicit */unsigned long long int) var_3);
}
