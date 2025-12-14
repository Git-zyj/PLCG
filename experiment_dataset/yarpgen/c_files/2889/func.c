/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2889
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
    var_16 = ((/* implicit */unsigned int) var_3);
    var_17 += ((/* implicit */unsigned char) var_14);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (3127113196U) : (0U)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 |= ((/* implicit */short) var_5);
        var_20 = ((/* implicit */int) var_11);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) arr_1 [(unsigned short)7]);
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_1 [i_1]), (arr_1 [i_1]))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_1]))))) ? (((unsigned long long int) arr_10 [i_1] [i_2] [(unsigned char)8] [i_4 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_1]))))));
                        var_24 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) var_13)));
                        arr_14 [i_4] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1] [i_1]);
                        arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [11LL] [i_4]);
                    }
                } 
            } 
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_1])), (arr_10 [i_1] [i_1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24228))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
        }
        for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_26 -= ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) arr_9 [i_1] [i_5] [i_1])))));
            arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) -413937561))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_5]))) : ((-(((long long int) arr_13 [i_5] [i_1] [i_5] [i_1]))))));
            var_27 = ((/* implicit */signed char) 387017447U);
        }
        for (short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                arr_25 [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_19 [i_1] [i_1]), (((/* implicit */unsigned int) ((11U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_7])))))))))));
                arr_26 [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_7] [i_7])) / (((/* implicit */int) ((arr_20 [i_1] [i_6] [(unsigned char)8]) >= (((/* implicit */int) var_11)))))));
            }
            for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                arr_29 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (signed char)-119);
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1])), (arr_30 [i_1] [i_1] [i_8] [i_9]))))))));
                    var_29 |= ((/* implicit */long long int) 27672740);
                    var_30 += ((/* implicit */unsigned char) arr_17 [i_1]);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_19 [i_8 - 1] [i_8 - 1]), (arr_19 [i_8 + 1] [i_8 + 1])))) ? (((int) max((((/* implicit */unsigned char) arr_2 [i_1] [i_6])), (arr_24 [i_1] [i_6] [i_8] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    var_32 = (~((~(((unsigned int) arr_23 [i_1] [(unsigned short)6] [(short)14] [i_9])))));
                }
                for (signed char i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    var_33 -= ((/* implicit */_Bool) var_0);
                    arr_36 [i_1] [i_6] [i_8] [(signed char)17] = ((/* implicit */signed char) (~(min((((/* implicit */long long int) var_14)), (min((arr_16 [i_6] [i_6] [i_1]), (((/* implicit */long long int) arr_4 [i_8]))))))));
                }
            }
            arr_37 [i_6] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21794))) / (23U))));
            arr_38 [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_2 [i_1] [i_6])) + (((/* implicit */int) arr_2 [i_1] [i_6])))));
            var_34 = ((/* implicit */unsigned short) max(((+(1048575U))), (((/* implicit */unsigned int) ((_Bool) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6])))));
        }
        var_35 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_34 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_1])))) : ((+(-6187036033682305280LL))))) >= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1]))))), (arr_17 [i_1])))))));
        arr_39 [i_1] = ((/* implicit */_Bool) ((unsigned short) max((arr_17 [i_1]), (((/* implicit */unsigned short) var_6)))));
        var_36 = ((/* implicit */short) max((((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) var_8)) : (max((((/* implicit */unsigned int) (signed char)36)), (3127113171U))))), (((/* implicit */unsigned int) (signed char)124))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_42 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_11] [i_11])) ? (((/* implicit */int) arr_27 [(unsigned char)9] [(unsigned char)9])) : (((/* implicit */int) (signed char)15))))) ? ((~(((/* implicit */int) arr_4 [i_11])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2314259012U)) >= (arr_13 [(signed char)3] [i_11] [i_11] [i_11]))))))) ? (((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23635))) > (882988885U))))))) : (((var_10) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (4325807405287424604LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
        arr_43 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (var_2)))), (32766ULL)))) ? (max((((/* implicit */int) ((signed char) arr_21 [i_11]))), (((((/* implicit */int) arr_2 [i_11] [i_11])) & (((/* implicit */int) var_6)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_11])))))))));
        var_37 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_11] [i_11])) >= (((/* implicit */int) arr_2 [i_11] [i_11]))))) < (((((/* implicit */_Bool) arr_2 [i_11] [i_11])) ? (((/* implicit */int) arr_2 [i_11] [i_11])) : (((/* implicit */int) arr_2 [i_11] [i_11]))))));
    }
}
