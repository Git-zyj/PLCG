/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50217
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] &= ((/* implicit */signed char) (~(var_13)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 *= ((/* implicit */signed char) arr_5 [i_2]);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3]))) != (-5386760297966335733LL)));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned int) (~((-((-(((/* implicit */int) var_12))))))));
                                arr_17 [i_0] [i_2] [i_2] [i_2] [(unsigned short)8] [i_0] &= ((/* implicit */int) ((short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)306)), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) var_12)))));
                                var_22 = ((/* implicit */unsigned int) (unsigned short)65220);
                                var_23 = ((/* implicit */signed char) ((short) 284073959));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) (unsigned short)52673))), ((~(arr_5 [i_0])))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 1; i_7 < 8; i_7 += 2) 
                    {
                        arr_26 [i_7] [i_6] [i_7] = ((/* implicit */short) ((_Bool) var_12));
                        arr_27 [(_Bool)0] [i_0] [i_0] [i_6] &= ((/* implicit */int) (~(var_15)));
                        var_24 += ((/* implicit */long long int) var_10);
                    }
                    var_25 = ((/* implicit */long long int) 1340193609U);
                }
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned int) var_14)))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) 4258510308U))));
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) 3068885177U))));
    var_29 &= ((/* implicit */short) 4258510309U);
    var_30 += ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
}
