/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243194
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23265))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0 - 2]);
                arr_6 [i_0] [i_0] [i_1 + 1] = ((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_0 + 1])), ((~((~(((/* implicit */int) (unsigned short)8160))))))));
                arr_7 [i_0] [i_0] [i_1 - 2] = ((/* implicit */signed char) arr_2 [i_1]);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_14 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((min((-8878920269799048542LL), (((/* implicit */long long int) (unsigned short)23265)))) | (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 1] [i_4 + 1])) - (((/* implicit */int) (unsigned short)23265)))))));
                    arr_15 [i_2] [i_3] [i_4] = (!(((/* implicit */_Bool) 1692752943U)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)217)) == (((/* implicit */int) (unsigned short)23265)))))));
}
