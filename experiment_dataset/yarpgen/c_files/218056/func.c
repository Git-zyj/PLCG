/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218056
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
    var_18 = ((/* implicit */int) ((var_1) ? (var_17) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_19 *= ((((/* implicit */_Bool) 2147483648U)) ? (3646741050U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22507))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)95)) / ((+(arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_21 = ((/* implicit */short) (-((~(-1)))));
            var_22 *= ((/* implicit */signed char) (((~(((/* implicit */int) arr_3 [i_1])))) < (((/* implicit */int) arr_3 [i_1]))));
        }
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            var_23 = ((/* implicit */signed char) ((((5061619628406560982LL) | (((/* implicit */long long int) var_16)))) + (((/* implicit */long long int) -401944439))));
            var_24 = ((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_1]);
        }
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) (signed char)-49);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_16 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_3 [i_1]))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_12 [i_5] [i_5] [i_4] [i_1]))) * (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) * (arr_11 [i_4] [i_4])))));
            }
            arr_17 [i_4] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-78))))) ? (var_15) : (((int) (_Bool)0)));
            var_27 = ((/* implicit */unsigned char) (unsigned short)52870);
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            arr_27 [i_1] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */_Bool) ((arr_9 [i_4]) - (arr_9 [i_4])));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_7 [i_1] [i_8] [i_6])))))))));
                        }
                    } 
                } 
                arr_28 [i_1] [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) var_12);
                var_29 = ((/* implicit */unsigned short) var_1);
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) 594135992338404604ULL))));
            }
            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                var_32 *= ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)180)) * (((/* implicit */int) (unsigned short)52883))))));
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(16777215)))) || (((((/* implicit */_Bool) (signed char)47)) || (((/* implicit */_Bool) var_5))))));
                var_34 = ((/* implicit */int) (-(8713409824567347902LL)));
                var_35 |= ((((((/* implicit */int) var_3)) - (((/* implicit */int) arr_30 [i_1] [i_4] [14])))) % (arr_7 [i_1] [(unsigned char)8] [i_1]));
            }
        }
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_37 [i_1] [i_1] [(unsigned short)8] [i_1] |= ((int) (_Bool)1);
                arr_38 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((15ULL) >> (((/* implicit */int) arr_30 [i_10] [i_10] [i_10]))));
                var_36 = ((/* implicit */long long int) ((var_1) || (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) 18446744073709551596ULL))))));
                var_37 |= 18446744073709551609ULL;
            }
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_1]))) / (-7512971612286007720LL))))));
                var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                arr_42 [i_1] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11208)) && (((/* implicit */_Bool) (+(arr_11 [i_10] [i_10]))))));
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) -4788117641833125955LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17852608081371147011ULL)))))));
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)42)) | (((/* implicit */int) arr_34 [i_1] [i_1] [i_12] [i_12]))));
                    var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) 1854127455018368120LL))));
                }
            }
            var_43 = (!(((/* implicit */_Bool) ((var_17) * (((/* implicit */unsigned long long int) var_16))))));
            var_44 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (1851153878)));
        }
        var_45 = ((/* implicit */unsigned int) arr_36 [i_1]);
        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_1])) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_24 [i_1]))));
        var_47 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_30 [i_1] [i_1] [4U])))));
    }
}
