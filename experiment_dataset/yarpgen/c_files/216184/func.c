/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216184
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_12 = ((/* implicit */_Bool) -1);
                    var_13 -= ((/* implicit */unsigned int) 8634725574458318788LL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (_Bool)0);
                                var_15 -= -25;
                            }
                        } 
                    } 
                }
                var_16 = ((/* implicit */int) (_Bool)1);
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (signed char)40))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (short)-4096))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 8; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_20 = 6ULL;
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (short)9880))));
                                var_22 = ((/* implicit */short) -8634725574458318808LL);
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */int) (short)31316);
                    var_24 &= ((/* implicit */_Bool) (unsigned short)127);
                }
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    arr_19 [i_1] = ((/* implicit */unsigned short) (short)512);
                    var_25 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) 16266785548393293959ULL))));
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) 1456603090U))));
                }
            }
        } 
    } 
    var_28 = var_10;
    var_29 = ((/* implicit */int) var_11);
    var_30 = ((/* implicit */_Bool) var_7);
}
