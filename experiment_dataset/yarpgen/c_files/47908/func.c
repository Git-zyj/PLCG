/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47908
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)164)) ? (max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_13))))), (arr_6 [i_2 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)17)) * (((/* implicit */int) (unsigned char)238)))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(16164676330059690939ULL)))))) > ((~((+(1985730895U)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1 + 1] [(unsigned char)19] [17] [i_3 + 3] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) : (3699602084U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -8157691826393275230LL)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(signed char)0] [15U] [i_1 + 1] [i_2] [i_3 - 3] [i_4])) >> ((((~(1578105419776548978ULL))) - (16868638653933002619ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [(signed char)18])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */int) var_15)) : (1817181302)))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) min((3699602075U), (((/* implicit */unsigned int) var_8)))))))));
                                arr_16 [i_0] [19U] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) max((max((var_5), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)79))))))), (((/* implicit */unsigned int) ((unsigned char) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_15))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) 1720238881)) >= (var_7)));
}
