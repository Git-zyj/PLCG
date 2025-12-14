/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214008
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
    var_11 += ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_10))))) / (min((var_6), (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) var_5))));
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) < ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_8))))))));
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (4543937891143651304ULL)))))), ((+(((2516208086286484264ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) var_9);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((8222415233541412747LL), (((/* implicit */long long int) arr_4 [i_1] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2]))) * (2516208086286484291ULL)))));
                    var_17 = ((/* implicit */unsigned char) var_6);
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1])) - (((/* implicit */int) (!(arr_1 [i_0 + 1])))))))));
                                var_19 = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_17 [i_5] [i_0] [(unsigned short)14] [i_5] [i_6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (2516208086286484295ULL)))));
                                var_20 ^= ((/* implicit */_Bool) (short)9588);
                                arr_18 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((15930535987423067325ULL) <= (((/* implicit */unsigned long long int) var_1)))))))) ? (((/* implicit */int) ((unsigned short) min((var_9), (((/* implicit */unsigned char) var_2)))))) : ((+(((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 3; i_7 < 13; i_7 += 3) 
                {
                    var_21 = ((/* implicit */signed char) ((_Bool) 2516208086286484264ULL));
                    var_22 = ((/* implicit */unsigned short) var_10);
                }
            }
        } 
    } 
}
