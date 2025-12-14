/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190257
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
    var_17 &= ((/* implicit */short) ((((min((var_11), (((/* implicit */long long int) var_5)))) / (((/* implicit */long long int) var_2)))) / (((/* implicit */long long int) max((min((var_5), (((/* implicit */unsigned int) (short)22555)))), (((/* implicit */unsigned int) (unsigned short)41707)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [(signed char)1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) min((arr_5 [i_0] [i_0]), (((/* implicit */int) (short)22546)))))), (((min((((/* implicit */long long int) var_3)), (-2479615809271478490LL))) + (((/* implicit */long long int) (+(arr_3 [i_0]))))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1 + 2]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-31))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (short)22546);
                            arr_13 [i_0] [(unsigned short)20] [(unsigned short)20] [16LL] = ((/* implicit */int) ((unsigned char) max((arr_5 [(short)1] [i_1 + 2]), (((/* implicit */int) (short)22553)))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 4; i_4 < 20; i_4 += 4) 
                            {
                                var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned short) var_8)), (((unsigned short) (_Bool)1))));
                                var_20 ^= ((/* implicit */long long int) min((arr_3 [i_0]), (((/* implicit */unsigned int) -1713163254))));
                                arr_16 [i_1] &= ((/* implicit */short) ((((/* implicit */int) var_1)) > (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)43))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_8)))) : ((+(-1713163254)))))));
                                arr_17 [i_0] [i_0] [(short)7] [i_0] [i_0] = min((((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) (short)22579))))), (((short) (short)27956)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
