/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190783
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */signed char) arr_0 [i_1] [i_1]);
                arr_5 [11U] = ((/* implicit */unsigned int) ((long long int) (unsigned char)205));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_3 [i_2] [9LL])) - (((/* implicit */int) (unsigned short)25625))))))) * ((-(arr_1 [i_1]))))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)25625))))) % (((((/* implicit */_Bool) (unsigned char)205)) ? (1628540414610448897ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25624)) ? (5380734395841376460LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                }
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_3] [i_0]), (((/* implicit */signed char) arr_3 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(short)17])) ? (1628540414610448897ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))))))))));
                    var_24 = ((/* implicit */long long int) var_1);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min(((((((_Bool)1) ? (224144401) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (unsigned short)25625)) * (((/* implicit */int) var_2)))))), (min(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) var_12))))));
}
