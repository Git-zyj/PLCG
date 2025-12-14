/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203801
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
    var_14 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_10)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) < (((/* implicit */int) ((short) ((((/* implicit */_Bool) 3981162972974909107ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (var_12)))))));
        var_16 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1076650577)))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_17 = ((/* implicit */int) (unsigned char)19);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) max((8970564170920760678ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (signed char)72)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)255))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                arr_14 [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */int) var_10)) - (((/* implicit */int) arr_6 [i_0] [i_2] [i_3])))), (((/* implicit */int) var_0)))), (((/* implicit */int) max((var_13), ((short)15186))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) | ((-(((/* implicit */int) var_10)))))))))));
                    arr_17 [i_0] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4] [i_3 - 1] [i_2] [i_0])) * (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_2])), (arr_16 [i_0] [i_2] [i_3 + 1] [i_4])))) : (((arr_1 [i_0] [i_2]) ? (((/* implicit */int) arr_16 [i_0] [i_2] [i_2] [i_4])) : (((/* implicit */int) var_9))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_16 [i_5] [i_5] [i_5] [i_5])), ((-(max((var_3), (((/* implicit */unsigned long long int) var_6)))))))))));
                    arr_22 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */signed char) (_Bool)1);
                    var_21 = ((/* implicit */_Bool) ((unsigned char) ((var_12) & (((/* implicit */unsigned int) arr_12 [i_3 + 1] [i_3] [i_3])))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        arr_26 [14ULL] [i_2] [i_3] [14ULL] [i_5] = ((/* implicit */signed char) ((int) ((((/* implicit */long long int) arr_7 [i_3])) < (((((/* implicit */_Bool) var_10)) ? (2030810979117483808LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned char)2] [i_5] [i_5] [(signed char)0]))))))));
                        var_22 = ((/* implicit */unsigned short) ((var_2) / (var_2)));
                        arr_27 [i_0] [i_5] [i_3] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) arr_9 [i_6])) ? (-1076650577) : (((/* implicit */int) arr_1 [i_5] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_1))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_3 + 1] [i_6 - 2])))));
                        arr_28 [(short)16] [i_5] [i_5] [i_2] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_2] [i_0] [i_5] [i_0] [i_5] [i_3 + 1]))) + (arr_10 [i_0] [i_2] [(_Bool)0] [(_Bool)0]))), (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [i_2])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_2 [i_0] [i_3]))));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_3 + 1])) % (((/* implicit */int) arr_23 [i_0] [i_3 - 1] [i_3] [i_5] [i_2] [i_0] [16]))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_5] [i_5] [i_5] [i_7]))) < (arr_24 [i_2]))))));
                    }
                }
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                {
                    arr_36 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_12);
                    arr_37 [i_2] [i_2] [i_3 - 1] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) var_9);
                    arr_38 [i_0] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_3 + 1] [i_3 + 1])), (var_3)))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((unsigned long long int) (unsigned char)240)))))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_9))));
                    }
                    for (int i_10 = 4; i_10 < 18; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((((int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_3] [i_0] [i_8] [i_10 - 1])) ^ (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_3] [i_2] [i_8] [i_10 - 2]))))));
                        arr_44 [i_0] [i_0] [i_8] [i_8] [i_10] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_23 [i_10] [i_10] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2] [i_0])))) ? ((-(((/* implicit */int) (unsigned char)26)))) : ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) < (-1LL))))))));
                        var_29 = max((((((/* implicit */unsigned long long int) -1378831281)) % (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_2] [i_3] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_33 [i_0] [i_2] [i_2] [i_10 + 1])))));
                    }
                }
            }
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((arr_7 [i_0]) < (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)0)))))))))));
        }
        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            var_31 = arr_34 [(signed char)19] [i_0] [i_0] [i_11];
            var_32 = ((/* implicit */unsigned short) arr_5 [(unsigned char)14] [i_11] [i_11]);
            var_33 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_11]);
        }
    }
}
