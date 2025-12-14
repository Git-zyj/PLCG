/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49070
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) var_5)))))) % (((((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_1 [i_0])))) - (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_10))))))));
        var_13 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))) <= (((((/* implicit */unsigned long long int) 794612033)) + (9110954722717245258ULL)))))) ^ (((((/* implicit */int) ((((/* implicit */int) (short)-14966)) > (0)))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (var_10)))))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) > (((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */int) var_11)) >> (((var_1) - (4374442619265588129LL))))))))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_0))))) - (((9110954722717245280ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_15 |= ((/* implicit */unsigned long long int) ((((-1) + (((/* implicit */int) var_9)))) ^ (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned char)21))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((0) > (((/* implicit */int) var_5))))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) > (arr_7 [(unsigned short)17]))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-1054130307968229740LL))) && (((/* implicit */_Bool) ((arr_7 [i_5]) + (((/* implicit */long long int) ((/* implicit */int) (short)1405)))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) ((arr_11 [(short)10]) > (((/* implicit */unsigned long long int) 367974801327970949LL)))))))))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_3)) % (((/* implicit */int) arr_3 [i_6])))) >> (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_6])) <= (((/* implicit */int) var_3))))))) * (((((/* implicit */int) ((((/* implicit */int) arr_8 [i_1])) > (((/* implicit */int) var_2))))) >> (((((/* implicit */long long int) ((/* implicit */int) (short)-24114))) / (arr_7 [(_Bool)1]))))))))));
                                var_19 ^= ((((/* implicit */int) ((((1371719586) > (((/* implicit */int) (unsigned short)2433)))) && (((/* implicit */_Bool) ((((-417010151) + (2147483647))) >> (((/* implicit */int) var_10)))))))) / (((((((/* implicit */int) var_0)) / (((/* implicit */int) var_2)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-12)) && (((/* implicit */_Bool) arr_11 [16]))))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_1] [i_3] [17U])) <= (((/* implicit */int) arr_14 [i_1] [i_3] [i_6])))))) >= (((13480835207673847391ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_3] [i_1] [i_6])))))))) ^ (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0)))) * (((((/* implicit */int) (short)-17640)) * (((/* implicit */int) (unsigned short)5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
