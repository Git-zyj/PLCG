/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34680
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
    var_18 = ((((/* implicit */_Bool) 659606797U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (7219987651112981618ULL))), (((/* implicit */unsigned long long int) ((3635360499U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63161)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */signed char) 242996855U);
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]))));
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)32))))) ? ((~(4051970440U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)2] [i_1])))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */signed char) max(((!(((2129011289U) >= (3675760616U))))), ((_Bool)1)));
                                arr_17 [i_2] = ((/* implicit */long long int) (unsigned char)235);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))) | (242996870U))) << (((max((((((/* implicit */_Bool) -10070298)) ? (arr_12 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49823))))), (((/* implicit */unsigned long long int) 1151947943U)))) - (14286821126846206359ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned long long int) 1151947945U);
        arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) < (((unsigned long long int) -576133305))))) - ((~(((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (-764542992)))))));
    }
}
