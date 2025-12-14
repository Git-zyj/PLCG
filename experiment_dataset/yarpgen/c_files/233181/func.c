/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233181
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
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((+(-407037013))) : (var_2))) % (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (signed char)127))))))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)213)))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0 + 1]) || ((_Bool)1))))) * (((((/* implicit */_Bool) (unsigned short)15170)) ? (14591951762650681742ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
        }
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_17 = ((/* implicit */_Bool) var_0);
            var_18 *= ((max(((!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2] [i_2 - 1])))), (((((/* implicit */_Bool) 7400373551707316828LL)) || (((/* implicit */_Bool) 0)))))) ? (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((long long int) var_6)))))) : (((/* implicit */int) var_14)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
            {
                arr_13 [i_0] [i_0] [i_3] = ((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_2 + 1])) && (((/* implicit */_Bool) arr_1 [i_2 + 2] [i_2 + 1])));
                var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2 + 2]))));
            }
            for (short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
            {
                arr_18 [i_2] = ((/* implicit */int) ((arr_14 [i_0] [i_2]) >> (((((((/* implicit */int) arr_9 [i_2 + 2] [i_0 - 3])) >> (((1572102435U) - (1572102434U))))) - (15982)))));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_3 [i_0])) << (((arr_16 [i_0] [i_2 - 1] [13ULL]) - (1819731326))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-20123)) / (((/* implicit */int) (short)-20124))))) <= (min((((/* implicit */unsigned long long int) arr_1 [i_0] [(_Bool)1])), (arr_14 [i_0 + 1] [i_0 + 1]))))))) : (805306368U)));
            }
        }
        arr_19 [i_0] [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 3; i_5 < 18; i_5 += 4) /* same iter space */
    {
        arr_22 [i_5 - 3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_20 [i_5 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_15 [i_5] [i_5] [i_5 - 2])) + (16041))) - (23)))))), (18446744073709551615ULL)));
        arr_23 [i_5] = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) arr_9 [i_5] [i_5 - 3])));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */_Bool) arr_26 [i_6]);
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_21 = ((/* implicit */int) arr_30 [i_7]);
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (3489660927U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7])))))) || (((/* implicit */_Bool) ((signed char) arr_24 [i_6])))));
        }
        arr_32 [i_6] [i_6] = ((/* implicit */short) max((min((((/* implicit */unsigned int) (_Bool)1)), (1160437679U))), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_26 [i_6])) * (((/* implicit */int) (short)-20137)))), (var_3))))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_6])) << (((min((arr_28 [i_6] [(_Bool)1] [i_6]), (var_7))) + (1123237742))))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    {
                        var_24 = ((((/* implicit */_Bool) ((((var_8) + (2147483647))) >> (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_35 [i_9 - 1] [i_10])) : (((((/* implicit */int) (unsigned short)14)) + (((/* implicit */int) var_1)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                        {
                            arr_45 [i_8] = ((/* implicit */signed char) ((int) ((unsigned int) (short)20114)));
                            arr_46 [i_8] [i_8] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) 1447625980U));
                        }
                        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                        {
                            var_25 -= ((/* implicit */short) ((arr_43 [i_8] [i_9] [i_13]) ? (((/* implicit */int) var_11)) : (arr_49 [i_9] [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1])));
                            var_26 = ((_Bool) ((((/* implicit */_Bool) (unsigned short)16)) || (((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8] [i_8]))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_31 [i_8] [i_9 - 1] [i_14])) : (var_7)));
                            var_28 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_9 - 1] [i_10]))));
                        }
                    }
                } 
            } 
        } 
        arr_54 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_8] [i_8] [i_8])) - (-1234098935)));
        /* LoopSeq 3 */
        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
        {
            var_29 *= ((/* implicit */signed char) ((unsigned short) (signed char)15));
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                var_30 = ((unsigned short) arr_36 [i_8] [i_15]);
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            arr_66 [7ULL] [i_15] [i_16] [i_16] [i_18] [i_8] [i_16] = ((((((/* implicit */_Bool) (short)10996)) ? (arr_28 [i_8] [14] [i_16]) : (((/* implicit */int) var_12)))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65521)) : (-1234098935))));
                            var_31 = ((/* implicit */unsigned short) ((unsigned char) arr_56 [i_8]));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)90))));
                arr_67 [i_8] [i_8] [(signed char)12] = ((/* implicit */short) ((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_8] [i_8]))) : (18446744073709551615ULL)));
            }
        }
        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
        {
            var_33 &= (short)-14245;
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_8] [i_8])) || ((_Bool)0))))));
        }
        for (unsigned int i_20 = 0; i_20 < 21; i_20 += 4) /* same iter space */
        {
            arr_75 [i_8] = ((/* implicit */unsigned char) (_Bool)1);
            var_35 = ((/* implicit */signed char) arr_50 [i_8] [i_8] [i_20] [i_8] [i_20]);
        }
    }
}
