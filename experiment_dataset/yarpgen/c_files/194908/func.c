/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194908
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
    var_18 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (+(max((12604053179098373952ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            var_20 = ((/* implicit */signed char) max((max((((/* implicit */long long int) (signed char)116)), (5121513957354867140LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)197)) >> (((arr_3 [i_3] [(unsigned char)15] [(unsigned char)15]) - (8993661388585343040ULL)))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((min((min((arr_10 [i_0] [i_0 - 1] [15U] [15U] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [9])), (var_10)))))) + (((/* implicit */unsigned long long int) (-((+(var_15))))))));
                arr_11 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) min(((signed char)116), (((/* implicit */signed char) var_13))))) / (((/* implicit */int) arr_8 [i_0 - 1] [0ULL] [i_0 - 1]))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [12U] [i_0 + 1] [i_0 + 2] [8U])) || (((/* implicit */_Bool) var_1)))))));
                    var_23 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)115))));
                }
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_4), (var_12))))))) ? ((-(((/* implicit */int) (signed char)-117)))) : (((/* implicit */int) (short)511))));
            }
        } 
    } 
    var_25 = var_9;
}
