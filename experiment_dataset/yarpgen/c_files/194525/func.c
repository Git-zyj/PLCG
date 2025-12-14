/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194525
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
    var_13 = ((((((/* implicit */_Bool) 2693940133U)) ? (((((/* implicit */int) var_0)) + (var_8))) : (max((((/* implicit */int) var_3)), (var_7))))) + (((/* implicit */int) var_12)));
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) var_11)))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        arr_3 [i_0] [(short)6] |= ((/* implicit */unsigned int) ((unsigned long long int) (-((-(((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (var_8) : (max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))));
        var_15 = ((short) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_1 [(unsigned char)1] [i_0 - 2]))))) ? (((var_8) ^ (var_7))) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_6 [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((arr_6 [i_1 + 2]) | (var_8)))) : (((var_9) + (((/* implicit */unsigned long long int) var_6))))));
        var_16 &= ((/* implicit */int) 3152763574U);
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_17 *= max((arr_9 [i_1 + 3]), (min((((/* implicit */unsigned long long int) (unsigned short)51570)), (arr_12 [i_1 + 2] [i_2] [i_1 - 1] [i_1 - 1]))));
                        arr_16 [i_1] [i_3] [23ULL] [i_4] = min((max((((/* implicit */int) min((var_1), (((/* implicit */short) var_5))))), ((-(((/* implicit */int) arr_14 [i_1 + 4] [i_2] [i_2] [i_3] [i_3])))))), (((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))));
                        arr_17 [i_1 + 4] [i_2] [i_3 - 1] [i_3] = (unsigned short)13966;
                        arr_18 [i_1 - 1] [i_4] [i_3] [i_4] [i_3] [i_4] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) (+(1804242376)))) & (((var_4) >> (((/* implicit */int) (_Bool)1)))))), (((/* implicit */unsigned long long int) var_1))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */int) var_2)) >= (var_7)))), (((((/* implicit */int) (unsigned short)51583)) << (((((/* implicit */int) (short)2806)) - (2796))))))) > (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) 1804242375)) ? (min((((/* implicit */int) var_2)), ((+(((/* implicit */int) arr_19 [i_1 + 1] [i_2] [i_1 + 1] [(_Bool)1] [i_4] [i_1 + 1] [i_5])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [i_5]) | (var_4)))) && (((/* implicit */_Bool) (+(var_8))))))))))));
                            var_20 = ((/* implicit */_Bool) min((var_6), (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_2] [i_3] [i_5])) && (((/* implicit */_Bool) arr_15 [i_3])))) || ((!(var_3))))))));
                            arr_22 [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) ((min((max((((/* implicit */unsigned long long int) var_2)), (arr_15 [i_3]))), (((/* implicit */unsigned long long int) arr_11 [i_4] [i_2] [i_3] [i_4])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((arr_5 [i_1 + 1] [i_1 - 1]) ^ (((/* implicit */int) var_0)))))));
                            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_1] = ((/* implicit */_Bool) -1804242376);
    }
}
