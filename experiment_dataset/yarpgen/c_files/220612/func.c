/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220612
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
    var_18 = ((/* implicit */unsigned short) (-(((unsigned int) var_11))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 789916139U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
        var_19 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((((/* implicit */unsigned int) 201570687)) > (3505051165U))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) -201570698)), (((/* implicit */unsigned short) (unsigned char)127)))))) % (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-109))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (800130259419959639ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((((unsigned int) arr_8 [i_1] [i_1] [i_3])), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)7)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_22 = var_3;
                                arr_19 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (unsigned char)74))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) (unsigned char)26);
                }
            } 
        } 
    } 
}
