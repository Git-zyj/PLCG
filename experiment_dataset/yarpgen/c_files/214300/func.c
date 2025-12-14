/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214300
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_9))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-13)) && (((/* implicit */_Bool) var_15)))) ? (max((((/* implicit */long long int) var_6)), (var_12))) : (((((/* implicit */_Bool) var_3)) ? (var_12) : (var_12))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(signed char)3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_17)))) ? (((((((/* implicit */int) (signed char)-13)) + (2147483647))) << (((var_3) - (1894543678))))) : ((~(arr_6 [i_0] [(signed char)4] [(signed char)4] [(signed char)7])))))) : (((((/* implicit */_Bool) ((arr_0 [i_1]) << (((((/* implicit */int) (signed char)-12)) + (32)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) arr_1 [i_0])))))) : (var_17)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((unsigned short) max((-1), (((/* implicit */int) (signed char)-41)))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-4002665162427912732LL), (((/* implicit */long long int) arr_5 [i_0] [i_1] [0ULL] [i_3]))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)30210)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (unsigned short)11)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-12)) == (((/* implicit */int) (short)-32748)))) || (((602477941U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (max((2233939072U), (((/* implicit */unsigned int) (unsigned short)31206))))));
                            arr_18 [i_5] [i_1] = -381539609;
                            var_24 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) 2561322178U)) & (4066999285817250930LL))));
                            var_25 = ((/* implicit */unsigned int) ((var_2) != (((/* implicit */unsigned int) ((int) 3692489360U)))));
                        }
                        arr_19 [i_0] [i_0] [i_2 + 1] [8] |= ((/* implicit */_Bool) (unsigned char)79);
                    }
                    for (signed char i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        var_26 -= ((((-8087197939908722950LL) < (((/* implicit */long long int) ((/* implicit */int) (short)15))))) ? (((((/* implicit */_Bool) var_3)) ? (-644321269) : (((/* implicit */int) (unsigned char)166)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_7 - 1] [i_0] [i_0] [i_2 + 1])) || (((/* implicit */_Bool) (+(-25))))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) != ((-9223372036854775807LL - 1LL))))) != ((~(((/* implicit */int) arr_5 [i_0] [(_Bool)0] [2U] [i_7]))))))), (103831577))))));
                        arr_23 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (max((((/* implicit */long long int) -25)), (4066999285817250931LL))) : (((/* implicit */long long int) min(((+(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1] [i_0])))), (((((var_10) + (2147483647))) << (((((((/* implicit */int) (signed char)-111)) + (138))) - (27))))))))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [1U] [i_2] [1U])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))) & ((-9223372036854775807LL - 1LL))))) : (max((var_17), (((/* implicit */unsigned long long int) arr_14 [i_7] [10U] [i_7 + 1] [10U] [i_7 - 1] [i_7 + 1]))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)32749), (((/* implicit */short) (_Bool)0))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_8)) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10608)) || (((/* implicit */_Bool) var_1)))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-48)))))));
                        var_29 += ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */long long int) var_5))))))))));
                        arr_28 [i_1] [i_0] |= ((/* implicit */int) 4020605465733555085ULL);
                        arr_29 [i_8] = min((((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_1 [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) -1))))));
                        arr_30 [i_8] = ((/* implicit */unsigned int) ((((((unsigned long long int) (short)21)) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [2ULL] [i_0]))) + (var_11))))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */short) var_3);
}
