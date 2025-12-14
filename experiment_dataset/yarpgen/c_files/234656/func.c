/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234656
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_2 [i_0] [10] [i_0]))) < (((/* implicit */int) ((signed char) ((unsigned long long int) var_3))))));
                        arr_9 [i_0] [(unsigned short)4] [i_1] [9ULL] = ((/* implicit */unsigned char) ((short) min((arr_3 [i_0] [i_1] [i_3 + 1]), (var_6))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                        var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((+(max((((/* implicit */long long int) var_0)), (arr_6 [i_0] [i_1] [(short)10] [2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) ((unsigned char) var_0));
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [4ULL] [4ULL] [i_0] [i_0])) ? (var_2) : (var_0))))))) ? (((/* implicit */int) arr_0 [i_0])) : (max((((/* implicit */int) ((signed char) var_3))), (((((/* implicit */int) var_4)) | (((/* implicit */int) var_5))))))));
        arr_12 [(short)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)95)), (-1767237747)))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((unsigned char) var_11));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)87)) : (613998877)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4 + 1]))) : (((unsigned int) (unsigned char)160))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)255))))))) : (max((((long long int) var_9)), (((/* implicit */long long int) arr_14 [i_4 + 1]))))));
        arr_17 [i_4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 + 1])) ? (arr_14 [i_4 + 1]) : (((/* implicit */int) var_11)))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
        {
            arr_21 [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_18 [i_4 + 1] [i_5])))) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [(unsigned short)16])) ? (((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) var_1)))))))), (max((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) var_9))))));
            var_18 = ((/* implicit */unsigned char) ((unsigned long long int) (-(var_10))));
            arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_5] [i_4]));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_19 *= ((/* implicit */short) var_2);
            arr_25 [i_4] = ((/* implicit */unsigned int) ((var_9) <= (((/* implicit */unsigned long long int) ((unsigned int) var_8)))));
            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_11))) ? ((-(((/* implicit */int) arr_15 [i_6])))) : (((/* implicit */int) var_5))));
            arr_26 [i_4] [10U] [i_6] &= ((/* implicit */signed char) ((arr_23 [i_4] [i_4] [i_6]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [20] [i_6] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        arr_29 [(unsigned char)7] = max((min((276121962), (1274272386))), (((/* implicit */int) ((short) (signed char)-1))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) var_10);
            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(arr_18 [i_7] [(unsigned char)8])))) && (var_3))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_28 [i_7] [9LL])) : (((/* implicit */int) arr_15 [i_8]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6484168591587335220LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)95))))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (var_6)));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                arr_35 [i_7] [0LL] [i_8] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(var_10))))), (max((((/* implicit */unsigned int) arr_32 [2ULL] [i_8 + 1])), (max((((/* implicit */unsigned int) arr_23 [i_7] [i_8] [i_7])), (var_8)))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        {
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_39 [i_11])) ? (var_9) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_11])) >> (((((/* implicit */int) var_11)) - (166))))))))) ? (((/* implicit */int) max(((unsigned short)65528), (((/* implicit */unsigned short) (short)-1))))) : (((/* implicit */int) arr_19 [(short)0] [i_8] [i_7]))));
                            arr_41 [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */unsigned char) (+(var_10)));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_4))));
                        }
                    } 
                } 
            }
            arr_42 [i_7] [5U] [i_7] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_6)) : (arr_30 [i_8 + 1]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)38)) : (1912358992))))));
        }
        arr_43 [i_7] [i_7] = ((/* implicit */_Bool) var_8);
    }
    var_25 = ((/* implicit */unsigned short) var_0);
}
