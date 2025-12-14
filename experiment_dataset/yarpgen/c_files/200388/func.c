/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200388
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_2 [i_0])))))) ? ((-(((((/* implicit */_Bool) 1699449047)) ? (3037938714U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [(signed char)12] [(signed char)12])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) (unsigned char)106)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (((-(((/* implicit */int) var_8)))) != (((/* implicit */int) ((short) arr_3 [i_0])))))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 3769145976326896090ULL))))) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) (unsigned char)106))))))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-27612)) || (((/* implicit */_Bool) -615110499))))) : (((/* implicit */int) var_5))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(14677598097382655543ULL)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned int) (unsigned short)14838)), (var_11)))));
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */short) arr_3 [i_1]);
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_10))));
        var_23 = ((/* implicit */short) -9223372036854775804LL);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            arr_17 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1]))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                var_24 += ((/* implicit */signed char) 1073479680);
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) arr_0 [i_3 + 1]))));
            }
            var_26 = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (unsigned char)232)))));
            arr_21 [i_3] [i_3] [i_3] = 9223372036854775807LL;
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
            {
                arr_24 [i_2] [(signed char)8] &= ((/* implicit */unsigned int) (~((-(var_16)))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14838)) ? (-5558614683285653320LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_3 + 1]))) : (arr_13 [i_3] [i_3 - 1])));
                var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ ((-(((/* implicit */int) var_7))))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_3 + 1] [i_3 - 1] [i_3 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
            }
        }
        arr_27 [i_2] |= ((/* implicit */short) min((((((/* implicit */_Bool) var_12)) ? (var_19) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2]))))))), (((/* implicit */unsigned int) var_12))));
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            arr_32 [i_7] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_2] [i_2])) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_7))))) : (187283310449718880LL))), (((/* implicit */long long int) ((((/* implicit */int) ((arr_16 [i_2] [9] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85)))))) > (((/* implicit */int) ((_Bool) arr_26 [i_2] [i_2] [i_7] [(short)3]))))))));
            arr_33 [i_2] [i_2] [7LL] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_1))))));
        }
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_31 = -9223372036854775796LL;
            var_32 = min((max((((/* implicit */unsigned int) arr_25 [12] [(unsigned short)0] [i_8])), (0U))), (((/* implicit */unsigned int) min((arr_25 [i_2] [i_2] [i_2]), ((signed char)-60)))));
        }
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1229997903)) ? (((((/* implicit */_Bool) ((unsigned char) 2721758359U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_18)) : (2147483647)))) : (((var_6) * (((/* implicit */unsigned long long int) arr_11 [i_2])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2])) ? (max((((/* implicit */int) (unsigned char)156)), (1651420150))) : (((/* implicit */int) arr_2 [i_2]))))))))));
        /* LoopSeq 4 */
        for (short i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [3ULL] [3ULL]))) | (arr_13 [i_2] [i_2])))))) ? (((unsigned int) min((var_6), (((/* implicit */unsigned long long int) 9223372036854775807LL))))) : (((((/* implicit */_Bool) var_4)) ? (((unsigned int) (short)3351)) : (((/* implicit */unsigned int) ((/* implicit */int) (((-2147483647 - 1)) > (((/* implicit */int) (signed char)-61))))))))));
            var_35 = ((/* implicit */long long int) arr_25 [i_9] [i_9] [i_9]);
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((long long int) (+(7585912903382278599ULL)))))));
        }
        for (short i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            var_37 = ((/* implicit */_Bool) max((((int) (!(((/* implicit */_Bool) 1229997916))))), ((-(((/* implicit */int) arr_38 [i_2] [i_10] [i_10]))))));
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (163158000U))))));
            var_39 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
        }
        for (int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(arr_42 [i_2] [i_2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_29 [i_2] [i_11])))) ? (((/* implicit */int) var_4)) : ((+(2147483647)))))) : (((((/* implicit */_Bool) ((signed char) (unsigned char)179))) ? (((/* implicit */long long int) 1966171289U)) : (arr_45 [i_2]))))))));
            arr_47 [i_2] [i_11] = ((/* implicit */_Bool) min(((~(arr_20 [i_11] [i_2]))), (((/* implicit */int) var_14))));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 11; i_12 += 3) 
        {
            var_41 &= ((/* implicit */long long int) ((unsigned long long int) arr_15 [i_12] [i_2]));
            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))) : (arr_13 [i_2] [(unsigned short)10])));
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((int) arr_36 [i_13] [i_13] [(signed char)4]))) ? (((/* implicit */int) arr_19 [i_13] [i_13] [i_13] [i_13])) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))))));
        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_13] [i_13] [i_13])) + (((/* implicit */int) ((unsigned short) arr_23 [i_13] [i_13] [i_13])))))) * (18446744073709551615ULL))))));
        var_45 = (~(max((((/* implicit */unsigned int) arr_15 [i_13] [i_13])), (arr_39 [i_13]))));
    }
}
