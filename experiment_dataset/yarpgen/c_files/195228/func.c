/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195228
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) -7947664081940920388LL))) <= (((/* implicit */int) max((var_1), ((short)-20641))))))), (((unsigned int) max((var_7), ((short)6314))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-4149)) + (2147483647))) << (((906112806875271798LL) - (906112806875271798LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [5U] [i_0])))))) : (((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1])))))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0 - 1])))) : (((/* implicit */int) var_16))));
        var_19 = var_9;
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((arr_0 [i_0 + 2]), (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & ((-(((/* implicit */int) (unsigned char)53))))))), (((3LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0 + 2] [i_0 - 1] [(signed char)15]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0 - 3] [i_0 + 2] [i_0 + 3]), (arr_4 [i_0 - 2] [i_0 - 3] [i_0 + 3]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1026018778)) ? (((/* implicit */int) (short)-4084)) : (((/* implicit */int) var_9))))), (((((/* implicit */unsigned long long int) arr_0 [i_1])) * (0ULL)))))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) (+(-19)));
                            var_24 = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                arr_18 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) var_2);
                var_25 = ((/* implicit */unsigned long long int) ((arr_16 [i_2 + 1] [i_3] [(_Bool)1] [7ULL] [i_3]) / (arr_15 [(short)19] [i_2] [16] [i_2] [i_2 + 1] [0ULL])));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_26 = ((short) ((arr_19 [(unsigned short)0]) >= (((/* implicit */long long int) ((/* implicit */int) (short)27824)))));
                            arr_25 [i_7] [i_6] [i_3] [9] [17] = ((/* implicit */unsigned char) (short)-9150);
                        }
                    } 
                } 
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_27 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_4 [i_8] [i_2] [i_0])), (max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)202)) : (1))))))));
                var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                var_29 = ((/* implicit */long long int) (((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) -8685178286601707238LL))));
            }
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (unsigned char)60))));
            arr_30 [i_0] = ((/* implicit */unsigned int) 14692140852389149453ULL);
        }
        arr_31 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2]);
    }
    var_31 = ((/* implicit */unsigned char) max((var_11), (var_3)));
}
