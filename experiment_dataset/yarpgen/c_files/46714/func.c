/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46714
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
    var_11 = ((/* implicit */unsigned int) min((((4505876556245212035LL) / (4505876556245212021LL))), (((/* implicit */long long int) ((short) (short)7585)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(4505876556245212035LL))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3 + 1]) / (((/* implicit */int) (short)19457)))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_4])) && (((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) -4505876556245212035LL))))))))))));
                            var_14 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */int) ((unsigned int) max((((-4505876556245212035LL) | (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((short) 2871674688043655183LL))))));
        }
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min(((short)26910), ((short)768))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_2)), ((short)18111)))) < (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_6 [i_6] [i_6]);
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5])) + (((/* implicit */int) arr_12 [i_6]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_6]))))) : (max((((/* implicit */unsigned int) (unsigned char)102)), (602401902U))))))));
            }
        } 
    } 
}
