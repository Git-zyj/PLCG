/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192005
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = (~(((/* implicit */int) (short)28879)));
                var_16 -= ((/* implicit */short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)8192))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */long long int) var_2)), (-6366490359331684370LL)))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])))), ((!(((/* implicit */_Bool) 18446744073709551614ULL)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */short) ((((/* implicit */int) min((arr_13 [i_0] [i_4] [i_0] [i_0]), (((/* implicit */unsigned short) (short)1))))) + ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)179)))))))));
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), ((~(arr_12 [i_0] [i_0] [i_4])))));
                                var_21 = max(((+(7ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((2584063001U), (((/* implicit */unsigned int) (short)0))))) * (((5ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_0);
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) > (((max((-3399793061015146197LL), (((/* implicit */long long int) (_Bool)1)))) >> ((((-(var_10))) - (16281861543632941114ULL)))))));
}
