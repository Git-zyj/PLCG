/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34379
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [3ULL] [3ULL] |= ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)42768)) / (((/* implicit */int) (unsigned short)28451)))), (((((/* implicit */int) (unsigned short)42758)) / (((/* implicit */int) (unsigned short)42768))))));
        var_17 -= ((/* implicit */int) var_5);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_16 [i_1] [6LL] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_1]))));
                            arr_17 [(unsigned short)17] [i_2] [19ULL] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) + (((long long int) arr_13 [i_3]))));
                            arr_18 [(_Bool)1] [i_3] [(signed char)3] [(signed char)3] [7U] = ((/* implicit */signed char) ((arr_8 [i_2] [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3])))));
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_21 [i_3] = ((/* implicit */short) 18260594090804393817ULL);
                            arr_22 [i_1] [i_2] [i_2] [i_2] [i_3] = ((1772204594) / (-1772204595));
                            var_18 = ((/* implicit */unsigned int) arr_9 [i_1] [i_3] [i_1]);
                            var_19 ^= ((/* implicit */unsigned short) arr_9 [i_1] [i_4] [i_3]);
                        }
                        for (long long int i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            arr_27 [i_1] [i_4] [i_1] &= (+(2373368165U));
                            var_20 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) 673221283)) - (arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                        }
                        arr_28 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)22756))));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_4]))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42779))) & (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))) : (1901077361U)))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            arr_31 [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) (unsigned short)42778);
            arr_32 [i_8] [(unsigned char)11] [i_8] = ((/* implicit */short) (+(((/* implicit */int) (short)12812))));
            var_24 = ((/* implicit */unsigned int) ((-1772204608) / (((/* implicit */int) (unsigned short)42768))));
        }
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            var_25 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58326))) & (var_5)))));
            var_26 = 4325597693219071926ULL;
        }
    }
    var_27 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (signed char)52)) / (((/* implicit */int) (signed char)-52)))) : (((/* implicit */int) var_9)))));
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - ((((+(var_6))) - ((-(((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        var_29 = ((/* implicit */unsigned int) 6692475238822983170ULL);
        /* LoopSeq 2 */
        for (unsigned int i_11 = 3; i_11 < 23; i_11 += 1) 
        {
            var_30 = ((/* implicit */short) (((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) * (var_10))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42750)))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */int) min((arr_40 [i_10] [i_11 + 1]), (arr_40 [i_10] [i_11 - 2])))) & (((/* implicit */int) (unsigned short)58326)))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_32 ^= ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)34439)) & (((/* implicit */int) arr_39 [i_10] [i_10] [i_10])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_10] [i_12])))))));
            arr_43 [i_12] = ((/* implicit */unsigned int) 10669452983288821957ULL);
        }
        arr_44 [i_10] = ((/* implicit */unsigned int) (unsigned short)1857);
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)7206)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)1873)))) * (((/* implicit */int) (unsigned short)1844))))) ? (((/* implicit */int) (unsigned short)22756)) : (((/* implicit */int) var_7))));
    }
    var_34 = var_8;
}
