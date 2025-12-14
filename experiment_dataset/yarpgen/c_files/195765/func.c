/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195765
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
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [1LL] [i_2] [i_0] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_2] [i_3] [i_2] [i_2])), (arr_3 [i_1])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))) - (28)))))));
                            var_16 = ((/* implicit */int) max((arr_2 [i_1] [i_0]), (((/* implicit */signed char) (((!(var_3))) || (((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)16)), (var_0)))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 2] [i_2] [i_4 - 2] [i_4 - 1] [i_4] [12LL]))) + (-2469151190050409245LL))));
                                var_18 = ((/* implicit */int) min((-9223372036854775804LL), (((/* implicit */long long int) arr_5 [(unsigned short)0] [(unsigned short)0]))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_19 [i_1] [i_5] [i_5] [i_0] = ((/* implicit */short) (unsigned char)7);
                            var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)240)) || (((/* implicit */_Bool) var_0)))));
                            var_20 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (var_8) : (((/* implicit */int) (unsigned char)214)))))))));
                            /* LoopSeq 1 */
                            for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                            {
                                var_21 *= ((/* implicit */int) var_3);
                                var_22 = ((/* implicit */unsigned long long int) ((((-955274369) + (2147483647))) << (((15360) - (15360)))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned short) (-((+(((/* implicit */int) var_7))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(((/* implicit */int) ((max((var_8), (((/* implicit */int) var_15)))) <= (((/* implicit */int) (!(var_10))))))))))));
    var_25 = ((/* implicit */signed char) min((var_6), (var_9)));
    var_26 &= ((/* implicit */unsigned short) ((((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_15)))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) <= (((/* implicit */int) (unsigned short)25749))))))) < (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) (signed char)-119)) - (((/* implicit */int) (unsigned char)64))))))));
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        for (unsigned char i_9 = 3; i_9 < 14; i_9 += 2) 
        {
            {
                var_27 = ((/* implicit */unsigned short) ((signed char) ((signed char) arr_25 [i_9])));
                var_28 = (((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) <= (354731548U)))))) >= (((((int) var_5)) / (((/* implicit */int) arr_15 [i_9] [i_9] [i_9])))));
            }
        } 
    } 
}
