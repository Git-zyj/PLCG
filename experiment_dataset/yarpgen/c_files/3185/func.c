/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3185
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) max((arr_2 [i_0] [i_0]), (((((/* implicit */_Bool) ((var_14) | (var_1)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [(short)10]))))))));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0])) ? (arr_2 [i_1 - 1] [i_0]) : (arr_2 [i_1 - 1] [i_0]))), (arr_2 [i_1 - 1] [i_0]))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((arr_2 [i_2 - 2] [i_2]) % (((/* implicit */long long int) (-(((/* implicit */int) (signed char)80))))))))));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) var_7)))) - (((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1]))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) == (((/* implicit */int) arr_5 [i_2] [i_3] [i_2 + 2])))))));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_2 - 2])) ? (arr_2 [i_0] [(short)18]) : (arr_2 [i_0] [i_0])));
            }
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                var_22 &= ((/* implicit */_Bool) ((arr_0 [i_0] [i_2]) ? (((/* implicit */long long int) var_1)) : (((long long int) arr_7 [8] [4LL] [4LL]))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_6] [i_6]))))))))));
                var_24 = ((/* implicit */unsigned short) arr_4 [i_0] [i_2]);
                var_25 = ((/* implicit */long long int) ((_Bool) arr_0 [i_0] [i_2 + 1]));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_26 ^= ((signed char) arr_15 [i_2 + 2] [i_2] [5] [i_7]);
                var_27 |= ((/* implicit */short) arr_10 [(short)12] [(short)22] [(short)22] [i_0] [i_2]);
                var_28 = ((/* implicit */long long int) arr_7 [i_2 - 3] [i_2] [i_2]);
                var_29 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_0)));
            }
            var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) arr_2 [i_2 - 3] [i_2 - 1]))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            arr_22 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_20 [i_0] [i_8])), (var_3)))))) ? ((~(((/* implicit */int) arr_3 [21] [i_8] [i_8])))) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)-113))))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(var_7))))))) : (max((arr_16 [i_0] [i_0]), (arr_16 [i_0] [(_Bool)1])))));
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_4))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_9]))) : (var_10)));
            var_34 = var_1;
            arr_27 [i_0] [i_0] = ((/* implicit */long long int) var_10);
        }
    }
    var_35 = ((/* implicit */unsigned short) var_5);
    var_36 &= ((/* implicit */long long int) var_1);
}
