/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23653
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
    var_13 *= ((/* implicit */unsigned long long int) ((min((min((2406352443120845182LL), (var_8))), (min((-4661871522674436520LL), (-7473464271206463199LL))))) / (((((var_1) % (-7473464271206463191LL))) / (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [18U] |= ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) max((((var_1) % (((/* implicit */long long int) arr_0 [10U])))), (((/* implicit */long long int) arr_0 [9LL])))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            arr_17 [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned char)71)) / (((/* implicit */int) (unsigned char)39)))), (((((/* implicit */_Bool) var_5)) ? (arr_14 [8] [(unsigned char)0] [(unsigned char)0] [i_4 + 1] [i_0]) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_4 + 1] [i_4 - 2] [i_4] [i_4 + 1] [i_4]))))));
                            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)217)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)39))))));
                            arr_20 [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */int) var_2);
                            var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((min((((/* implicit */long long int) var_7)), (var_2))) == (min((((/* implicit */long long int) var_6)), (var_1))))))));
                        }
                        var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */long long int) arr_0 [i_3])) + (7473464271206463197LL)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [4] [i_2] [4] [(unsigned short)3] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)11] [i_3]))))) - (arr_1 [i_0])))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_11))))));
}
