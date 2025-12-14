/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202780
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
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 *= ((/* implicit */signed char) arr_4 [i_0] [(unsigned short)4]);
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(((((/* implicit */_Bool) min((((/* implicit */short) (signed char)105)), (arr_4 [i_1] [i_2])))) ? (min((arr_1 [i_2 + 1]), (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)105)) == (((/* implicit */int) arr_0 [i_0 + 1]))))))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_2 [i_0 + 3]))))));
                    arr_9 [(unsigned short)9] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (signed char)105))));
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)105)) ? ((+((-(((/* implicit */int) var_2)))))) : (min((((((/* implicit */_Bool) arr_6 [i_1 - 3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [i_1] [(unsigned short)18] [i_2 + 1])))), (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
    var_23 |= var_14;
    var_24 = (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)105)), (var_11)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-106)), (var_11)))))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27868)) ? (((/* implicit */int) arr_4 [i_3] [(unsigned short)0])) : (arr_13 [i_3] [i_4]))))))), (((((((/* implicit */int) (unsigned short)22025)) != (((/* implicit */int) (signed char)-106)))) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)5))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_3] [i_4]), (((/* implicit */unsigned short) (signed char)-106)))))))))))));
                var_26 = var_19;
                /* LoopNest 3 */
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_25 [i_3] [i_4] [i_5] [i_4] [(signed char)2] [(short)18] |= ((/* implicit */unsigned int) ((unsigned short) 2070093190));
                                var_27 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_3] [i_3] [i_4] [i_5 + 3] [i_6] [i_7]))))) ? (((/* implicit */int) arr_24 [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 + 2] [i_7 + 2])) : (((((/* implicit */_Bool) var_6)) ? (arr_13 [i_3] [18LL]) : (arr_3 [i_4] [i_6] [(signed char)20]))))) >= (max((min((363729725), (((/* implicit */int) (unsigned short)43511)))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (2070093190) : (((/* implicit */int) (short)0))))))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)43412)))) ^ (((/* implicit */int) ((short) (signed char)-106)))))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) ((unsigned short) min((arr_4 [i_3] [i_6]), (arr_4 [(signed char)6] [i_4])))))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) -862188752);
            }
        } 
    } 
}
