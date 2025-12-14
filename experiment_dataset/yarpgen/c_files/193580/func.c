/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193580
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
    var_12 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) var_5))), (var_11)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)48)))), ((+(((/* implicit */int) arr_2 [i_0]))))));
                var_14 -= ((/* implicit */long long int) (-((((-(var_11))) ^ (max((var_5), (((/* implicit */int) var_10))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_13 [(signed char)8] [(signed char)10] [(signed char)6] [i_0 + 1] [i_0 - 1])))) ? (((int) (signed char)-121)) : (((/* implicit */int) (signed char)65))));
                                var_16 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((signed char) (signed char)43))))), ((-(((/* implicit */int) arr_9 [i_0 + 1] [i_3 + 1]))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)43)))))));
                                var_18 -= ((/* implicit */int) var_10);
                                arr_14 [i_0] [i_1] [i_1] [i_2] [(unsigned char)5] [i_1] [i_4] |= var_1;
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) ((var_2) / (-440769512)));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8))))))));
                    var_21 -= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)136))));
                }
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 440769529))));
                    var_23 = (((!(((/* implicit */_Bool) -440769512)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((-4526616738953018463LL), (((/* implicit */long long int) arr_6 [i_0 - 1])))));
                    var_24 = ((/* implicit */long long int) ((int) (~(((((/* implicit */_Bool) arr_0 [i_6])) ? (5989068085489604754LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                }
            }
        } 
    } 
}
