/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30266
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15108))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((short) arr_4 [i_1 + 2])))));
                        var_15 = ((/* implicit */short) ((int) var_8));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_12)))) ? (((/* implicit */int) ((2859138069988671696ULL) > (12008430431731858237ULL)))) : (((/* implicit */int) (short)13873))));
                        arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_3 - 1] [i_3] [i_3 + 1]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_12 [i_0])) : (arr_11 [i_0] [i_1])))));
                        var_17 += ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_3])) > (((/* implicit */int) arr_10 [i_1 + 2] [i_3] [i_3] [i_3 - 1] [i_3] [i_3]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((unsigned char) (-((+(var_6))))));
                        var_18 += var_10;
                    }
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_2)), ((((~(7883133799976359085ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_5] [i_2] [i_0])))))));
                            var_19 = ((/* implicit */long long int) (short)2195);
                        }
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5])), (max((arr_22 [i_1 - 1] [i_1 + 2] [i_5 + 3] [i_5] [i_5]), (((/* implicit */int) max((var_4), (var_4)))))))))));
                        arr_24 [i_2] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */short) var_6);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_2);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (max((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13874))))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_1), (((unsigned long long int) var_0))))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_2)))))))));
    var_24 = ((/* implicit */unsigned int) var_10);
}
