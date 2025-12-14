/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208762
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
    var_19 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) var_11)), (var_4))))), (((/* implicit */unsigned long long int) var_17))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10624)) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */int) arr_0 [(_Bool)1] [i_1])) | (((/* implicit */int) arr_2 [3LL])))) : (((((/* implicit */int) (unsigned short)54923)) & (((/* implicit */int) (unsigned short)54920)))))));
                    var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 7380543708915519465LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)0]))) : (0ULL)));
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((7LL), (-14LL))) | (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_15)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            {
                arr_15 [7LL] [i_4] [7LL] = ((/* implicit */unsigned short) min((arr_9 [i_3]), (((/* implicit */signed char) arr_1 [i_4]))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    var_22 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10621)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) | (arr_3 [(unsigned short)19] [(unsigned char)16]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((signed char) 7125187789526595079ULL))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-4390349520461519515LL) <= (4611686018427387903LL)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        var_23 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) : (arr_3 [i_4] [i_5])))) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_19 [i_3] [(unsigned short)10] [i_6])))), (((/* implicit */int) arr_10 [i_5 + 1]))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((var_18) - (((/* implicit */unsigned long long int) arr_6 [i_6 - 1] [i_6] [i_6] [15ULL])))) : (((var_9) - (arr_17 [i_5 - 1] [i_5 + 1] [i_6 + 1] [(_Bool)1])))));
                        arr_20 [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) var_12)) : (var_6)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (11321556284182956534ULL))) : (arr_17 [i_4] [i_3] [(signed char)0] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */int) arr_18 [i_4] [i_4] [(_Bool)1])) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24065)) & (((/* implicit */int) (signed char)4))))), ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) var_13))))))));
                    }
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_6 [(unsigned short)19] [i_3] [i_5 - 1] [i_5]))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    var_26 += (-(((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (min((1769950491812656428LL), (((/* implicit */long long int) arr_19 [i_3] [12LL] [i_7])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (int i_9 = 3; i_9 < 12; i_9 += 2) 
                        {
                            {
                                var_27 |= ((/* implicit */signed char) ((min((0ULL), (((/* implicit */unsigned long long int) arr_8 [i_4])))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)26)) < (((/* implicit */int) arr_12 [i_3] [i_3] [4ULL]))))))))));
                                var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) arr_28 [i_9 - 2] [i_9] [i_4] [i_9 + 1] [i_9 - 2] [i_9 + 1] [(signed char)3]))), (arr_26 [i_9 + 1] [i_4] [i_9] [i_9 + 1] [i_9])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) var_6);
                        arr_31 [i_3] [i_3] [i_4] [i_7] [i_10] = ((min((14088451435066155862ULL), (10502992634578724475ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        arr_32 [4ULL] [i_4] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_29 [5LL] [i_7] [i_7] [i_7])))) < (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54941))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        arr_38 [i_3] [i_4] = ((/* implicit */signed char) (+(18446744073709551601ULL)));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 3678196665U)) && (var_11)))))));
                        var_31 = ((/* implicit */unsigned long long int) arr_28 [i_12] [i_11] [i_4] [i_4] [i_4] [i_3] [i_3]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            {
                                var_32 ^= ((/* implicit */long long int) (-(-784484225)));
                                var_33 = ((/* implicit */signed char) var_11);
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((-1LL) <= (arr_41 [i_4] [i_4] [i_11])))) < (((/* implicit */int) ((signed char) var_7)))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned long long int) ((var_12) < (((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [i_3] [i_3] [10U])) + (2147483647))) << (((var_7) - (5979710163572652600LL))))))));
                }
                arr_45 [i_4] [i_4] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
}
