/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45910
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned int) (+((+(((var_9) ? (((/* implicit */int) var_5)) : (arr_0 [(_Bool)0])))))));
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) var_6);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        arr_13 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) arr_0 [i_3]);
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (arr_11 [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (min((4279514204U), (((/* implicit */unsigned int) (signed char)-90)))))) : (((/* implicit */unsigned int) ((max(((-2147483647 - 1)), (((/* implicit */int) (signed char)-3)))) + (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_0] [i_0 - 2] [i_0 - 2] [i_2]) : (var_6))))))));
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((134209536U), (((/* implicit */unsigned int) ((max((arr_7 [i_0]), (((/* implicit */int) var_4)))) >= (((/* implicit */int) (_Bool)0))))))))));
                    }
                } 
            } 
            var_14 *= ((/* implicit */unsigned int) (_Bool)1);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (int i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3401018346U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 134213632)) && ((_Bool)1)))))));
                    arr_19 [i_0] [i_0] |= ((/* implicit */_Bool) (~((~(((arr_6 [i_0 + 1] [i_6 + 3]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_20 [i_6] [i_5] [i_0] [i_5] = ((/* implicit */int) (+((~(((((/* implicit */long long int) 1815795026)) | (4346845212785798629LL)))))));
                }
            } 
        } 
        var_16 -= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) var_6)) > (23U)))), (min((((((/* implicit */int) (_Bool)1)) + (698406892))), (((/* implicit */int) ((_Bool) arr_8 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1])))))));
        arr_21 [i_0] = ((/* implicit */int) 2599859943U);
    }
    var_17 = (~(min((min((1901499701U), (2441586863U))), (((/* implicit */unsigned int) (~(640059862)))))));
}
