/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229653
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])))));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_1 - 2] [i_2] [19] [i_3]);
                            var_12 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (max((12U), (((/* implicit */unsigned int) arr_8 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) var_5))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_20 [i_4] [i_0] [(signed char)0] [(unsigned char)18] [(_Bool)1] = ((/* implicit */short) (~(-8330918329701244272LL)));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max(((short)-24972), (((/* implicit */short) (signed char)102))))) ? (5825199344238469404ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)21522))))))), (((/* implicit */unsigned long long int) ((short) 418390652636895060ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */long long int) (short)24959)), (((((/* implicit */_Bool) var_6)) ? (-743325653314010543LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))))))));
}
