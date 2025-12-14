/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218422
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
    var_17 = ((/* implicit */signed char) ((min((((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) (unsigned short)7936)) ? (((/* implicit */int) (unsigned short)47086)) : (((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_14))))))));
    var_18 = ((((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) 15450991939092840607ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_8))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((var_12) - (1345568061)))))))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) 14ULL)) < (max((((/* implicit */unsigned long long int) (short)-19768)), (8481712988009255668ULL))))))) > (min((((4503324749463552ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (short)-12964)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) 18442240748960088064ULL);
                                var_21 = ((/* implicit */short) ((int) (((+(((/* implicit */int) (signed char)-32)))) / (((/* implicit */int) (signed char)51)))));
                                var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1277411738143275485ULL) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) 9968945418966808068ULL)) ? (arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (-1033399819)))))))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((int) (unsigned char)210)))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)212)) && (((/* implicit */_Bool) (signed char)-106))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_0] [i_0] [11LL] = ((/* implicit */signed char) ((long long int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (arr_5 [i_0] [(signed char)19] [i_2] [i_2]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) + (arr_5 [(signed char)0] [i_1] [i_2] [2LL]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 18; i_5 += 2) 
    {
        for (short i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned short) max((max((((8481712988009255668ULL) / (12313051990302762905ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18442240748960088064ULL)) && (((/* implicit */_Bool) var_1))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
                var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_13), (var_15)))) ? (((((/* implicit */_Bool) arr_13 [i_5 - 3])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) var_1))))), (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93)))))));
            }
        } 
    } 
}
