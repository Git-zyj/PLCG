/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48830
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
    var_20 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_21 -= ((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) var_16)), (var_1))));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned char) -897262070))), (max((((/* implicit */long long int) arr_1 [i_0])), (var_19)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) 1417885865));
        var_23 = ((/* implicit */short) ((signed char) 897262055));
        var_24 += ((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1] [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 23; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_13 [i_2] [(unsigned short)3] [(unsigned short)3] [i_4] = ((/* implicit */_Bool) ((short) ((int) -897262070)));
                        var_25 = ((/* implicit */unsigned short) ((int) -897262078));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            arr_16 [i_2] [i_4] = ((/* implicit */long long int) ((short) var_9));
                            arr_17 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((int) 1417885874));
                            var_26 = ((/* implicit */unsigned long long int) ((_Bool) var_14));
                            var_27 = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)35984));
                        }
                        var_28 = ((/* implicit */unsigned short) ((signed char) arr_15 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2]));
                        arr_18 [i_1] [i_2] = ((/* implicit */unsigned short) ((_Bool) -6867821870508678259LL));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned short) ((signed char) 135107988821114880ULL));
    }
}
