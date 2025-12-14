/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206865
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_11)))))) >= (((min((536870912U), (((/* implicit */unsigned int) var_7)))) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_9)))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) (+((-(((/* implicit */int) arr_3 [i_0]))))))), ((+(var_1)))));
                                arr_16 [i_0] [i_1] [(unsigned char)4] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)220)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1]))))), (max((((/* implicit */short) var_4)), (var_0)))))) ? ((-(var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_0])))))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) min(((unsigned char)153), ((unsigned char)113)));
                            }
                        } 
                    } 
                } 
                arr_18 [(_Bool)1] [i_1] [(signed char)8] = ((((/* implicit */_Bool) (unsigned char)153)) || (((/* implicit */_Bool) (unsigned char)147)));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned long long int) ((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_22 [i_6] [i_5 - 1] [i_1] [i_6]))))))));
                            var_16 = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_0] [(unsigned char)8] [i_5] [i_6 - 1]))))), (arr_10 [i_0] [i_0] [i_1] [i_5 + 1] [i_1] [i_6 - 1])));
                            var_17 = ((/* implicit */unsigned short) (~(max((arr_19 [i_5 + 1]), ((~(var_6)))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(5946233161879571275LL))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (max((((/* implicit */int) (signed char)66)), (-732799102))) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)47)) ? ((~(-4867702709370548471LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))) + (8302))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) ((-4867702709370548471LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((~(5946233161879571275LL)))))));
    var_21 = (-(var_6));
}
