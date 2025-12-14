/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233526
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
    var_20 = ((/* implicit */short) min(((~(4294967283U))), (((/* implicit */unsigned int) var_1))));
    var_21 = ((/* implicit */int) var_6);
    var_22 ^= ((/* implicit */short) max(((!((!(((/* implicit */_Bool) var_12)))))), (var_15)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((5U), (arr_1 [i_0] [i_2]))), (((/* implicit */unsigned int) min(((unsigned short)65528), ((unsigned short)22))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)40)) > (((arr_5 [i_2] [i_0] [9LL] [i_2]) | (((/* implicit */int) (short)-13022))))))) : ((-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)23163))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (2147483647) : (((/* implicit */int) (signed char)-53))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11760))) | (var_17)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : ((-(((((/* implicit */_Bool) var_8)) ? (4294967291U) : (((/* implicit */unsigned int) -1619091405))))))));
                        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3660986023993480359LL)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (unsigned short)65520)))) - ((~(((/* implicit */int) (unsigned short)65528))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_2 [i_0] [i_1] [i_4]))))))) ? (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (short)11047)) : (-154862968)))) ? (((var_15) ? (arr_1 [i_1] [i_1]) : (13U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                            var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) 33554431)) : (var_8)))))))) == (((((/* implicit */_Bool) max((18446744073709551607ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_10 [i_0] [i_1] [i_0] [i_4] [i_4]))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (arr_0 [i_0])))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_2] [i_2] = (((!(((/* implicit */_Bool) arr_15 [(signed char)1] [(signed char)6] [i_6] [i_6 + 1] [i_6 + 1] [(signed char)1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [i_2])) : (var_17)))) ? (((/* implicit */int) min((var_10), ((unsigned short)65522)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((arr_15 [i_0] [i_1] [i_2] [i_0] [(signed char)3] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [5LL] [i_1] [i_2] [i_1] [i_6] [i_2])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18977))) | (23ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)51278))))))));
                            var_25 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)(-127 - 1))), (3660986023993480359LL)));
                            var_26 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 15717949165939565083ULL)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_1])))) : ((~(((/* implicit */int) var_15))))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_6 + 1] [i_1] [(short)15] [i_4] [i_6] [i_2] [i_1]) / ((-(4294967291U)))))) ? (((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), (arr_4 [i_6 + 1] [i_1] [i_1] [i_0]))), (min((((/* implicit */short) (signed char)-87)), (arr_19 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_2] [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(-1)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_0] [13U] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] [i_7])) | (var_17)));
                            arr_27 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)107)) ? (-1891631928) : (((/* implicit */int) (unsigned short)18977))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_7 + 1] [i_7 + 1] [i_0] [i_7] [i_7])) ? (arr_23 [i_2] [i_7 + 1] [i_7] [i_7] [i_7] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0])))) ? (((/* implicit */int) arr_25 [i_7 + 1])) : (((1) | (((/* implicit */int) arr_25 [i_4])))))))));
                        }
                        var_30 = ((/* implicit */_Bool) (~(min((2147483630), (2147483602)))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((~(arr_22 [3LL]))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)69))))) ? (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8] [i_1] [i_2] [i_4]))) : (134217727U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
                            arr_32 [14ULL] [i_1] [i_2] [(short)6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 33554434)) ? (((/* implicit */unsigned int) -1656042730)) : (2591226749U)))));
                            arr_33 [i_2] [i_4] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)65521)))), (((((/* implicit */_Bool) (short)-31715)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (626262063U)))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_8] [i_4] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (arr_31 [i_0])))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)35)), (arr_28 [5ULL] [i_4] [i_2] [i_2] [9U] [i_0] [i_0])))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_1] [(unsigned short)5] [(short)13] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : ((~(((((/* implicit */_Bool) arr_17 [i_2] [i_1] [i_2] [i_4] [i_4] [i_2])) ? (arr_11 [i_0] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        arr_37 [i_1] [i_2] [i_1] = (+(((((/* implicit */_Bool) max((-1656042724), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) var_7)))) : (min((((/* implicit */int) (unsigned short)9)), (var_1))))));
                        arr_38 [i_0] [i_1] [(_Bool)0] [i_9] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [10] [i_1] [i_2] [i_9]))))) ? (max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) arr_16 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0])) ? (arr_0 [i_9]) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 33554433)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_0))))))));
                    }
                    var_33 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_14 [i_1] [i_1])) : (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
}
