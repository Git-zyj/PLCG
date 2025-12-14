/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52493
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) min((arr_2 [i_2] [i_2] [20LL]), (((/* implicit */signed char) (_Bool)1))))) : ((+(((/* implicit */int) (unsigned char)161))))))), (((unsigned int) ((int) arr_7 [i_0] [i_0] [i_0])))));
                            var_16 = arr_1 [i_0];
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) var_0))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [i_0])))) : (arr_3 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_19 [i_6] [i_4] [i_5] [i_4] [i_4] [i_4] [i_0] |= ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_3 [i_0] [i_5] [i_4])) ? (((/* implicit */int) arr_10 [i_6] [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) max((arr_12 [i_1] [i_5] [i_5]), ((_Bool)0))))))));
                                var_18 = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (unsigned short)8390)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_6])))) - (((/* implicit */int) (_Bool)1)))));
                                arr_20 [i_0] = ((/* implicit */unsigned short) (~(((((6894326607997920624ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0]))))) : (((/* implicit */int) (unsigned short)13537))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned int) (~(min((((unsigned long long int) 2450727579726243609ULL)), (((((/* implicit */_Bool) var_9)) ? (13968381475953768776ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
