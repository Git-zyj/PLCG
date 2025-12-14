/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28744
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) var_0);
                            arr_11 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_21 -= ((/* implicit */signed char) arr_7 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        var_22 -= ((/* implicit */unsigned int) 18045776228136858582ULL);
                    }
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned long long int) min((-412256512), (((/* implicit */int) (!(((/* implicit */_Bool) (short)24001)))))));
                        arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) var_4);
                        var_23 = ((/* implicit */short) var_9);
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_2 + 1] [i_0] = ((/* implicit */int) ((signed char) var_12));
                        arr_17 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) 18045776228136858582ULL);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_24 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (7984612325657602151LL) : (((/* implicit */long long int) 1073741568U)));
                        var_25 = ((/* implicit */unsigned short) ((long long int) var_1));
                        var_26 = ((/* implicit */unsigned int) ((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (-1077142780) : (((/* implicit */int) var_17))))));
                    }
                    var_27 = ((/* implicit */int) arr_8 [i_2]);
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((((/* implicit */int) (short)25201)) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)46214)) : (((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (((((/* implicit */_Bool) var_13)) ? ((~(var_5))) : (((/* implicit */unsigned long long int) var_16))))));
}
