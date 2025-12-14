/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234356
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
    var_13 = ((((/* implicit */int) (unsigned char)1)) == (((/* implicit */int) (unsigned short)4710)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (unsigned short)60826)))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 1] [0ULL])) ? (((/* implicit */unsigned long long int) arr_0 [i_2 + 1])) : (arr_3 [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_0] [i_0])))));
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) min(((!((_Bool)1))), (((((/* implicit */int) (unsigned short)4710)) < (((/* implicit */int) (unsigned char)23)))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)4720))))))) && (((/* implicit */_Bool) (~(arr_5 [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((arr_3 [i_0] [i_1]), (((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_1))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3305528963U))))))));
                                var_16 = ((/* implicit */_Bool) -3707496128834582647LL);
                                var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(1073741822U)))) ? (arr_6 [i_1 - 2] [i_2 - 1] [i_3 - 2]) : (((/* implicit */unsigned long long int) min((3305528956U), (3305528963U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
