/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235757
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
    var_20 = var_11;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_2 + 1] [(unsigned char)22] [i_1 - 1] [i_3 - 1])))), (((/* implicit */int) ((7742391790560649500LL) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                                var_22 = ((/* implicit */long long int) min(((~(((/* implicit */int) ((((/* implicit */_Bool) (short)-22073)) && (((/* implicit */_Bool) (unsigned char)107))))))), (((/* implicit */int) ((signed char) (short)-22069)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [(unsigned short)11] [i_2 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((/* implicit */int) var_18))))) : (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))), (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))))));
                    var_23 = (-(((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 2])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    arr_18 [(short)15] [i_5] [i_6] = ((/* implicit */unsigned short) arr_14 [i_0] [i_0 - 1]);
                    var_24 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */int) var_14)), (arr_9 [i_6] [(_Bool)1] [i_0 + 1] [(unsigned short)15]))));
                    var_25 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (arr_14 [i_6 + 1] [i_6 + 1])))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_16 [20U] [(short)12] [i_0 + 1]), (arr_16 [(signed char)10] [i_0] [i_0 - 1]))))));
        arr_19 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (492743283U)))) ? ((+(((/* implicit */int) (short)22060)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(unsigned short)21] [(short)19] [i_0] [i_0 - 1] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)9)))))))));
    }
}
