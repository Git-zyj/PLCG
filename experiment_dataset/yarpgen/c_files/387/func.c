/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/387
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
    var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (13310023510106990570ULL)))) ? (((/* implicit */unsigned long long int) var_4)) : (16ULL))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (var_13))), (var_13))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)-2038)))) : (((((((/* implicit */int) arr_3 [i_0])) + (2147483647))) << (((var_6) - (4073403827191387733LL))))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */int) (_Bool)1)), (1297751236))) : ((-(((/* implicit */int) var_9))))))));
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [10])) | ((+(((/* implicit */int) var_10))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */long long int) (unsigned char)224)), (var_0)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [(unsigned char)10] [i_0] [i_2 - 1] [i_0]) ? (((/* implicit */int) arr_9 [7] [i_0] [i_2 - 1] [21ULL])) : (((/* implicit */int) var_9))))) ? (min((((/* implicit */unsigned int) var_3)), (109506779U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1] [i_0])) % (((/* implicit */int) var_2)))))));
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1614761692)) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2090482738319207840LL)) ? (((/* implicit */int) arr_1 [(unsigned short)2])) : (((/* implicit */int) var_5)))))))) ? (min((-6336516031381176988LL), (((/* implicit */long long int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) : (var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)101)))) - (((/* implicit */int) ((unsigned char) arr_11 [i_3 - 2] [i_1] [(_Bool)1] [i_4]))))))));
                                var_23 = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_4]);
                                var_24 = min(((((((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_3] [i_4])))) + (2147483647))) >> (((((((/* implicit */_Bool) -1297751237)) ? (var_0) : (((/* implicit */long long int) var_16)))) + (6444354025636650529LL))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), ((unsigned char)252))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3 - 1] [i_4] = (-(((((/* implicit */_Bool) ((((/* implicit */long long int) 1614761694)) - (-6478261060627404933LL)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [19] [i_0] [i_0] [i_0] [2ULL] [i_4]))) & (11411499968419521644ULL))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) 0))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) arr_11 [i_1] [i_0] [i_1] [i_2 - 1])))) << (((((/* implicit */_Bool) min(((unsigned char)248), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : ((~(var_15)))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) 0))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) arr_11 [i_1] [i_0] [i_1] [i_2 - 1])))) << (((((((/* implicit */_Bool) min(((unsigned char)248), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : ((~(var_15))))) - (46LL))))));
                }
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)128))))) ? (((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))));
        var_25 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-((+(var_0)))))) / (min((((/* implicit */unsigned long long int) ((unsigned char) (signed char)-109))), ((~(var_14)))))));
    }
    for (int i_5 = 4; i_5 < 19; i_5 += 4) 
    {
        arr_21 [i_5] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_18 [i_5 - 2])) ? (var_7) : (((/* implicit */int) (unsigned short)44765)))), ((-(((/* implicit */int) arr_2 [i_5 - 4]))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) 
            {
                {
                    arr_26 [i_6] = ((/* implicit */signed char) var_4);
                    arr_27 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                    arr_28 [(_Bool)1] [i_6] [i_7 - 2] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_13 [i_5 - 2] [i_7 + 2] [i_7 + 2] [i_6] [i_6])), (arr_22 [i_6] [i_5 + 2] [i_7 + 2]))) | (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_6 [i_5 - 4] [i_6] [i_7])))))))));
                    arr_29 [i_6] [i_6] = ((/* implicit */short) ((int) ((unsigned int) (-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_26 |= ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned char) ((_Bool) var_3))), (arr_0 [i_5]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                arr_38 [i_8 - 1] = ((/* implicit */_Bool) min((((arr_25 [i_8]) * (((/* implicit */unsigned long long int) -6710267663454245495LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((long long int) var_4)) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)35))))))))));
                var_27 = ((/* implicit */signed char) (unsigned char)205);
                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned long long int) arr_5 [i_8] [i_8 + 1]))))) ? ((-((((_Bool)1) ? (((/* implicit */long long int) var_13)) : (var_0))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_8 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (var_15)))));
                var_29 = ((/* implicit */unsigned char) min((arr_35 [(_Bool)1] [i_9]), (arr_12 [i_8] [i_8 + 1] [i_9] [i_8 + 1] [(unsigned short)6] [2U])));
            }
        } 
    } 
}
