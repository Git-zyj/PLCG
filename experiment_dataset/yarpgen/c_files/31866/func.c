/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31866
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3096184352U))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_4 [i_0] [6LL] [i_0]);
                arr_5 [i_0] [i_0] [16LL] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_13)))) & (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) arr_1 [i_1])), (-362024721319402121LL)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_0] = 4ULL;
                            /* LoopSeq 3 */
                            for (short i_4 = 2; i_4 < 18; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -362024721319402121LL)) ? (var_0) : (var_1)))) | (max((730229187495669888ULL), (((/* implicit */unsigned long long int) 362024721319402124LL)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [15ULL] [i_2 + 1])))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)28954)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & (arr_11 [19U]))))))))))));
                                var_20 += ((/* implicit */int) arr_1 [i_1 + 2]);
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) arr_15 [i_0] [(short)5] [i_0] [18U] [i_5]);
                                arr_20 [i_5] [i_3] [i_2 - 4] [i_1] [i_0] = ((/* implicit */int) var_4);
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [9U])) ? (((/* implicit */int) arr_14 [(short)8] [i_1 + 2] [(short)12] [(short)12] [(_Bool)1] [(unsigned char)0] [i_5])) : (((/* implicit */int) arr_16 [i_0] [i_0] [8LL] [i_2] [i_3] [14] [14])))))));
                                arr_21 [i_0] [i_1] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */int) 7590046384083826821ULL);
                                var_22 &= ((/* implicit */int) min((((arr_0 [i_1]) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28960)) - (((/* implicit */int) arr_12 [i_0] [(signed char)10] [(signed char)10] [i_0]))))))), (((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned short) (short)-4123)), ((unsigned short)7680)))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((unsigned long long int) (+(((/* implicit */int) (short)32751)))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */int) max((arr_17 [i_2] [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2 - 3]), (arr_17 [i_2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 3])))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1 - 3] [i_1 + 2] [i_1 + 2] [i_2 - 2] [i_2 + 2])) || (((/* implicit */_Bool) arr_17 [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 3] [i_2 - 2] [i_2 + 2])))))));
                                arr_26 [15LL] [15LL] [i_6] [(short)7] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1])) == (((/* implicit */int) ((((/* implicit */_Bool) -1492482939)) && (((/* implicit */_Bool) var_10))))))))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)8441))))) != (((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7696))) : (1441624541U)))));
                            }
                            var_26 ^= min((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36563))) : (2853342755U))) * (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_0]))))))), (((/* implicit */unsigned int) ((((2497592072U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))) || (((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
