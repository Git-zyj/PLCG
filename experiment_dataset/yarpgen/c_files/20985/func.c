/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20985
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
    var_10 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) var_3)))))))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)67))))) ? (var_5) : (((/* implicit */long long int) var_2))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_11 [7ULL] [i_2] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((short) arr_0 [i_1] [i_1])))))));
                    var_12 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((2824323046U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125)))))))))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((13ULL) == (0ULL))) ? (((((/* implicit */_Bool) arr_7 [i_0] [4] [i_0] [21ULL])) ? (arr_7 [i_0] [i_0] [i_0] [21U]) : (arr_7 [i_0] [(signed char)10] [(short)7] [i_0]))) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
        var_13 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        arr_15 [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(short)11] [i_3] [(unsigned short)22])) ? ((-(((((/* implicit */int) (unsigned char)188)) - (-495832141))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(11028162111893577011ULL)))) || (((/* implicit */_Bool) (unsigned short)65522)))))));
        var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(arr_5 [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) + (18446744073709551615ULL)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_15 += ((/* implicit */int) ((((/* implicit */int) (signed char)101)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16035927651901916342ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */int) (short)4417)) : (((((/* implicit */int) (signed char)-126)) & (((/* implicit */int) (short)31286))))))));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            arr_21 [i_5] [i_5 + 2] [i_5 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_19 [i_5] [i_5] [i_4]) + (2147483647))) << (((((/* implicit */int) (unsigned char)67)) - (67)))))))))));
            arr_22 [i_5] = ((/* implicit */signed char) ((arr_10 [i_5] [i_5 + 1] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 11028162111893577004ULL)) || (((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 - 1] [i_5]))))))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 2) 
                {
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)41)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)19748))))) : (((/* implicit */int) (signed char)101))))) ? (((long long int) ((((/* implicit */_Bool) (short)27082)) ? (arr_3 [i_4] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4] [i_5] [i_5] [i_6])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [0ULL] [i_5 + 2] [i_7 - 1])) ? (((((/* implicit */_Bool) arr_8 [i_7] [10ULL] [i_4])) ? (((/* implicit */int) (short)-20212)) : (((/* implicit */int) (short)9778)))) : (((((/* implicit */int) arr_4 [(unsigned short)10] [i_5] [(signed char)2])) - (((/* implicit */int) (unsigned short)47383)))))))));
                        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned long long int) -2432219176315170660LL)) : (arr_7 [i_4] [(signed char)9] [i_6] [i_7 + 1]))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16602492501348375310ULL))))), (arr_5 [i_5 + 1]))) : (((/* implicit */unsigned int) 162646771))));
                        arr_28 [i_4] [i_7 - 1] [i_6] [(short)13] [i_5] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-101)), (((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) arr_4 [(_Bool)1] [i_5] [9U])))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_8 = 3; i_8 < 22; i_8 += 3) 
        {
            arr_31 [i_8] [i_8] = (+((((!(((/* implicit */_Bool) (short)-29459)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [20LL] [i_8 - 1]))))) : (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [(unsigned char)4] [20U] [i_8])) ? (-4793571244922344981LL) : (((/* implicit */long long int) 246602505U)))))));
            arr_32 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)144))))) ? (((/* implicit */int) arr_23 [i_8 - 1] [i_8 - 1])) : ((+(((/* implicit */int) arr_23 [i_8 - 3] [i_8 - 1]))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 2; i_9 < 21; i_9 += 2) 
            {
                for (short i_10 = 2; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_38 [i_4] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)16814), (((/* implicit */short) (signed char)0)))))) < (((((/* implicit */_Bool) (short)-20190)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_8 - 3] [4U] [i_10])) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) arr_25 [i_4]))))) ? ((+(2305561534236983296ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (short)1904))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (unsigned char)100)) : (-914499279)))) ? (((((/* implicit */_Bool) arr_13 [(unsigned char)10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47383))) : (9007199254740988LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18145))))))));
                        arr_39 [(signed char)12] [i_8] [(unsigned short)21] [i_10] = ((/* implicit */unsigned long long int) ((5140000944029428781LL) - (((/* implicit */long long int) (-((+(arr_13 [i_9]))))))));
                        arr_40 [i_4] [i_8] [i_9] [i_10] = ((/* implicit */short) (unsigned short)65523);
                        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)32752))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [1] [i_8] [4LL] [i_10 - 2]))))) : (((((/* implicit */_Bool) (signed char)-12)) ? (-170438072) : (((/* implicit */int) (short)-1))))))) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned char)117))));
                    }
                } 
            } 
            arr_41 [i_8] [i_8 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((+(((((/* implicit */_Bool) arr_30 [i_8] [(unsigned char)15])) ? (((/* implicit */int) arr_35 [i_4] [i_4] [(signed char)6] [i_8 + 1])) : (((/* implicit */int) (short)512)))))) : ((-(((/* implicit */int) arr_34 [i_8 + 1] [i_8 - 2] [(signed char)7] [i_8 - 2]))))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_8 + 1] [i_8 - 3] [20] [i_8 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8 - 1] [i_8 - 3] [16] [i_8 - 2]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) <= (((/* implicit */int) arr_26 [i_8 - 3] [i_8 - 1] [4U] [i_8 + 1]))))))))));
        }
        arr_42 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_14 [i_4]) << (((((/* implicit */int) (short)506)) - (467)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -270693468)) ? (6251741164943334989LL) : (((/* implicit */long long int) arr_5 [i_4]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)237))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))) : (997862575U)))));
        arr_43 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(arr_18 [6ULL])))) ? (((((/* implicit */_Bool) (unsigned short)50573)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)202)))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [(signed char)4] [(unsigned char)20] [i_4] [2LL])) == (((/* implicit */int) (signed char)-17))))))) >> (((arr_14 [i_4]) - (arr_14 [4LL])))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
    {
        arr_47 [(signed char)19] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_11] [i_11])) & (((((/* implicit */_Bool) arr_23 [i_11] [i_11])) ? (((/* implicit */int) arr_23 [i_11] [i_11])) : (((/* implicit */int) arr_23 [i_11] [i_11]))))));
        arr_48 [i_11] = ((/* implicit */signed char) max(((-(((/* implicit */int) (unsigned char)244)))), (((/* implicit */int) ((signed char) arr_37 [i_11])))));
        arr_49 [6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned short)3] [i_11] [i_11]))))) < ((-((+(((/* implicit */int) (short)32767))))))));
    }
}
