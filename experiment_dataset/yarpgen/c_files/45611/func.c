/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45611
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
    var_16 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min(((unsigned short)39269), (var_13)))) : (((/* implicit */int) min((var_11), (var_14))))))), (var_4));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((unsigned short) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) -1408534793);
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] = min((((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)1753)))) != (((int) (unsigned short)1726))))), (min((((/* implicit */unsigned short) arr_2 [i_1] [i_1 + 2])), ((unsigned short)63809))));
                            arr_13 [i_0] [i_1] [(signed char)7] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
                            arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31648)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
