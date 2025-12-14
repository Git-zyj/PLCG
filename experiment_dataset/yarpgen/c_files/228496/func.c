/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228496
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_20 &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((var_10) >> (((((/* implicit */int) var_16)) + (23849))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), ((~(((((/* implicit */_Bool) (unsigned short)9329)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36500))) : (arr_2 [i_0 - 1] [i_0 - 3])))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) ((min((arr_2 [(short)4] [i_0 - 1]), (((/* implicit */long long int) var_13)))) / (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -3188475382950441943LL)) || (((/* implicit */_Bool) arr_1 [(unsigned char)13] [7LL]))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                arr_11 [i_0] [i_1 - 2] [i_0] [i_1 + 3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0]))))) ? (((/* implicit */int) arr_9 [16] [i_1 + 1] [i_1 + 1])) : ((~(((/* implicit */int) (unsigned short)39063))))))));
                var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_8 [i_0] [i_1])), (var_2)));
                var_22 -= ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_4 [i_1] [i_1] [i_2]), (arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 3]))))));
                arr_12 [i_2] [0LL] [i_1] [13] = ((/* implicit */unsigned char) (short)-25297);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    arr_19 [i_0] [i_1 + 1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36523)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4]))) : (-3188475382950441943LL)))) ? ((-(873397702U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80)))));
                    var_23 = ((/* implicit */long long int) ((signed char) var_2));
                }
                for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_26 [i_0] [(unsigned char)11] [i_5 - 3] [(unsigned char)11] [(unsigned char)11] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_1])) ? (arr_14 [i_0] [i_1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                        arr_27 [4LL] [i_1] [i_3] |= ((/* implicit */int) arr_9 [i_1 + 1] [i_5 - 1] [i_0 - 3]);
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(arr_8 [i_0 + 4] [i_0 - 1]))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [1]))) != (var_0)));
                        arr_28 [i_3] [i_3] [i_6] = ((/* implicit */int) ((unsigned int) arr_13 [i_5 - 2] [i_1 + 3] [i_0] [i_0 - 2]));
                    }
                    arr_29 [i_0] [i_0] [i_1] [i_3] [i_1] = ((long long int) arr_2 [i_0 - 3] [i_1 - 2]);
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_1 + 3] [i_5 - 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [8LL])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_3] [i_5 - 2] [9LL] [9LL])))))))))));
                }
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_0] [0U] [i_0] [0U] [4LL] [i_0 + 3])))))));
                }
                arr_34 [i_0] [17U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 800661534U)) ? (((((((/* implicit */int) (short)-9605)) + (2147483647))) >> (((3421569594U) - (3421569574U))))) : ((~(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))))));
                arr_35 [i_3] [i_3] [i_3] &= ((2367979514879471540LL) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1 - 2] [i_0]))));
            }
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 19; i_8 += 4) 
            {
                arr_38 [i_0] [4LL] [i_8 - 1] |= ((/* implicit */int) min((((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_1] [(unsigned short)15] [i_8]))) / (3178964078U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 - 3])))))))), (((/* implicit */unsigned int) arr_37 [i_0]))));
                var_28 = min((((/* implicit */long long int) max((arr_10 [i_1 - 1]), (arr_10 [i_1 - 1])))), (arr_6 [i_0]));
            }
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            arr_41 [i_0] = ((/* implicit */long long int) arr_23 [i_0] [i_9] [i_0] [i_0 - 1] [(signed char)12] [i_0 - 1] [14]);
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                arr_44 [i_0] [i_0] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_0 - 2] [i_9])) ? (3188475382950441942LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_9])))));
                var_29 = ((unsigned int) var_2);
            }
            for (unsigned char i_11 = 1; i_11 < 17; i_11 += 1) 
            {
                arr_48 [i_0] [i_11] = ((/* implicit */unsigned int) var_13);
                var_30 &= ((/* implicit */short) (~(((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                var_31 = (~(var_6));
            }
        }
        arr_49 [i_0] = ((/* implicit */int) arr_6 [i_0 + 4]);
        arr_50 [i_0] = ((/* implicit */int) (signed char)-37);
    }
    /* vectorizable */
    for (long long int i_12 = 3; i_12 < 16; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_13 = 1; i_13 < 19; i_13 += 3) 
        {
            arr_57 [i_12] [i_12 + 1] [i_13 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-2818)) ? (((/* implicit */int) ((signed char) (signed char)-30))) : (((/* implicit */int) arr_43 [i_12 - 3]))));
            arr_58 [i_12] [i_12] = ((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12 - 3] [i_12] [i_13 - 1] [(short)7])) ? (3188475382950441942LL) : (((/* implicit */long long int) var_10)));
            arr_59 [i_13] [i_12 - 3] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
            arr_60 [i_12] [i_12] [i_13 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 873397697U)) ? ((-(var_0))) : (var_10)));
            arr_61 [i_12] [(signed char)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_24 [i_12 + 2] [i_12] [i_12 - 2] [i_12 - 3] [(unsigned short)4] [i_12 + 4] [i_12 + 4])) : (((((/* implicit */_Bool) 6181301781040182907LL)) ? (2095127246U) : (((/* implicit */unsigned int) var_17))))));
        }
        for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            arr_65 [i_14] [16] [i_12 - 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (3421569615U))))));
            arr_66 [i_12] [i_12] = -8546918428583909986LL;
        }
        for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_16 = 2; i_16 < 18; i_16 += 4) 
            {
                var_32 = (+(arr_46 [i_16 + 2]));
                arr_72 [(unsigned char)12] [(unsigned char)12] = ((arr_2 [i_16 + 2] [i_12 + 1]) - (arr_2 [i_16 - 1] [i_12 + 1]));
            }
            for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    arr_80 [i_12 - 3] [i_12 - 3] [i_17] [i_18] = ((/* implicit */signed char) var_0);
                    arr_81 [i_12 + 1] [i_18] = ((/* implicit */unsigned int) (-((~(var_6)))));
                }
                for (signed char i_19 = 0; i_19 < 20; i_19 += 2) 
                {
                    arr_84 [(signed char)13] [i_15] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) arr_43 [(signed char)7]))));
                    arr_85 [(signed char)12] [(signed char)12] [i_15] [i_19] [i_19] = ((((/* implicit */_Bool) ((3188475382950441938LL) / (arr_64 [i_12 + 2] [i_12])))) ? (((((/* implicit */int) (unsigned char)88)) & (((/* implicit */int) arr_17 [i_15] [i_15])))) : (((/* implicit */int) arr_77 [i_12 + 4] [i_15])));
                }
                arr_86 [i_12] [i_12] [7] [7] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_7)))));
                arr_87 [i_12] [i_12] [i_12 + 4] = arr_63 [i_12] [i_15] [i_17];
            }
            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) ((-2770004478565260360LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 0LL))))));
        }
        arr_88 [(signed char)11] = ((int) ((((/* implicit */_Bool) arr_36 [i_12] [(short)7])) ? (arr_71 [i_12] [i_12] [(unsigned short)11] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26472)))));
        var_34 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)14]))) + (arr_30 [i_12] [i_12 + 4] [i_12 + 3] [i_12 + 2] [4U] [19U])));
        var_35 = ((/* implicit */unsigned short) arr_56 [i_12 + 4] [i_12 + 4]);
    }
    var_36 = ((/* implicit */unsigned int) var_3);
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (min((max((((/* implicit */long long int) 1998180216U)), (var_14))), (((long long int) 3421569606U)))) : (((long long int) min((((/* implicit */int) var_12)), (-742594407))))));
}
