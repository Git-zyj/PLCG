/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231792
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
    var_16 = ((/* implicit */int) 8991765341051701456LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) (unsigned short)43131)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned short)64503))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (short)32749)) | (((/* implicit */int) (short)29782)))))));
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) 1422808470)))), (((/* implicit */unsigned int) (short)10433))))) ? (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) : (((((/* implicit */_Bool) min(((unsigned short)43141), ((unsigned short)6623)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-32749)), ((unsigned short)927))))) : (var_15)))));
                                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((-1731394788), (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)28111)), ((unsigned short)64608))))))) && ((((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])))) || (((/* implicit */_Bool) max((504403158265495552LL), (((/* implicit */long long int) var_8)))))))));
                                var_21 = ((/* implicit */unsigned int) (-(max(((+(504403158265495554LL))), (((/* implicit */long long int) max((271209888U), (((/* implicit */unsigned int) 420679925)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */int) arr_4 [i_1] [i_1])) ^ (((/* implicit */int) arr_1 [i_0])))))), (max((((/* implicit */int) arr_7 [i_2] [i_4] [i_2 + 1] [i_0])), ((~(((/* implicit */int) (unsigned char)104))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 -= var_7;
    var_23 = ((/* implicit */_Bool) min((1287710895U), (((/* implicit */unsigned int) var_10))));
}
