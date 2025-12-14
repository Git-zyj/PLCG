/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21975
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */unsigned char) var_8);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_20 = min((max((((/* implicit */unsigned long long int) 4097821725U)), (((((/* implicit */_Bool) 13467974566608601432ULL)) ? (13467974566608601432ULL) : (2079890654096095427ULL))))), (((/* implicit */unsigned long long int) var_15)));
                            var_21 = ((/* implicit */int) ((unsigned long long int) 18446744073709551613ULL));
                        }
                    } 
                } 
                var_22 *= 2ULL;
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) var_12)), ((+(var_3)))))) * (((((/* implicit */_Bool) (unsigned short)38036)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (1071616944767805261LL)))));
                        var_24 = max((((/* implicit */unsigned long long int) min(((+(1039686185U))), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-15837)) + (2147483647))) >> (((((/* implicit */int) var_11)) - (22))))))))), (var_4));
                        arr_22 [i_6] [i_5] [i_7] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_4] [i_7])) == (3820796424364618461ULL))))))) ? (((/* implicit */unsigned long long int) (~(arr_18 [i_4] [i_7] [i_7] [i_6] [i_7])))) : (max(((~(var_4))), (((/* implicit */unsigned long long int) ((unsigned char) 10168795862018016689ULL)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1048544)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (unsigned short)38036))))), (((13467974566608601423ULL) / (((/* implicit */unsigned long long int) arr_13 [i_7] [i_5] [i_5]))))))));
                            var_25 = min((((18446744073709551607ULL) >> (((arr_12 [12]) - (2873838637723761096ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) 0ULL))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)38064)) << (((18446744073709551613ULL) - (18446744073709551609ULL)))))), (min((13597100475005951078ULL), (18446744073709551613ULL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) ^ (min((arr_16 [i_4] [i_5] [i_6] [i_5]), (((/* implicit */unsigned long long int) var_6)))))) : (((13467974566608601432ULL) << (((13467974566608601423ULL) - (13467974566608601393ULL)))))));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_6] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_1))), (min((((/* implicit */unsigned long long int) (unsigned char)206)), (arr_16 [18ULL] [i_5] [i_5] [i_5])))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((((((unsigned int) arr_14 [18ULL] [19] [(unsigned short)21])) * (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_5] [i_6] [12] [i_4]))))) << (((((10275614814327799424ULL) * ((+(3820796424364618461ULL))))) - (12147382703969514595ULL)))))));
                    }
                    var_29 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_6]))));
                    var_30 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)38062)))) ? (min((arr_12 [i_6]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)24))))))) : (((unsigned long long int) var_18))));
                }
            } 
        } 
    } 
}
