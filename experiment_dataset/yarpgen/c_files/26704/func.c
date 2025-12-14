/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26704
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
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((-1422016732) * (((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (_Bool)0);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4]);
                            var_13 *= ((/* implicit */unsigned short) (+(min(((-(var_5))), (((/* implicit */unsigned int) (unsigned short)9827))))));
                        }
                        var_14 = ((/* implicit */long long int) 1181686308);
                        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (+(var_5)))) : (((((/* implicit */long long int) ((/* implicit */int) (short)29738))) | (arr_6 [i_0] [i_2] [i_2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))))) : (var_9)));
                    }
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                    {
                        var_16 &= ((/* implicit */unsigned int) (((!((_Bool)0))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (short)-1688))))));
                        var_17 &= ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-19)) ? (var_1) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) >> (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_1] [i_2] [i_5])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2])))))))));
                    }
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (var_1)));
    var_19 = 4294967295U;
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12181633985936822578ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23567))));
}
