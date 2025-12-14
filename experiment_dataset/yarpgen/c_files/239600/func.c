/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239600
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
    var_16 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            arr_7 [4ULL] [i_0] [4ULL] &= ((/* implicit */long long int) ((((arr_6 [i_0 + 2] [18U]) / (arr_6 [i_0 - 1] [(short)20]))) ^ (var_10)));
            arr_8 [i_0] [i_1] = ((/* implicit */signed char) 52531647);
            arr_9 [i_1] = (-(((/* implicit */int) (unsigned short)12675)));
        }
        arr_10 [i_0] [10ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)195)), (751056895)));
        arr_11 [16LL] = ((/* implicit */unsigned long long int) var_8);
        arr_12 [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_26 [3] [3] [i_2] [i_2] [i_2] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [(unsigned char)2] [i_2] [i_2] [i_5 + 1] [(unsigned char)2] [i_5] [i_5 - 2]))))) >> (((arr_24 [i_5] [i_5] [i_5] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 2]) - (2717594594544357418LL)))));
                                arr_27 [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) var_11);
                                arr_28 [i_5] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((max((751056904), (((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_0] [2LL] [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3])) <= (-751056894)))), ((-(((/* implicit */int) var_4))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_36 [i_3] [i_7] [i_3] = ((/* implicit */unsigned int) ((((arr_25 [i_7] [i_7 + 1] [i_7] [(signed char)19] [i_2 - 2] [i_7] [i_2 - 2]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_3] [10ULL]))))))));
                                arr_37 [i_3] [i_3] [i_3] [(unsigned char)15] [(unsigned char)18] = ((/* implicit */unsigned long long int) var_12);
                                arr_38 [i_3] [i_3] = max((((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0 - 2])), (((unsigned short) arr_0 [i_0 + 2] [i_0 + 1])));
                                arr_39 [i_3] [i_6] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) (((-(arr_21 [i_3] [i_7]))) - (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)65520)))))));
                            }
                        } 
                    } 
                    arr_40 [i_3] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    }
    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
    {
        arr_43 [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [6ULL] [i_8] [i_8] [i_8 - 1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) -751056879)))))));
        arr_44 [i_8] = ((/* implicit */unsigned long long int) arr_22 [2ULL] [i_8] [12ULL] [12ULL] [2ULL]);
        arr_45 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) | (-42739001570041182LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12221)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)32767))))) ? (arr_32 [2U]) : (arr_17 [i_8] [16LL] [16LL] [i_8]))) : (((/* implicit */int) ((((/* implicit */_Bool) 9081214305331411949ULL)) && (((/* implicit */_Bool) arr_18 [(unsigned char)18] [(unsigned char)18] [i_8 + 1])))))));
    }
    for (unsigned short i_9 = 1; i_9 < 13; i_9 += 2) 
    {
        arr_48 [i_9] = ((/* implicit */_Bool) (-(arr_6 [i_9] [(unsigned short)4])));
        arr_49 [i_9] [i_9] = ((/* implicit */_Bool) min(((-((-(((/* implicit */int) var_14)))))), (((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 11; i_10 += 3) 
        {
            for (int i_11 = 2; i_11 < 13; i_11 += 1) 
            {
                {
                    arr_56 [(unsigned short)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_11 - 2]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)7467)), (134217728U)))) ? ((-(((/* implicit */int) arr_41 [i_9] [i_10 - 1])))) : ((-(((/* implicit */int) var_12))))))) : (3203374987U)));
                    arr_57 [(_Bool)1] [i_10 + 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_11 + 1] [i_11] [i_11] [11LL] [i_11]))))) <= (-2523307269016924530LL)));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) var_12);
}
