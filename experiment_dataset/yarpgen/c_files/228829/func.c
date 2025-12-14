/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228829
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_9 [i_1] [i_2] [9] = ((/* implicit */unsigned int) var_1);
                        arr_10 [i_0] [i_1] [i_2] [2U] = ((/* implicit */_Bool) arr_0 [0LL] [7]);
                        var_13 = ((/* implicit */short) max((((/* implicit */signed char) arr_2 [10LL] [i_1] [(unsigned char)11])), (arr_4 [i_0])));
                        var_14 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_0 [i_2] [i_0])))) ? (min((9192976114938380031ULL), (((/* implicit */unsigned long long int) 6196762593646720774LL)))) : (max((((/* implicit */unsigned long long int) 54156213)), (4735867243132799220ULL))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) << (((((/* implicit */int) arr_4 [i_0])) + (33)))))) & (arr_0 [(signed char)13] [i_2]))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] &= ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */_Bool) 1414220642392679422ULL)) || (((/* implicit */_Bool) 5883127572052939559LL))))) << (min((var_5), (((/* implicit */int) arr_6 [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (8331169736249022814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18809)))))) ? (((/* implicit */int) arr_4 [i_0])) : (max((((/* implicit */int) arr_6 [i_0] [i_0])), (54156213)))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 9; i_4 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) arr_3 [11ULL] [(unsigned short)16] [i_4]);
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                arr_21 [i_4 - 3] [i_4 - 2] [i_4] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_5] [i_5]);
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 3]))) - (var_10)));
            }
            for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                arr_25 [i_4] [i_5] [i_5] = ((/* implicit */int) arr_20 [(unsigned char)7] [i_5]);
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_17 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-18813))));
                    var_18 = ((/* implicit */long long int) arr_5 [14ULL]);
                    var_19 = ((/* implicit */unsigned long long int) var_0);
                    var_20 = ((/* implicit */long long int) (+((~(-734348854)))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)83)) ? (arr_23 [i_5] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                }
            }
            for (unsigned int i_9 = 4; i_9 < 7; i_9 += 4) 
            {
                var_22 = ((/* implicit */_Bool) ((short) var_8));
                arr_33 [i_5] [i_5] = (~(((/* implicit */int) (signed char)-79)));
                var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
                arr_34 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_8 [i_4 + 1] [i_4 + 1] [i_9] [i_9]);
            }
            for (int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47064)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) var_5)) : (arr_29 [1LL] [1LL] [i_5] [i_10] [(short)7] [i_10])));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((+(var_9))) / (((/* implicit */long long int) (~(arr_16 [i_5])))))))));
                arr_39 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_32 [i_4 - 2] [i_5] [i_5] [i_5]);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 4; i_11 < 9; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 2; i_12 < 7; i_12 += 4) 
                {
                    {
                        arr_47 [i_5] [i_4] [i_5] [i_11 - 3] [i_11] [i_12] = ((/* implicit */short) arr_30 [(signed char)0] [i_5]);
                        arr_48 [i_5] [i_5] [i_11 - 1] [i_12] = ((/* implicit */unsigned int) var_10);
                    }
                } 
            } 
        }
        var_26 *= ((/* implicit */short) ((318474583999500540ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23059)))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        var_27 = (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)26384)) > (var_6)))) % (((/* implicit */int) arr_5 [i_13]))))));
        var_28 = ((/* implicit */long long int) arr_49 [i_13] [i_13]);
        var_29 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_13] [i_13]))))));
    }
    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
    {
        var_30 = ((/* implicit */int) (((((_Bool)1) ? ((~(7165462725670958263ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3944))) | (arr_51 [i_14])))))) & (18128269489710051075ULL)));
        arr_55 [i_14] = ((/* implicit */long long int) min((max((arr_54 [i_14]), ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) (short)-12654))));
        arr_56 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_14])) ? (((/* implicit */unsigned long long int) 54156213)) : (((((/* implicit */_Bool) (~(var_7)))) ? (4493374665962763408ULL) : (((/* implicit */unsigned long long int) arr_52 [i_14]))))));
    }
    var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_6), (var_4)))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) var_7)))) >> (((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11)))) & (54156213)))));
}
