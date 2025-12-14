/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191713
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
    var_13 = ((/* implicit */long long int) max((min((var_7), ((-(var_7))))), ((~(((/* implicit */int) ((unsigned short) var_6)))))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_6)) | (var_4))) : (((/* implicit */int) min((var_5), (var_5))))))) ? (var_8) : (((/* implicit */long long int) (+(((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_1))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_10)))))), (min((min((-658539354190069730LL), (2097151LL))), (((/* implicit */long long int) (!(var_5)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (-(max((min((((/* implicit */long long int) var_4)), (-8154787299548347193LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
                                var_16 = max((((/* implicit */long long int) ((((/* implicit */_Bool) -3946821308819728338LL)) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) var_2))))), (((min((((/* implicit */long long int) var_2)), (-8154787299548347193LL))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0 - 1])))))));
                                var_17 = ((/* implicit */short) min(((-((~(arr_2 [i_0] [i_3 - 3]))))), ((+((+(((/* implicit */int) var_3))))))));
                                var_18 = ((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) (((+(((/* implicit */int) var_11)))) - (min((((/* implicit */int) var_2)), (var_4))))))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((((-1480560487) + (2147483647))) << (((((-3946821308819728338LL) + (3946821308819728344LL))) - (6LL)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8692866219344811592LL)) ? (-1) : (((/* implicit */int) (short)10432))))), (max((((/* implicit */unsigned long long int) 1)), (12936268594536576916ULL)))))));
                }
                for (signed char i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3946821308819728345LL))));
                    var_20 = ((/* implicit */long long int) ((arr_2 [i_0] [i_1]) | (max((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_10)))), ((-(((/* implicit */int) var_10))))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((max((min((var_12), (((/* implicit */long long int) -1)))), (((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 - 1])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)43)) >> (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)11201)) : (arr_10 [i_0 + 1] [i_0 + 1])))))))));
                }
                var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) 986848469))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_1] [i_1] [i_1] [i_0] [i_0 - 1] [i_0])))), (min((min((((/* implicit */long long int) (signed char)112)), (-8154787299548347180LL))), (((/* implicit */long long int) ((short) (signed char)115)))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) 490293366U)))))));
                arr_19 [i_0] [i_1] = ((/* implicit */long long int) (signed char)52);
            }
        } 
    } 
}
