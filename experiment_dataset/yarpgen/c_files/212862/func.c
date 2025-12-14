/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212862
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = var_3;
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_17))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_22 &= ((/* implicit */int) 7603506816229321675LL);
                                var_23 = ((/* implicit */signed char) ((min((7603506816229321692LL), (((/* implicit */long long int) -1)))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-7603506816229321693LL))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) arr_16 [i_4] [i_4 + 1] [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4]);
                    var_25 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) arr_12 [i_2] [i_4 - 1] [i_2])), (max((((/* implicit */long long int) arr_7 [i_2] [i_3] [i_2])), (-7603506816229321693LL))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_7]))));
        arr_20 [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_18 [i_7] [i_7])))) == (((long long int) arr_19 [i_7]))));
    }
    var_27 = ((unsigned int) (+((-(((/* implicit */int) var_5))))));
}
