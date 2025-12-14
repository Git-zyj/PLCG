/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40663
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
    var_18 = ((/* implicit */signed char) var_5);
    var_19 -= ((/* implicit */long long int) min((((/* implicit */unsigned short) var_0)), (var_1)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) (+(arr_4 [i_0 - 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) -454815910559952773LL))))) : (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 2])))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0 + 3]) : (arr_4 [i_1]))) : (max((arr_4 [i_0 - 3]), (((/* implicit */int) arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) min((arr_0 [i_0]), (arr_10 [i_3])))))), (max((((/* implicit */int) ((10525210555190106566ULL) >= (((/* implicit */unsigned long long int) -454815910559952773LL))))), (((int) (unsigned short)44197)))))))));
                            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) arr_3 [8]))), (var_17)));
                            arr_11 [i_0] [i_0] [i_2] [1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), (arr_9 [i_3] [i_0 - 2] [i_2] [(unsigned char)0] [i_0 - 2])))), (1866654653)))) ? (var_5) : (((/* implicit */int) min((((((/* implicit */unsigned long long int) 321121430)) != (var_15))), (((((/* implicit */int) arr_3 [i_0])) == (var_9))))))));
                            var_23 = (unsigned short)6757;
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (var_6) : (arr_1 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) ((min((733815471), (var_9))) + (((/* implicit */int) arr_10 [4U])))))));
                        }
                    } 
                } 
                arr_13 [(unsigned char)3] [i_1] [i_1] = ((max((max((-1082138443), (((/* implicit */int) var_2)))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 - 2] [i_0])))) + (arr_4 [i_1]));
            }
        } 
    } 
    var_24 &= ((/* implicit */short) var_8);
    var_25 = max((((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_7))))) ? (min((((/* implicit */long long int) -418292181)), (5434397433057922402LL))) : (-8365039695806005742LL))), (((/* implicit */long long int) var_1)));
}
