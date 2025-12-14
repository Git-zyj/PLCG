/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25779
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_4] [i_2 + 1] [i_3 + 2] [(unsigned short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((var_11) << (((/* implicit */int) arr_6 [7] [i_1] [i_1] [(short)14])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_4] [i_1] [i_1] [i_1]))))));
                                arr_13 [i_1] [(unsigned char)8] [i_1] = ((/* implicit */long long int) arr_2 [i_0] [(unsigned char)11] [i_4]);
                                arr_14 [6U] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)94)))))));
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_1] [(unsigned char)3] [i_3 - 2] [(unsigned short)9] = ((/* implicit */unsigned int) arr_7 [i_3 + 3] [15] [i_3 + 1] [i_4]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] = ((/* implicit */_Bool) max((((signed char) arr_8 [(_Bool)1] [i_2 - 1] [i_2 - 1] [i_2 - 1])), (((/* implicit */signed char) ((_Bool) (unsigned char)94)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [5ULL] [i_1] [4] [(_Bool)0] = ((int) max((((/* implicit */unsigned char) ((signed char) arr_4 [(_Bool)1] [i_2 + 1] [(short)6]))), (arr_0 [i_2 - 1])));
                                arr_23 [i_0] [(signed char)0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) & (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                                arr_24 [i_1] [3] [i_5] = ((/* implicit */long long int) max(((~(((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (arr_21 [i_6] [i_1] [i_2 + 1] [i_2 - 1] [i_1] [i_0]) : (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            arr_30 [i_7] [(short)7] [i_8] = ((/* implicit */int) var_9);
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_41 [i_7] [i_8] [i_9] [i_7] [i_9] = (+((~(((/* implicit */int) arr_10 [16] [i_9] [i_9] [i_9] [i_7])))));
                            arr_42 [i_7] [0ULL] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) ((_Bool) var_1)))), (max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-77))))), (min((((/* implicit */long long int) (unsigned char)160)), (var_4)))))));
                            arr_43 [i_7] [i_7] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) != ((~(((/* implicit */int) min((((/* implicit */short) (signed char)-72)), (arr_8 [i_7] [i_9] [i_10] [i_11]))))))));
                        }
                    } 
                } 
            } 
            arr_44 [i_7] [i_8] = ((/* implicit */signed char) max(((+(var_12))), ((-(((((/* implicit */_Bool) 17LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_36 [(unsigned short)5]))))))));
            arr_45 [(unsigned char)4] [i_7] [i_7] = ((/* implicit */_Bool) arr_40 [i_7] [4U] [i_7] [4ULL] [(signed char)7] [4] [i_8]);
        }
        for (short i_12 = 3; i_12 < 9; i_12 += 2) 
        {
            arr_49 [i_7] = ((/* implicit */unsigned char) ((unsigned int) var_3));
            arr_50 [i_7] [i_7] [i_12] = ((/* implicit */unsigned int) arr_5 [2U] [(_Bool)1] [(short)13]);
            arr_51 [(short)4] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */long long int) -436367031)) - (max((((/* implicit */long long int) 3047905926U)), (1365746288404960184LL)))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_13 = 1; i_13 < 8; i_13 += 2) 
        {
            arr_55 [5U] [(short)2] = ((/* implicit */short) ((signed char) (~((+(arr_48 [i_7] [i_7]))))));
            arr_56 [5ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43691)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(signed char)3])))))) ? (((/* implicit */int) ((unsigned char) arr_46 [i_7] [i_13 + 1]))) : (((/* implicit */int) ((signed char) var_7))))) : (((/* implicit */int) var_2))));
        }
        arr_57 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((unsigned int) arr_2 [(unsigned char)12] [7LL] [(unsigned char)12])), (((unsigned int) var_5))))) - ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7]))) : (var_4)))))));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            arr_61 [i_7] [i_7] = ((/* implicit */short) ((unsigned int) (+(-17LL))));
            arr_62 [4U] [(unsigned char)9] = ((/* implicit */short) (+(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), (min((var_6), (var_7)))))));
        }
        arr_63 [i_7] = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7] [(short)4])) ? (((/* implicit */int) arr_18 [(_Bool)1] [i_7] [i_7] [i_7])) : (-436367045))) * (((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) arr_28 [(unsigned char)0] [(signed char)2])) : (((/* implicit */int) arr_6 [i_7] [2] [i_7] [8U]))))))));
    }
}
