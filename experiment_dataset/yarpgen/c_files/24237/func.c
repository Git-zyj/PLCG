/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24237
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) var_11))))))));
        var_13 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) var_5))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_14 += ((/* implicit */unsigned int) arr_5 [i_3] [i_1] [i_1]);
                        arr_11 [i_3] [i_0] [i_3] [i_1] [i_2] [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? ((-(((/* implicit */int) (short)-22252)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_3)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)22251))) ? (((/* implicit */int) (short)22232)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)144)) > (((/* implicit */int) (unsigned char)149)))))))) : (((unsigned long long int) (-(((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_5 [(unsigned short)9] [i_0 + 3] [i_0 + 3])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29014)))))));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        arr_17 [(unsigned char)15] = min(((!(arr_16 [i_4]))), (arr_16 [i_4]));
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */_Bool) ((short) (((+(((/* implicit */int) var_3)))) << (((/* implicit */int) arr_15 [i_6])))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_8] [i_5] [i_5] [i_7]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9))))), (((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned long long int) var_3)), (var_10)))))));
                                arr_30 [i_6] = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_22 [i_5 + 3] [i_5 + 3] [i_5 + 2] [i_4])), (var_8)))), (((unsigned long long int) var_5)))))));
                }
            } 
        } 
    }
    var_18 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))))))));
}
