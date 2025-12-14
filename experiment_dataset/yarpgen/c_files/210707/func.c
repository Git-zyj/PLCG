/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210707
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)8))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -966545209)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (var_10)))) : (966545209))), (((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] [i_1] = arr_9 [i_1];
                    var_22 = ((unsigned long long int) (_Bool)1);
                    arr_11 [i_1] [i_2] [i_2] [i_3] |= ((/* implicit */_Bool) var_13);
                    arr_12 [i_1] [(unsigned short)9] [i_3] [i_3] = ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            for (short i_6 = 3; i_6 < 12; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_24 [i_6] [i_7 + 1] [i_5] = ((/* implicit */short) (+(((min((arr_2 [4U]), ((_Bool)1))) ? (min((966545190), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_22 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 4] [i_5] [i_4 - 2] [i_4]))))));
                                arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)62)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2048U))))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) 9644071617035754447ULL))));
                                arr_26 [i_5] [i_5] = max((((/* implicit */unsigned long long int) 3435628935U)), (((unsigned long long int) arr_19 [i_5 + 1])));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 - 4]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) + (7024209378792888637LL)))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 14166448835023929430ULL)))))) : (((/* implicit */int) (unsigned char)176)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) & (((/* implicit */int) arr_13 [i_4] [i_5])))) == (((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [i_6 - 3] [i_5] [i_6 - 3] [i_6 - 1]))))), (((unsigned int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)63488))))));
                    arr_27 [i_4] [i_5] [i_6] [i_6 - 3] = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((((unsigned int) arr_18 [i_5] [i_5 + 3] [i_6])), (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_6 + 2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                    var_26 |= ((/* implicit */unsigned long long int) arr_22 [i_6] [i_6] [12ULL] [0] [12ULL] [i_5] [i_4]);
                }
            } 
        } 
        var_27 &= ((/* implicit */unsigned int) 440643501067170401LL);
    }
    var_28 = ((/* implicit */signed char) (~(15942736528527252391ULL)));
}
