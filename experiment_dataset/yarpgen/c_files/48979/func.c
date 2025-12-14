/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48979
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            arr_7 [6ULL] [i_1] = ((/* implicit */long long int) ((max((((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_0])))), ((+(((/* implicit */int) (signed char)99)))))) < (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) (unsigned char)17))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_20 += ((/* implicit */_Bool) min((((long long int) (short)17514)), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [(unsigned char)12])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [17ULL] [i_2] [i_0] [i_0])))) == (((/* implicit */int) var_14)))))));
                        var_21 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_11 [i_1 + 1] [i_1])))));
                        var_22 = ((/* implicit */signed char) min((var_22), ((signed char)-79)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned int) min((max((arr_15 [i_1 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2]), (max((var_7), (((/* implicit */unsigned long long int) arr_9 [i_1])))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_8))), ((~(((/* implicit */int) arr_13 [i_4] [i_1] [i_4] [(short)18] [i_4] [i_4])))))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    var_24 = ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 - 2]))) < (16466884645173961113ULL))))) : (var_7));
                    var_25 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 6050802794189360414LL))))), ((~(((/* implicit */int) var_14))))))), (min((arr_17 [i_5 - 2] [i_1 + 2]), (((/* implicit */unsigned long long int) (unsigned short)65024))))));
                    var_26 ^= ((/* implicit */unsigned char) ((15130265335135581187ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2]))))))));
                    arr_20 [2ULL] [(short)9] [(short)9] = ((/* implicit */long long int) ((min((arr_15 [i_5] [i_5] [i_5 - 2] [i_4 + 3]), (arr_15 [i_5] [i_5] [i_5 + 1] [i_4 + 3]))) < (((((/* implicit */_Bool) arr_15 [i_5] [i_5 + 1] [i_5 + 1] [i_4 + 2])) ? (arr_15 [i_5] [i_5] [i_5 - 1] [i_4 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511)))))));
                }
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (max((((unsigned long long int) (unsigned char)194)), (((/* implicit */unsigned long long int) min((arr_2 [i_1 - 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 - 2]))))))));
            }
            for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned long long int) ((unsigned char) var_7));
                arr_23 [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned char)227), (((/* implicit */unsigned char) arr_11 [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [12ULL] [12ULL]))) : (min((((/* implicit */unsigned long long int) 9032990252356951795LL)), (15130265335135581203ULL))))) & (((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [(unsigned char)18] [i_6 - 1] [i_6 + 1] [i_1 + 2])))));
            }
            arr_24 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_0] [i_1 + 2])))) | (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)84)), ((unsigned char)249))))))) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [(_Bool)1] [i_0])))));
            arr_25 [(signed char)3] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)63517))))));
        }
        for (short i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_29 = ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_17 [i_0] [i_7]))))))) | ((~(((/* implicit */int) arr_26 [i_0])))));
            var_30 ^= ((/* implicit */short) ((unsigned char) (+(var_8))));
        }
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (long long int i_9 = 1; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_35 [i_9] = ((/* implicit */unsigned short) ((int) var_5));
                    var_31 = ((/* implicit */unsigned long long int) min((((max((((/* implicit */unsigned int) var_11)), (172347228U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9]))))), (((/* implicit */unsigned int) (unsigned char)37))));
                    arr_36 [i_9] [i_8] [i_9 + 3] = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((1990967055U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9 + 2]))))))) >> (((/* implicit */int) arr_6 [i_0]))));
                }
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
    {
        var_32 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (((/* implicit */int) arr_13 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) ((((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10])) < (((/* implicit */int) arr_6 [i_10])))))))));
        arr_40 [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7356452578011527618LL))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)11841), (min((((/* implicit */short) var_4)), (var_9))))))));
            arr_44 [i_11] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10]))))) ? (((unsigned long long int) ((var_13) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */signed char) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_1)))))))))));
            var_34 = ((/* implicit */short) var_15);
        }
    }
    var_35 = ((/* implicit */long long int) (unsigned short)58000);
    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) var_11))));
}
