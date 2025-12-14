/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54148
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (14688309340472235359ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (-4302902593039467198LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */int) min((arr_3 [i_0] [i_3]), (arr_3 [i_0] [11U])))) : (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) (unsigned char)252)) : (33554368))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 1; i_4 < 14; i_4 += 2) 
                            {
                                arr_10 [i_0] [i_0] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [10] [i_1] [4] [i_2])) ? (((/* implicit */unsigned int) arr_6 [i_1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_3]))) : (arr_8 [i_1]))))))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(short)10] [i_2])) ? (var_10) : (((((/* implicit */_Bool) arr_5 [i_3] [i_1] [i_1])) ? (arr_6 [i_2]) : (((/* implicit */int) arr_3 [i_2] [i_2])))))))));
                                arr_11 [i_2] [(short)8] [i_0] [i_0] [i_1] [i_0] = var_2;
                            }
                            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                            {
                                var_20 = ((/* implicit */int) 4294967293U);
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_6 [i_5]))));
                                arr_15 [i_0] = ((/* implicit */_Bool) ((unsigned int) 1541769800U));
                                arr_16 [i_0] [11LL] [i_0] [11LL] [11LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))) : (arr_8 [i_0])));
                            }
                            var_22 ^= var_7;
                        }
                    } 
                } 
                var_23 -= ((/* implicit */unsigned long long int) var_1);
                arr_17 [i_0] = ((/* implicit */long long int) ((var_15) ? (arr_8 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            }
        } 
    } 
    var_24 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))) * (((((/* implicit */_Bool) 4730049240173390212ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17650))))))) << (3U));
    var_25 = ((/* implicit */int) ((_Bool) var_8));
    var_26 = ((/* implicit */int) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2397591891U))))));
}
