/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193274
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
    var_15 = ((/* implicit */unsigned char) var_2);
    var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (min((var_10), (var_4))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0 - 1] [i_1] = ((/* implicit */unsigned char) (~(min((max((-4603349822715975416LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((_Bool) arr_4 [i_0] [i_0])))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    arr_12 [i_1] [i_1] [i_2 - 1] [i_0] = ((/* implicit */unsigned short) var_3);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 += ((/* implicit */unsigned long long int) arr_6 [i_2] [i_3]);
                        arr_15 [i_0] [i_0] = ((/* implicit */short) ((13057391280474063589ULL) < (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-22260))))) - (arr_3 [i_0])))));
                    }
                }
                for (unsigned int i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_18 += ((signed char) max((var_14), (arr_0 [i_1 + 1])));
                                arr_24 [i_0] = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4))), (((((/* implicit */_Bool) arr_16 [i_0 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) arr_17 [(signed char)6])))))) == (var_4)));
                                arr_25 [i_0] [i_0] [i_0] [(unsigned char)17] [i_4] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((signed char) (unsigned short)45043)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_26 [18U] [i_0] [i_0] [i_1 - 1] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_4] [i_4] [i_0]))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)2] [16] [11])))))))));
                }
                for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    arr_30 [i_0] [i_1] [(signed char)18] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_0]))));
                    arr_31 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) 1494471266)) == (((var_6) >> (((((/* implicit */int) var_11)) - (57485))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                arr_37 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned long long int) var_7)))));
                                arr_38 [i_0] [i_0] [i_7] [1LL] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_1]);
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (short)-21905))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
