/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23963
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
    var_19 = ((/* implicit */_Bool) 2550014848622034398LL);
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * ((~(65535U)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_21 = ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) && (((/* implicit */_Bool) arr_1 [i_0 - 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */int) arr_8 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]);
                                var_22 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)138)))))))) > ((~(arr_11 [i_1] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 2])))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (((!(((/* implicit */_Bool) ((short) -1427847942))))) || (((/* implicit */_Bool) 0LL)))))));
                                var_24 = ((/* implicit */unsigned int) (unsigned char)1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
