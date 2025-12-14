/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50566
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
    var_12 = max((max((((/* implicit */unsigned long long int) (unsigned short)27485)), (15298575239234097518ULL))), (((/* implicit */unsigned long long int) 15728640)));
    var_13 = ((/* implicit */long long int) ((unsigned char) -15728640));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((signed char) (short)-1450)))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 ^= 3148168834475454102ULL;
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8942385012459884852LL))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        var_17 &= ((/* implicit */int) ((((((long long int) (unsigned char)158)) - (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_2] [i_3 - 1]))))))) + (((/* implicit */long long int) (+(min((15728646), (((/* implicit */int) var_6)))))))));
                        var_18 ^= ((/* implicit */unsigned char) max((((2261429905529609972ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))))), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))));
                        var_19 += ((/* implicit */_Bool) var_2);
                        arr_11 [i_0] [i_1] [i_0] [i_3 + 1] = ((/* implicit */short) ((_Bool) -1079904921));
                        var_20 += ((/* implicit */int) var_8);
                    }
                    for (int i_4 = 2; i_4 < 13; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_6))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_7))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_18 [i_0 - 1] [i_1] [i_1] [i_5] [i_1] [i_5] = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
                            arr_19 [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_13 [i_2]) : (((/* implicit */int) arr_7 [i_4] [i_1] [i_2]))))) ? (((/* implicit */int) var_8)) : (arr_5 [i_2] [i_1] [i_2])));
                        }
                        for (short i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) -862163209);
                            arr_22 [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((int) arr_21 [i_6 - 2] [i_0] [i_2] [i_1] [i_0] [i_0] [i_0])))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)255))));
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 15153778130086110923ULL);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_6), (min((var_2), (var_8)))))) : (((/* implicit */int) var_7))));
}
