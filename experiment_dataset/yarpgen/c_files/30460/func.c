/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30460
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -599276680)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0])))), (max((var_13), (((/* implicit */int) arr_5 [i_2 - 2]))))))) ? (min((arr_1 [8]), (((/* implicit */unsigned int) (-(29)))))) : (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 3])))));
                            arr_12 [i_2] = ((unsigned int) var_7);
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) arr_4 [i_0])))) * (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -599276680)), (arr_1 [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((_Bool) ((((unsigned int) 599276696)) % (((/* implicit */unsigned int) (~(var_13)))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            {
                arr_18 [i_4] [i_4] = ((/* implicit */signed char) (-(-599276674)));
                var_17 = ((((/* implicit */int) arr_17 [i_4] [i_5] [i_5])) - (((/* implicit */int) arr_15 [i_4])));
                arr_19 [i_4] [i_5] [i_4] = ((/* implicit */signed char) arr_16 [8ULL] [i_5] [i_4]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 599276696)) ? (-3196864637323002121LL) : (((/* implicit */long long int) (+(arr_22 [i_6]))))));
        var_19 = ((/* implicit */unsigned char) (-(((unsigned int) (+(arr_20 [i_6] [i_6]))))));
        arr_23 [(unsigned short)6] |= ((/* implicit */_Bool) var_3);
        arr_24 [i_6] = ((/* implicit */long long int) 435877574U);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((-29), (-38)))), (arr_20 [7U] [i_6])))) ? (1848387493U) : (((/* implicit */unsigned int) (+((-(-2969874))))))));
    }
    for (int i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        arr_27 [i_7] [i_7 + 2] = ((/* implicit */signed char) arr_25 [i_7]);
        var_21 = min((var_15), (arr_25 [i_7]));
        arr_28 [i_7] = ((/* implicit */_Bool) min((1848387494U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (max((arr_25 [i_7]), (37))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_26 [i_7] [i_7])))))))));
        var_22 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((var_1) - (-45)))) ? (var_0) : (((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */unsigned int) arr_25 [i_7 + 1])) : (4294967285U))))));
        arr_29 [i_7] = max((((((/* implicit */_Bool) -2081892402)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2446579785U)) ? (599276680) : (-37)))) : ((~(1848387494U))))), (((/* implicit */unsigned int) arr_26 [i_7] [i_7])));
    }
    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned int) (-((-((-(var_13)))))));
        arr_35 [i_8 + 1] [i_8 + 1] = (_Bool)1;
    }
}
