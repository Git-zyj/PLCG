/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2025
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
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_5))));
            var_15 += ((/* implicit */signed char) (~((~(((/* implicit */int) var_6))))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_8 [15LL] [i_2] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) var_5)) : (arr_0 [i_0 - 3])))));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
            {
                var_16 = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (arr_1 [i_0 - 3])))) / (((/* implicit */int) var_9)));
                arr_12 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((unsigned long long int) arr_0 [i_2]))))) ? (((/* implicit */unsigned int) (-(arr_9 [(unsigned short)6] [i_2] [i_0 - 2])))) : (arr_1 [i_0 + 2])));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_11)))) ? (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_4 [i_0] [21] [21])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2)))) >> ((-(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 3])))))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_7))));
                arr_13 [(unsigned short)12] [i_2] [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) var_1))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    arr_19 [i_0] [i_2] [i_0] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((signed char) -1064369331));
                    arr_20 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((signed char) arr_16 [i_0] [i_0] [(signed char)13] [i_0 - 1]));
                }
                for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) var_9);
                    arr_24 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_2]))));
                    arr_25 [i_0] [i_0] [i_0 - 3] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2] [9U] [i_4]))));
                }
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [16U] [(_Bool)1] [i_0 - 1])))))));
                arr_26 [i_2] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) -4333914194491645663LL)))));
                arr_27 [i_2] [i_4] [i_2] [i_4] = ((/* implicit */long long int) ((arr_14 [i_0] [i_0 + 1] [i_4] [i_2]) >= (((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_0 - 2] [i_0]))));
            }
            for (int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
            {
                arr_30 [(unsigned char)6] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4333914194491645655LL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) 2193282073988160627LL);
                    arr_33 [i_0] [i_2] [19LL] [19] [i_0 - 1] = ((/* implicit */unsigned char) 2193282073988160621LL);
                }
            }
            /* LoopSeq 3 */
            for (short i_9 = 3; i_9 < 22; i_9 += 2) /* same iter space */
            {
                arr_37 [(unsigned char)14] [i_2] [22] &= min((((/* implicit */unsigned long long int) ((_Bool) var_9))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 - 2] [i_2] [i_9]))) ^ (arr_14 [i_0] [i_0] [i_0] [16ULL]))));
                var_22 += ((/* implicit */_Bool) (short)24460);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    arr_41 [i_0] [(unsigned short)11] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_9] [(unsigned short)16] [20] [i_9 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_31 [i_9] [i_9] [i_9] [19U] [i_9] [i_9 + 1]))));
                    arr_42 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [10U] [i_2] [i_10] [i_10] [i_10] [i_2]))));
                }
                arr_43 [i_9] [i_9] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 - 3] [i_2] [i_9])))))));
            }
            for (short i_11 = 3; i_11 < 22; i_11 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [i_0 + 2])), (arr_14 [i_2] [i_11 - 1] [i_11 - 3] [i_2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (unsigned short)62092)))))))), (min((((((/* implicit */_Bool) (short)22955)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)47965)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
                var_25 = ((/* implicit */int) ((min((arr_29 [i_0 - 3] [i_0 - 2]), (arr_29 [i_0 + 1] [i_0 - 1]))) * ((+(min((arr_29 [i_0] [i_0 + 2]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_11 - 3]))))))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                arr_48 [10ULL] [i_2] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4333914194491645663LL)) ? (((/* implicit */int) arr_11 [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) var_2))));
                arr_49 [i_2] = ((/* implicit */int) var_11);
            }
            arr_50 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_14 [i_2] [i_0 + 2] [i_0 - 2] [i_2]))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */short) arr_17 [i_0 - 2] [i_0 + 1] [0U])))))));
        }
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
        {
            arr_53 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) arr_35 [(unsigned char)8] [(unsigned char)8] [i_13]));
            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_5 [i_0 + 2]), (arr_5 [i_13]))))));
            /* LoopSeq 2 */
            for (signed char i_14 = 4; i_14 < 22; i_14 += 3) 
            {
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_3))));
                arr_57 [i_0] [i_0 - 2] [(unsigned short)6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_29 [i_0 - 3] [i_0 - 3])))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-30))))), (4333914194491645662LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_15 [i_0] [18U] [i_0] [18U])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_34 [i_14] [20LL] [(unsigned char)8])), ((unsigned char)12)))))))));
            }
            /* vectorizable */
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    var_28 *= ((/* implicit */unsigned char) arr_3 [i_0 - 1]);
                    arr_62 [i_16] [i_16] [(unsigned char)4] [i_13] [i_0] [i_0] = ((signed char) ((unsigned long long int) var_3));
                    arr_63 [(signed char)13] [(signed char)13] = ((/* implicit */unsigned int) arr_46 [i_16] [i_16]);
                    var_29 = ((/* implicit */_Bool) (+(arr_29 [i_0 - 1] [i_0 + 1])));
                    arr_64 [i_15] [i_15] [i_15] [i_15] = (!(((/* implicit */_Bool) arr_52 [i_0 - 3] [i_0 + 2])));
                }
                arr_65 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_9);
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_7))));
            }
            arr_66 [i_0] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13] [i_13] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_13] [i_13] [i_0 + 1]))) : (arr_44 [i_13] [i_13] [i_0])))) ? (((arr_10 [i_0 + 1] [(_Bool)1] [i_0 + 1]) ? (min((((/* implicit */long long int) var_9)), (var_8))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65521))))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_52 [14U] [i_0])), (4333914194491645636LL))) < (((/* implicit */long long int) min((arr_0 [19]), (((/* implicit */int) (_Bool)1)))))))))));
        }
        arr_67 [i_0 - 3] |= ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */int) var_6)) * (((/* implicit */int) var_3))))))), ((+(arr_7 [i_0 - 3] [i_0 + 2])))));
    }
    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_69 [i_17]) ? (((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_17] [i_17] [i_17]))) ^ (var_7))) : (((/* implicit */long long int) arr_9 [i_17] [i_17] [i_17]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((arr_39 [i_17] [i_17] [i_17] [i_17]), ((+(var_8)))))));
        arr_70 [(signed char)11] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) arr_2 [i_17] [i_17])));
        arr_71 [i_17] [9ULL] = ((/* implicit */unsigned long long int) ((1201606308119960415LL) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_52 [i_17] [i_17]))))));
        arr_72 [i_17] [8LL] = (_Bool)1;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 21; i_18 += 3) 
    {
        arr_75 [i_18] [i_18] = ((/* implicit */signed char) (+(((int) var_11))));
        arr_76 [10] = ((/* implicit */unsigned long long int) arr_21 [i_18] [i_18] [(unsigned char)12] [i_18] [i_18]);
    }
    var_32 = ((/* implicit */unsigned char) var_3);
}
