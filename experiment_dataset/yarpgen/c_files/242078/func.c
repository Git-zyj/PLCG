/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242078
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
    var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) / (((/* implicit */int) (unsigned short)4962))))), ((+(((((/* implicit */_Bool) (signed char)71)) ? (-2979730419995664860LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), ((+((-(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_2])), ((unsigned char)245)))) * (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))))) ? (((arr_9 [i_3] [i_2] [i_1 - 1] [i_0]) / (arr_9 [i_3 - 2] [i_2] [i_1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((signed char)-98), (var_8)))), (var_6))))));
                            var_17 -= ((/* implicit */signed char) (unsigned char)243);
                            var_18 = ((/* implicit */short) max((((/* implicit */long long int) var_4)), ((~(((arr_2 [i_1] [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [9LL] [i_2] [i_0]))) : (var_6)))))));
                            arr_11 [i_0] [(signed char)3] [i_2] [(signed char)3] [(signed char)3] = ((/* implicit */_Bool) (~((+((~(var_6)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_1]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_9 [i_1] [i_1] [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_20 = ((/* implicit */signed char) (((_Bool)0) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)39)))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) arr_13 [i_4] [i_4]))))));
        arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_14 [i_4] [i_4])))))) == (609761209U)));
        arr_16 [i_4] = (signed char)61;
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) (_Bool)1))));
        var_22 += ((/* implicit */_Bool) ((long long int) arr_18 [i_5]));
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                arr_27 [i_6] = ((/* implicit */unsigned int) max(((~(arr_23 [i_6]))), (861484873429483245LL)));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */signed char) max((var_6), (((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) (short)2044)) < (((/* implicit */int) arr_25 [i_6] [i_7] [i_8] [i_8]))))), (arr_18 [i_7 - 2]))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_8] [i_7 - 1] [i_7 - 1] [i_6]))))) ? (((((/* implicit */int) arr_31 [i_9] [i_9] [i_7 - 1] [i_7 + 1])) | (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_31 [10U] [i_10] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) (unsigned char)196))))));
                            var_25 |= ((/* implicit */_Bool) -2979730419995664846LL);
                            arr_34 [i_6] = ((/* implicit */long long int) arr_20 [(_Bool)1]);
                        }
                    } 
                } 
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_7 + 1])) ? (((/* implicit */long long int) arr_19 [i_7 - 2])) : (arr_24 [i_7] [i_7 + 1] [(_Bool)1]))) <= (((arr_24 [i_11] [i_7 - 1] [i_7]) - (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
                arr_37 [i_6] = ((/* implicit */unsigned short) arr_13 [i_6] [i_7]);
            }
            var_27 = ((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned char) var_2))));
            arr_38 [6U] |= ((/* implicit */signed char) (~(((/* implicit */int) max(((short)2044), (((/* implicit */short) (unsigned char)166)))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_6] [4ULL] [i_7 + 1] [i_6]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_33 [i_6] [17ULL] [18U] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_7])))))))) : (((/* implicit */int) (!(arr_22 [i_7 + 1] [i_7 - 1] [i_7 + 1])))))))));
            arr_39 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (13U))))) | ((((_Bool)0) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) var_4))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_13 = 2; i_13 < 18; i_13 += 2) 
            {
                arr_45 [i_13] [i_6] [i_6] [(_Bool)1] = ((((/* implicit */_Bool) arr_25 [i_6] [i_12] [i_13 + 1] [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_12]))) : (var_9));
                arr_46 [i_6] [i_6] [i_13] [(unsigned char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)47995)) ^ (((/* implicit */int) (signed char)56))))) : (((((/* implicit */_Bool) arr_26 [i_6] [i_12] [i_13])) ? (609761209U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18742)))))));
                arr_47 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1446)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_13 - 1]))));
                var_29 |= ((/* implicit */signed char) (_Bool)1);
            }
            var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_42 [i_6])))) : (arr_19 [i_6]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_9), (((/* implicit */unsigned long long int) -2979730419995664846LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_2)), ((signed char)16)))))))))));
        }
    }
}
