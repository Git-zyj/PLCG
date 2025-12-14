/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35634
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) /* same iter space */
        {
            arr_4 [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_0)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 5807240201875272017ULL))))))), ((~(((/* implicit */int) (_Bool)1))))));
            arr_5 [i_1] = ((/* implicit */unsigned long long int) var_4);
        }
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
        {
            arr_8 [(_Bool)1] = ((/* implicit */unsigned long long int) min(((~((+(var_6))))), (((/* implicit */int) var_8))));
            arr_9 [i_0] = ((/* implicit */int) arr_7 [(_Bool)1] [i_2] [(_Bool)1]);
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]);
        }
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
        {
            arr_13 [i_0] [4ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)73)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_3 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned short)3] [i_0])))));
            arr_14 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned int) var_10);
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_17 [i_0] [i_4] [i_0] = arr_0 [i_4];
            arr_18 [(unsigned short)8] [i_0] [i_4] = ((/* implicit */signed char) var_1);
            arr_19 [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_4] [(unsigned char)11]);
        }
        arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned short)65535)))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_21 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(signed char)2]);
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) 3514273159532036309ULL);
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
        {
            arr_25 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
            arr_26 [i_0] = (~((-(((/* implicit */int) var_3)))));
            arr_27 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_11 [(_Bool)0] [i_5]))));
            arr_28 [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) var_4)) ^ (((((/* implicit */_Bool) arr_2 [i_5] [i_0])) ? (12077496523785357204ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)11])))))))));
        }
        for (int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
        {
            arr_32 [i_0] = ((/* implicit */int) min(((+(var_9))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
            /* LoopSeq 3 */
            for (unsigned int i_7 = 4; i_7 < 10; i_7 += 1) 
            {
                arr_36 [i_6] &= var_13;
                arr_37 [i_7] = arr_12 [i_0] [i_6] [i_7];
            }
            for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) /* same iter space */
            {
                arr_42 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-10399))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_6]))))) : (((((/* implicit */_Bool) -1896672888)) ? (arr_23 [i_8 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_6]))))))))));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        {
                            arr_47 [1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 99742049U)) | (3514273159532036315ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191)))));
                            arr_48 [6ULL] [i_0] = max((((arr_23 [i_8 - 1]) * (arr_23 [i_8 + 3]))), (max((var_13), (arr_23 [i_8 + 3]))));
                            arr_49 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_34 [i_8 + 2] [i_9 - 2] [i_8 + 2]), (arr_34 [i_8 + 2] [i_9 + 1] [2U])))) ? (((((/* implicit */_Bool) arr_45 [i_9 - 2] [i_6] [i_9 + 1] [i_9] [i_8 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51813))) : (arr_45 [i_0] [i_0] [i_9 + 1] [i_9] [i_8 + 1]))) : (arr_23 [i_0])));
                            arr_50 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                            arr_51 [i_0] [i_8 + 2] [i_8 + 2] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)135))))));
                        }
                    } 
                } 
                arr_52 [i_0] = ((/* implicit */unsigned long long int) var_2);
            }
            for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 3) /* same iter space */
            {
                arr_55 [i_0] [i_0] [7ULL] [i_11 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_11 + 3] [i_11 + 3] [i_11] [i_11] [i_11])) ? (arr_3 [i_11 - 1] [i_11 + 2] [i_11]) : (((/* implicit */int) var_3))))) ? (arr_45 [i_11 + 2] [i_11 - 1] [i_11] [10ULL] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65371)))));
                arr_56 [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) (unsigned short)65381)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (_Bool)1)));
            }
            arr_57 [(signed char)7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
            arr_58 [i_0] = ((/* implicit */int) arr_7 [i_6] [i_0] [i_0]);
        }
    }
    var_14 = ((/* implicit */unsigned short) 4550372576732441973ULL);
}
