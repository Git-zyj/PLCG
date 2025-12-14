/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49535
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
    var_16 = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned long long int) var_13)), (var_10))), (min((var_8), (((/* implicit */unsigned long long int) var_5)))))) ^ (min((max((var_10), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (unsigned short)17605)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-64))))) - (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1 - 3])), (arr_1 [i_0]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)74)), (arr_3 [i_0])))) - (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */unsigned char) var_9))))))))));
                arr_6 [i_0] [i_1 - 3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) arr_3 [i_0])))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) & (var_6)))))) == (min((((/* implicit */long long int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))), (max((((/* implicit */long long int) 4031986204U)), (3221970558458362878LL)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned short) max((((max((((/* implicit */unsigned long long int) var_9)), (var_10))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (var_5))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_11))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)94)), (8388604))))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((arr_9 [i_0] [i_1] [i_3]) || (((/* implicit */_Bool) var_2)))) && (((arr_9 [i_0] [i_1] [i_0]) && (((/* implicit */_Bool) 2278316749U))))))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_3])) & (((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_3]))))), (((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2 + 2])) / (arr_0 [i_2] [i_2]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) * (((/* implicit */int) (short)-32761))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6076534710846547636LL)) - (var_1)))))))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_5])) == (((/* implicit */int) arr_2 [i_0]))))), (min((var_10), (((/* implicit */unsigned long long int) (signed char)-72))))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((var_7) + (var_7)))), (min((arr_1 [i_5]), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_1] [i_4])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) << (((((/* implicit */int) arr_3 [i_1])) - (193)))))) && (((/* implicit */_Bool) max((arr_2 [i_5]), (((/* implicit */short) (signed char)32)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((var_12), (var_12)))) * (max((var_6), (((/* implicit */unsigned int) var_9))))))), (max((((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-75)))))))));
}
