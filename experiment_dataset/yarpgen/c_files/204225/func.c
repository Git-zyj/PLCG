/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204225
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = 17583596109824ULL;
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */int) (_Bool)0);
                        arr_11 [i_0] [i_1 - 2] = ((((/* implicit */int) (signed char)-44)) + (((/* implicit */int) arr_7 [i_1] [i_0] [i_1 - 2] [i_1 - 1])));
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 3] [i_0 - 3] [i_1])) ? (arr_0 [i_1 - 2]) : (((/* implicit */unsigned long long int) -7273485217768241647LL))))) ? (1073479680U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_0]))))))));
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2] [i_3]))) : ((~(2941815247U)))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_8))));
        arr_13 [i_0] [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]);
        var_15 ^= ((/* implicit */_Bool) arr_7 [i_0] [(signed char)2] [i_0 - 2] [i_0 - 1]);
    }
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_16 &= ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) max((1353152055U), (16515072U)))), (((unsigned long long int) arr_5 [i_4]))))));
        var_17 ^= ((/* implicit */unsigned int) var_7);
        arr_17 [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4] [i_4]);
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5]))) > (((((/* implicit */_Bool) 1941694069)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46979)) || ((_Bool)0))))) : (2597923281U)))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((_Bool) 4294967295U)))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-61)), (233739256U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5]))) : (max((((/* implicit */unsigned long long int) var_2)), (((17519554777335177170ULL) / (((/* implicit */unsigned long long int) -1438748251)))))))))));
    }
    var_21 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) 1941694056)))) ? ((~(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_2))))))) == ((+((-(4061228039U)))))));
    /* LoopNest 3 */
    for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
    {
        for (unsigned short i_7 = 3; i_7 < 21; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                arr_34 [i_8] [i_7] [i_7] [i_9] [i_9] = max((2941815247U), (1697044017U));
                                arr_35 [i_8] [i_6] [i_8] &= ((/* implicit */long long int) var_1);
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) min((233739268U), (((/* implicit */unsigned int) (unsigned char)233))))) : (((((/* implicit */_Bool) 2597923281U)) ? (arr_29 [i_7 + 2] [i_7 + 3] [i_7 - 1] [i_7]) : (arr_29 [i_7 + 3] [i_7 - 1] [i_7 - 1] [i_7])))));
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) 233739268U))), ((~(5106029019115457847ULL))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-48)))) * (((/* implicit */int) min((((/* implicit */signed char) arr_32 [i_6] [i_7])), (arr_26 [i_6] [i_7] [i_7] [i_8]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116)))))) : (min((((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) : (3193265540685759216ULL))), (5106029019115457847ULL)))));
                }
            } 
        } 
    } 
}
