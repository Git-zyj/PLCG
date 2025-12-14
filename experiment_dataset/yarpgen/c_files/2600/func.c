/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2600
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0]))) + (2147483647))) >> ((((+(arr_2 [i_0]))) - (627244090324414863ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) : (((((/* implicit */unsigned long long int) arr_0 [i_0])) | (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_0])))))));
        var_10 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) (short)-23887)) ? (arr_0 [i_0]) : (arr_0 [i_0]))) <= (((((/* implicit */int) (signed char)66)) >> (((((/* implicit */int) (short)-22833)) + (22840)))))))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((min(((-(arr_3 [i_0]))), (((/* implicit */long long int) ((arr_2 [(_Bool)0]) > (18446744073709551615ULL)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_2)), (var_4)))))))))))));
        var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 4294967295U)) < (arr_2 [i_0])))), (((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(max((arr_1 [14]), (arr_1 [(unsigned char)2])))))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [(unsigned short)8]) : (((/* implicit */int) (short)23896))))), ((-(arr_2 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_1] [(_Bool)1])) ? (arr_1 [i_1]) : (((/* implicit */int) ((short) (short)22837))))) ^ (((/* implicit */int) ((arr_0 [i_1]) == (((/* implicit */int) ((arr_5 [i_1]) <= (arr_2 [i_1])))))))));
        arr_7 [i_1] = ((/* implicit */short) (-((~(((((/* implicit */int) arr_6 [i_1] [i_1])) ^ (((/* implicit */int) (short)-23894))))))));
    }
    for (int i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) min((arr_9 [i_2]), ((unsigned char)26))))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2]))))))), (((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? ((~(((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) max(((short)22832), (((/* implicit */short) arr_9 [i_2]))))))))))));
        arr_12 [(unsigned char)19] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_10 [i_2] [(unsigned short)17])) : (472878377)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_20 [i_4] [i_4 + 1] = (i_4 % 2 == 0) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_3 - 2])))) >> (((((/* implicit */int) ((signed char) arr_19 [i_4] [i_4 + 2] [i_4]))) + (129)))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_3 - 2])))) >> (((((((/* implicit */int) ((signed char) arr_19 [i_4] [i_4 + 2] [i_4]))) + (129))) - (94))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_5] [(signed char)1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((min((((/* implicit */unsigned char) (signed char)94)), (arr_9 [i_2 + 2]))), (arr_9 [i_2 - 1]))))) >= ((-(min((1812638173U), (((/* implicit */unsigned int) arr_27 [i_6 + 1] [i_5] [i_2 + 1] [i_3] [i_2] [i_2 + 1]))))))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((((((~(((/* implicit */int) arr_26 [i_3])))) + (2147483647))) >> (((unsigned int) arr_26 [i_5])))) > (arr_16 [i_2] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    arr_29 [i_4] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned char) max((arr_22 [i_4] [i_3] [i_3 - 3] [i_4]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 1; i_7 < 24; i_7 += 4) 
    {
        arr_32 [i_7 + 1] [i_7] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-107)) + (2147483647))) << (((((/* implicit */int) arr_31 [i_7])) - (24155))))))))) - (((/* implicit */int) arr_31 [i_7 - 1]))));
        arr_33 [i_7 - 1] = ((/* implicit */long long int) arr_30 [i_7] [i_7 + 1]);
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_7 - 1])) * (((/* implicit */int) arr_30 [24] [i_7]))))) * (max((min((((/* implicit */long long int) (short)32767)), (-4620114306872231261LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)170)) == (((/* implicit */int) arr_31 [19])))))))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)85))))))))));
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        for (int i_9 = 2; i_9 < 16; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [(unsigned char)4] [(unsigned char)4] [i_9] [i_9] [(signed char)0])))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 4; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((max((arr_23 [i_8] [i_9] [i_10] [i_12 - 4] [i_11] [i_8 + 1]), (arr_23 [i_8] [(signed char)10] [i_10] [i_12 - 3] [i_9] [i_8 - 1]))), (max((arr_23 [i_8] [(signed char)16] [i_9] [i_12 - 1] [i_12 - 4] [i_8 + 1]), (arr_23 [i_8] [i_9 + 2] [i_10] [i_12 - 2] [i_12] [i_8 - 1])))));
                                arr_49 [i_8] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_9] [i_9 - 1])) < (((/* implicit */int) (short)32767)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8]))) : ((~(arr_40 [i_8] [i_9])))))) ? (max((arr_19 [i_9] [i_9 + 3] [i_10]), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (arr_16 [i_9] [i_11] [i_9])))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31364)))));
                            }
                        } 
                    } 
                    var_21 = min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))) == (arr_40 [i_8 + 2] [(short)1]))), (((((/* implicit */int) max((var_4), (((/* implicit */short) (unsigned char)85))))) == (min((((/* implicit */int) arr_44 [i_8] [i_9] [i_8] [i_8] [i_8])), (arr_35 [i_8] [i_8]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (!(var_9)))) * (max((var_0), (((/* implicit */int) (signed char)104)))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) - (var_6)))) * (max((((/* implicit */long long int) var_0)), ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))));
}
