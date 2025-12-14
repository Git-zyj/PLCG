/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49552
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((3375324206005301940LL) != (((/* implicit */long long int) 1310088667)))))) < (((/* implicit */int) var_2))));
    var_20 = ((/* implicit */short) min((((/* implicit */int) (short)-13126)), (((int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_5 [10U] = ((/* implicit */long long int) arr_0 [i_0 - 1]);
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_9 [(unsigned short)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_1]), (arr_7 [i_1])))) && (((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
        var_21 = (-(208866318));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1]))));
            arr_13 [(unsigned char)18] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_10 [i_1])), (var_6)))) ? (((arr_10 [i_2]) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_10 [i_2])))) : (((/* implicit */int) ((short) 1195736446300256137LL)))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((11080489340346588427ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))) && (((/* implicit */_Bool) max((arr_7 [i_1]), (arr_7 [i_1]))))))), (min((((/* implicit */unsigned long long int) arr_7 [i_1])), (arr_12 [i_3])))));
            var_24 = ((/* implicit */long long int) (unsigned char)104);
        }
        arr_17 [i_1] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (arr_15 [14] [i_1]) : (arr_15 [i_1] [i_1]))), (((arr_15 [i_1] [i_1]) ^ (arr_15 [i_1] [i_1])))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_22 [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58533))) : (arr_21 [i_4] [i_4] [i_4]));
            var_25 = ((/* implicit */_Bool) (+(arr_19 [i_4] [i_4])));
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_26 = (-(max((((/* implicit */long long int) ((int) arr_24 [i_4] [i_6]))), (-3945074647808340974LL))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) (short)-29203))) / (3945074647808340991LL))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [(unsigned short)6]))))))) / (((/* implicit */long long int) ((max((4005130625U), (((/* implicit */unsigned int) (signed char)-108)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_24 [17LL] [i_6]))) ? (min((((/* implicit */unsigned long long int) max((arr_21 [i_4] [i_4] [7]), (((/* implicit */long long int) arr_20 [i_4]))))), ((-(12995743955478933297ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_20 [i_4])) ? (-910234881877928747LL) : (arr_21 [(unsigned char)6] [i_6] [i_6]))) * (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))))));
            var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)13121))))) == (((((/* implicit */_Bool) var_7)) ? (arr_21 [i_4] [23U] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32991)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4])) ? (-3945074647808340962LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(unsigned short)7] [i_6]))))) : (((/* implicit */int) ((unsigned short) (unsigned char)102)))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
                {
                    {
                        arr_34 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((arr_21 [i_4] [i_8] [i_9 + 4]) ^ (((/* implicit */long long int) arr_26 [i_4] [i_7] [i_7])))) : (arr_33 [5] [i_9 + 2] [5] [5] [i_9 + 2] [i_4])))) ? (arr_25 [19] [3LL] [19]) : (((/* implicit */int) arr_32 [i_4]))));
                        arr_35 [i_8] [i_4] [i_4] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_11)) ? (var_5) : (4294967294U)))))));
                        var_30 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) arr_29 [i_7] [(unsigned short)19] [5ULL])) + (((/* implicit */int) (unsigned char)245)))) / ((-(((/* implicit */int) (short)-12929))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        arr_38 [i_10] [i_10] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) < (((unsigned int) (_Bool)1))))) >= (((/* implicit */int) arr_8 [i_10])));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) max((min((((((/* implicit */long long int) ((/* implicit */int) var_16))) & (508730551402191292LL))), ((~(1068408030162469038LL))))), (((((/* implicit */_Bool) 1391825162)) ? (arr_16 [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10]))))))))));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)27878)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-8117936184258418460LL)));
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 1) /* same iter space */
        {
            arr_43 [i_11] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((var_14) / (((/* implicit */long long int) arr_26 [15LL] [4U] [i_11])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)16300)))))));
            var_33 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1391825164)) ? (((/* implicit */int) (signed char)-109)) : (1774673006)))) >= (3782828384938805985ULL)));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 1) /* same iter space */
        {
            arr_46 [2] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (arr_36 [i_10]))) ? (((/* implicit */int) (short)-10339)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10] [i_12] [i_10] [i_10]))) > (6505726100393508661LL))))));
            var_34 = ((/* implicit */int) ((arr_41 [i_10] [i_12 + 1]) >= ((~(((/* implicit */int) arr_6 [16] [i_12]))))));
            arr_47 [i_10] [5U] = ((/* implicit */signed char) var_13);
        }
        for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 1) /* same iter space */
        {
            arr_50 [i_10] [i_10] [i_13] = ((/* implicit */signed char) max((((arr_15 [i_13 - 3] [i_13 - 3]) / (arr_15 [i_13 + 1] [i_13 - 3]))), (((/* implicit */long long int) arr_26 [i_10] [(_Bool)1] [17LL]))));
            arr_51 [9] [i_10] [i_10] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (-1391825170)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [(short)4])), (131070U)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35375))) & (arr_21 [i_13] [i_13 - 1] [i_10]))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            var_35 += (+(((/* implicit */int) arr_10 [i_10])));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_14] [i_14] [i_10]))) : (((unsigned long long int) 141494680))));
        }
        for (long long int i_15 = 4; i_15 < 11; i_15 += 1) 
        {
            arr_57 [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */long long int) (((-(1391825151))) % (((/* implicit */int) (_Bool)1))))) == (arr_39 [i_10] [i_15] [9LL])));
            arr_58 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)-1)))) & (((((/* implicit */_Bool) arr_53 [i_15 - 4] [i_15 - 4])) ? (((/* implicit */int) arr_53 [i_15 - 3] [i_15 - 1])) : (((/* implicit */int) arr_53 [i_15 - 1] [i_15 + 1]))))));
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 12; i_16 += 2) 
            {
                var_37 += ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_37 [9])), ((~((+(9223372036854775807LL)))))));
                arr_61 [i_15] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_18 [i_15 + 1])) / (((/* implicit */int) arr_18 [i_15 - 3])))), ((+(((/* implicit */int) var_18))))));
            }
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                arr_64 [i_17] [i_17] [i_17] = ((/* implicit */short) max(((unsigned short)32559), (((/* implicit */unsigned short) (signed char)17))));
                var_38 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)166))));
            }
            arr_65 [i_10] [i_15] [i_15 - 1] = ((arr_24 [i_10] [i_15 - 2]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_15 - 2] [i_15 + 1] [i_15 - 3])) ? (((((/* implicit */int) arr_6 [18U] [(short)8])) ^ (((/* implicit */int) (unsigned short)512)))) : (((((((/* implicit */int) arr_18 [i_10])) + (2147483647))) << (((((/* implicit */int) (unsigned char)13)) - (13)))))))));
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 23; i_18 += 1) 
    {
        var_39 = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_18]))));
        arr_68 [i_18] = ((/* implicit */long long int) ((arr_20 [i_18]) / (arr_25 [i_18] [i_18] [i_18])));
    }
}
