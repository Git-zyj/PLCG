/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192444
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_0 [i_0]))))))), (((10798706356447663754ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2] [i_1])))))));
                            var_10 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0] [i_1 + 2] [i_1] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) + (14535729732822331334ULL))) < (((((/* implicit */_Bool) ((3388523144U) % (294879117U)))) ? (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (7648037717261887859ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)109)))))))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-1)), (-6411547109301384605LL)))) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1] [i_1])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (0ULL))))))))));
                            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_1 - 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (arr_4 [i_1 + 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (arr_1 [i_1] [i_1])));
                    arr_15 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) var_7));
                }
                for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 2; i_6 < 18; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */_Bool) 4000088178U);
                        var_13 ^= ((/* implicit */unsigned short) ((int) var_7));
                    }
                    for (long long int i_7 = 2; i_7 < 18; i_7 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_14 [i_7] [i_1] [i_7 - 1] [i_7 + 1])) / (((/* implicit */int) (signed char)-120))))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((16068081687231015725ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59))))))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (min((((/* implicit */long long int) ((12427714478391640634ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), (max((((/* implicit */long long int) (_Bool)0)), (arr_18 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7739)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (_Bool)0))))))))));
                    }
                    for (long long int i_8 = 2; i_8 < 18; i_8 += 2) /* same iter space */
                    {
                        var_17 = ((int) max((((/* implicit */long long int) arr_25 [i_1 + 2] [i_1] [i_1] [i_8 + 1] [i_0] [i_8])), (max((((/* implicit */long long int) var_2)), (arr_6 [i_0] [i_1] [i_0] [i_8 - 2])))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0LL) - (((/* implicit */long long int) 880554064))))) ? (min((((/* implicit */int) arr_23 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) var_2)))))) : ((+((-(((/* implicit */int) var_0))))))));
                        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) 1535142470772182149LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) >= (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (_Bool)0)))))))));
                    }
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_1]))) ^ (-6411547109301384610LL)))));
                    var_21 ^= ((/* implicit */signed char) (+(((unsigned long long int) (signed char)85))));
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((16068081687231015725ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96)))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned char)6)))) : ((~(((/* implicit */int) (_Bool)0)))))))));
                }
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (signed char)119))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_5))));
                            var_25 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-43)) | (((/* implicit */int) (signed char)43))))));
                        }
                    } 
                } 
                arr_34 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_0] [i_1] [i_1]))))) ? (min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [(unsigned char)0] [i_0] [i_0])))) : (min((89346689), (((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (short)5790))));
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (unsigned short)64439))));
}
