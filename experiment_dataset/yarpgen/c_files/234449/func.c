/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234449
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)20)) <= (((/* implicit */int) (short)17759))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) (short)17785)))), (var_6)))), (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2])))))));
        arr_5 [21] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), ((short)17768)))), (min((arr_0 [3U] [3U]), (arr_0 [18U] [i_0 - 2])))))) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-9))))))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1])) >= (((/* implicit */int) arr_2 [i_0 - 1])))))));
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_9 [10LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)17777), (((/* implicit */short) (unsigned char)224))))) ? (((/* implicit */unsigned int) (-(arr_0 [i_1 + 1] [i_1 + 1])))) : (((max((((/* implicit */unsigned int) (unsigned short)62069)), (var_9))) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_16 [i_3] = ((/* implicit */unsigned int) ((((long long int) max((144115188075855871ULL), (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]))))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_1 + 1])))))));
                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_1 + 1]))));
            }
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                arr_20 [i_1] [4U] [(unsigned short)7] [4U] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))), (((unsigned int) (unsigned char)224))));
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)91)), (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)6))))));
                arr_21 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 - 2])) ? (((/* implicit */int) arr_11 [i_1 - 2])) : (((/* implicit */int) arr_11 [i_1]))))), (var_9)));
            }
            for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1]))))), (max((((unsigned int) arr_11 [i_5 + 3])), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62032)) % (((/* implicit */int) arr_13 [(short)17] [i_2] [i_2])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 4; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    arr_27 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_13 [i_1] [i_2] [i_1]))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned int) 536870911)) * (0U))), (((/* implicit */unsigned int) var_11)))) ^ (((/* implicit */unsigned int) min((-1312190171), (((/* implicit */int) (short)-17769)))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) == (((((/* implicit */_Bool) arr_12 [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1 - 2] [i_2]))) : (arr_12 [i_2]))))))));
                    }
                    var_19 *= ((/* implicit */short) max((((unsigned short) ((((/* implicit */int) (unsigned short)65533)) - (((/* implicit */int) (short)26298))))), (max(((unsigned short)16), (((/* implicit */unsigned short) arr_18 [14LL] [i_5 + 1] [10U] [i_6 + 1]))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 4; i_8 < 22; i_8 += 4) /* same iter space */
                {
                    arr_32 [i_1] [i_1] [i_1] [11LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17759))) : (((((/* implicit */_Bool) (unsigned char)130)) ? (var_2) : (var_9)))));
                    var_20 = ((/* implicit */unsigned char) ((unsigned int) 2147483647));
                }
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_1] [i_2] [i_1])) >> (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))) / (var_3))))))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_2]))) ? (((unsigned long long int) ((unsigned char) var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))))))));
            }
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_10 = 2; i_10 < 22; i_10 += 4) 
                {
                    arr_37 [i_1] [(signed char)18] [i_9] = ((/* implicit */_Bool) ((arr_12 [i_1 + 1]) >> (((3749092649U) - (3749092595U)))));
                    var_23 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (signed char)127)))));
                }
                for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_24 = ((/* implicit */signed char) ((((var_12) / (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)104))))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_2] [i_9])) < (((/* implicit */int) arr_33 [i_1] [i_1]))))))))));
                    arr_41 [i_1] [i_2] [i_2] [i_11] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(130944)))) ? (((/* implicit */int) var_1)) : (((arr_0 [i_1] [i_2]) >> (((/* implicit */int) var_6))))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_13))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_1])) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) var_11))))) ? (((unsigned long long int) arr_29 [i_1 + 1] [i_2] [i_2] [i_2] [i_2] [(signed char)2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                }
                arr_42 [i_1] = ((/* implicit */unsigned char) (signed char)45);
            }
            /* vectorizable */
            for (long long int i_12 = 1; i_12 < 21; i_12 += 4) 
            {
                arr_45 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [10] [i_2] [i_1]))))) && (((/* implicit */_Bool) var_1))));
                arr_46 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2372894019U)) : (65535ULL))))));
            }
            for (signed char i_13 = 4; i_13 < 20; i_13 += 4) 
            {
                arr_50 [i_1] [i_1 + 1] [i_2] [i_1 + 1] &= ((/* implicit */signed char) min((max((((/* implicit */unsigned int) arr_33 [i_13 - 2] [i_13 + 1])), ((~(var_3))))), (((/* implicit */unsigned int) ((_Bool) var_3)))));
                var_27 = ((/* implicit */unsigned int) arr_12 [i_2]);
            }
            var_28 = ((/* implicit */signed char) ((short) (~(((unsigned int) var_7)))));
            arr_51 [22U] [i_2] = ((/* implicit */int) arr_2 [i_1]);
        }
        arr_52 [i_1] = ((signed char) ((short) arr_11 [i_1 + 1]));
    }
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_15 = 2; i_15 < 19; i_15 += 4) 
        {
            for (unsigned short i_16 = 2; i_16 < 20; i_16 += 4) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)6))) ? ((~(((/* implicit */int) var_4)))) : (arr_14 [(unsigned char)15] [(unsigned char)4] [i_15 + 3] [i_16 + 1])));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) 1856987299)) != (var_3)));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_10))));
                }
            } 
        } 
        arr_61 [i_14] [(unsigned char)9] = ((/* implicit */signed char) ((unsigned int) arr_53 [i_14] [i_14]));
    }
    var_32 = ((/* implicit */signed char) min((((short) var_4)), (((/* implicit */short) var_10))));
    var_33 = ((/* implicit */short) var_3);
}
