/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34138
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((var_16) - (6242895140068246336ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((_Bool) var_11)) ? (max((arr_1 [i_0]), (var_15))) : (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) arr_4 [i_1])) : (arr_0 [i_3]))))))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_3]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) 3664146175U)) : (5324235464889018247ULL)))))));
                            var_19 = ((/* implicit */unsigned char) (((~(0))) == (((/* implicit */int) var_13))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) < (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_10)))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 2147483647)), (var_3)))) ? (((/* implicit */int) (_Bool)1)) : (max((arr_8 [i_3] [i_2] [i_1] [i_0]), (arr_0 [i_0]))))))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_9 [i_2]))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */_Bool) 5324235464889018247ULL);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) 673593563);
                            var_24 = ((/* implicit */_Bool) min(((((~(3664146175U))) & (((/* implicit */unsigned int) ((1867858228) ^ (arr_8 [i_5] [i_4] [i_1] [1U])))))), (((/* implicit */unsigned int) arr_12 [i_0]))));
                            var_25 = ((/* implicit */unsigned long long int) (unsigned short)7478);
                            var_26 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 3664146175U)) : (arr_15 [i_0] [i_4] [i_4] [i_1] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
