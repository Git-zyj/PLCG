/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217475
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
    var_15 = min((((/* implicit */signed char) var_4)), ((signed char)51));
    var_16 += max(((unsigned short)23303), (((/* implicit */unsigned short) (signed char)-52)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (signed char)-52)), (4411344967159400233ULL))), ((((~(arr_4 [i_1] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) == (-2438576368405296354LL)))))))));
                            arr_11 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((-(((/* implicit */int) (signed char)-45))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_13))))));
                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)37)), (-2438576368405296354LL)))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-36)))) + ((-(((/* implicit */int) ((var_8) || (((/* implicit */_Bool) arr_4 [i_0] [i_1])))))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)70))))) / (max((((4411344967159400208ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_3))))));
                            var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_6))))), (((arr_4 [i_0] [i_4 + 1]) | (((/* implicit */unsigned long long int) var_13))))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */short) (~(((/* implicit */int) ((max((((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1])), (var_13))) > (((/* implicit */long long int) (-(arr_2 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_23 = (~((-(6498405944339062502LL))));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) / (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_14))), (((/* implicit */unsigned long long int) (-(var_3)))))))))));
}
