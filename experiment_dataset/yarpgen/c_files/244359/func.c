/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244359
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) ((unsigned char) var_11))) : (((-137676326) & (((/* implicit */int) (unsigned short)10492)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -137676326)) / (13852855371355458842ULL)))))) ? (max((((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52522))) : (4593888702354092772ULL))), (((/* implicit */unsigned long long int) ((long long int) 795654053U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (4593888702354092774ULL)))) == ((+(137676325)))))))));
                        arr_10 [(signed char)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 4682689304484471250ULL);
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (max((((/* implicit */long long int) var_13)), (var_10)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_2] [i_2 + 1]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4593888702354092777ULL)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) var_9))))) : (((unsigned int) var_3)))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_17 *= ((/* implicit */signed char) var_4);
                        arr_13 [(unsigned short)12] [i_1] [i_0] [(unsigned short)12] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) var_11))))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)33269))))) || (((/* implicit */_Bool) (-(arr_6 [i_0] [i_1] [i_2] [i_4])))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(1965945627U)))), (arr_12 [i_0] [i_1] [10U])));
                                var_19 = (unsigned short)65535;
                                arr_18 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (signed char)0);
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_6] [i_2 - 1] [i_2 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))))) ? (max((((((/* implicit */_Bool) (unsigned short)32266)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [(unsigned short)8])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) max((4593888702354092777ULL), (((/* implicit */unsigned long long int) var_3))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_9);
}
