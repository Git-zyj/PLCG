/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5439
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
    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(var_15))) < (var_4)))) + (var_9)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 3491438662U))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)183)) - (((/* implicit */int) (unsigned short)61192))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_4))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((unsigned long long int) var_15)) != (((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_6)), (803528629U))))))));
                            var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_6 [i_1] [i_1 - 1])), (var_9))) | (((/* implicit */int) ((signed char) var_7)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) 16871183755966321973ULL))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((min((((/* implicit */int) (unsigned short)55834)), (var_2))), (((/* implicit */int) (short)-1))))), ((+(max((1128484035U), (((/* implicit */unsigned int) (unsigned short)65518)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((unsigned int) 1750691444));
                                var_23 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned long long int) 1750691463)), (arr_5 [i_1 - 1] [i_1 - 1]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_3))));
                }
            }
        } 
    } 
}
