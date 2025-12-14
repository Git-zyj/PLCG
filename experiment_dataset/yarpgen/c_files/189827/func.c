/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189827
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_8 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((min((-4255885562216089366LL), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) arr_4 [i_3 + 1] [i_2 + 1] [i_2] [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2] [i_3])) ? (arr_2 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_3])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_2 [i_2] [i_3]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [9LL] [9LL] [9LL] [i_3])), (-9223372036854775807LL))))))));
                            var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1373749756U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) : (((arr_7 [i_1] [i_1] [i_1] [(_Bool)1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_1] [i_2 + 1] [i_3])), ((short)6900))))) : (((((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_1] [i_0])) >= (((/* implicit */int) (signed char)-42)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [11LL]))) : (arr_1 [i_1])))));
                            arr_9 [i_0] [i_1] [9] [i_3] = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((unsigned char) 8255417255134740503ULL))), (arr_1 [i_2 - 1])))));
                            arr_10 [i_0] [9LL] [i_2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-11456)) + (2147483647))) >> (((-9223372036854775779LL) + (9223372036854775783LL)))))), (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_3] [i_3] [i_3])) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)84))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [3U] [i_0] [i_1]))))))) ? (((/* implicit */int) max(((_Bool)1), (((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0] [i_1]))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (13268524760770388522ULL)));
                arr_12 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)511))) + (((long long int) 3648037376U)))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((short) ((max((9223372036854775807LL), (((/* implicit */long long int) -1367539275)))) <= (((/* implicit */long long int) ((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45667))))))))));
}
