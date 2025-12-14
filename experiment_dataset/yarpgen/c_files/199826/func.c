/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199826
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) ((arr_1 [9ULL] [i_0]) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : ((+(arr_3 [i_1] [i_0]))))) : (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_1]) : (((arr_1 [i_0] [i_1]) ? (((/* implicit */int) (signed char)76)) : (arr_3 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) (!(((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (signed char)4))))));
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? ((+(((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            var_13 += ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) : (arr_10 [i_3] [(unsigned short)9] [i_2] [i_1] [i_1] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)29)))) == (-4981973099117035418LL)));
                var_15 = ((/* implicit */int) var_5);
                var_16 = ((/* implicit */unsigned short) min((max((((unsigned int) var_5)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_4] [i_5] [i_5]))))))), (((/* implicit */unsigned int) var_3))));
                var_17 = ((/* implicit */unsigned char) ((max(((!(((/* implicit */_Bool) arr_8 [12U] [12U] [12U] [12U])))), ((_Bool)0))) ? (arr_7 [(signed char)2]) : ((~(((/* implicit */int) arr_0 [i_4] [i_5]))))));
                var_18 = ((/* implicit */signed char) min((min((arr_6 [i_5] [8] [i_4]), (arr_6 [i_4] [(unsigned short)12] [i_5]))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)80)))) && ((!(((/* implicit */_Bool) var_0)))))))));
            }
        } 
    } 
}
