/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34811
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
    var_20 = ((/* implicit */unsigned char) (signed char)-16);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [(signed char)10] [i_1])) ? (arr_7 [i_0] [i_1] [i_1] [(unsigned char)0]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (-399924398576914909LL)))) || (((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2] [(unsigned char)2] [i_1])))))) : (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)3))))) ^ (((((var_13) + (9223372036854775807LL))) << (((3737011894445950445LL) - (3737011894445950445LL)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 1010706639658938276LL)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 2])))));
                                var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7848201405206440506ULL)) ? (((/* implicit */int) arr_0 [i_4 + 4])) : (((/* implicit */int) arr_0 [i_4 + 3]))))) ? ((+(((/* implicit */int) arr_0 [i_4 + 3])))) : (((((/* implicit */int) arr_0 [i_4 + 4])) / (((/* implicit */int) arr_0 [i_4 + 1]))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3618)) ? (((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */long long int) arr_4 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)65521)) ? (arr_1 [i_1]) : (8525462586750815625ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1 + 2] [i_4 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 536870911LL))))))));
                            }
                        } 
                    } 
                    arr_16 [(unsigned char)3] [i_1] [i_1] = ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1] [i_1 + 3] [i_1] [9ULL]);
                }
            } 
        } 
    } 
}
