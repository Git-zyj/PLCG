/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38325
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
    var_16 = ((/* implicit */_Bool) min((var_16), (var_15)));
    var_17 += ((/* implicit */short) var_3);
    var_18 = ((/* implicit */long long int) max(((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) * (3846804823U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    var_19 *= ((/* implicit */short) max((var_6), (((/* implicit */long long int) (!(var_10))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(((7259212926365645511LL) - (7259212926365645511LL))))))));
                                arr_14 [i_0] [i_4] [i_3] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((7259212926365645511LL), (((/* implicit */long long int) (unsigned short)52874))))))) ? (((/* implicit */int) arr_9 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_1] [(signed char)3] [i_3] [i_1])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_4]))))) ? (((/* implicit */int) arr_10 [i_4])) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)219))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_5] [i_0] [i_0]));
                            var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)0))));
                            var_23 -= ((/* implicit */_Bool) arr_3 [i_0]);
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)139)) == (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)114)) - (85)))))));
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(max((min((((/* implicit */unsigned int) var_14)), (var_11))), (((/* implicit */unsigned int) (unsigned char)123))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_7]))) ? ((-(-5743483739893729669LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)21490), (((/* implicit */unsigned short) ((-7259212926365645511LL) == (((/* implicit */long long int) arr_6 [i_0])))))))))));
                        }
                        var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */long long int) ((/* implicit */int) (short)12))) | (-7291993838875706669LL)))));
                        arr_25 [(unsigned char)2] [i_0] [(unsigned char)2] [(unsigned char)2] [i_5] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)62455)) && (((/* implicit */_Bool) (unsigned short)1)))));
                    }
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_8])) != (((int) arr_4 [i_2] [i_2] [i_0]))));
                        var_27 = ((/* implicit */long long int) var_8);
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -218846368)) ? (-7291993838875706668LL) : (((/* implicit */long long int) 143018921U))));
                        var_29 = ((/* implicit */unsigned short) var_1);
                        arr_28 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) 18LL);
                    }
                    var_30 = ((/* implicit */int) (unsigned char)27);
                }
            } 
        } 
    } 
}
