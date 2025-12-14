/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35481
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [9LL])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_2 [i_0] [i_3]))) : (arr_5 [i_3] [i_2] [i_1] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [0ULL])) ? (arr_4 [i_3] [4LL]) : (((/* implicit */unsigned long long int) var_12))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) var_12)))))))));
                            var_17 = ((/* implicit */int) arr_5 [i_1] [(unsigned short)4] [i_1] [i_1]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((short) arr_6 [(unsigned char)4] [i_1] [i_1] [i_2] [(short)1] [(unsigned char)6])))) ? (((/* implicit */unsigned int) ((arr_7 [(short)5] [i_1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_3] [i_1]))))) : (((unsigned int) arr_2 [i_0] [i_1]))));
                            var_19 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_7 [9] [i_0])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2]))))) : (var_13))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                            {
                                arr_16 [i_1] = ((unsigned long long int) ((((_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((unsigned char) arr_14 [i_6] [(unsigned short)7] [(unsigned short)5] [i_4] [i_1] [4LL] [i_0]))));
                                arr_17 [i_1] [i_5] [10] [i_1] [i_1] = var_5;
                                var_21 = ((/* implicit */signed char) arr_4 [i_1] [14ULL]);
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_15 [i_6] [i_1] [i_4] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_5] [i_1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (arr_4 [i_1] [(short)14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_5] [(signed char)14] [(_Bool)0])))));
                            }
                            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(unsigned char)8] [(short)8])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [(_Bool)1]))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] [7ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_4 [i_1] [i_1]))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) arr_0 [i_1]))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_14 [i_0] [i_1] [9ULL] [(signed char)3] [i_0] [10ULL] [13ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [9LL] [3U]))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [7U])) ? (((/* implicit */unsigned long long int) ((int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)10] [i_1] [i_1])))))) ? (((unsigned long long int) arr_11 [i_0] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_1] [(unsigned short)4] [i_0] [i_0])))))));
                arr_19 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_10 [(unsigned short)3] [i_1] [8ULL] [(unsigned short)10])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_8 [(short)7] [i_1])) : (arr_15 [i_1] [i_1] [(unsigned char)5] [i_1] [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
}
