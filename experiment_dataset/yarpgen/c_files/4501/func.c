/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4501
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((4294967295U) & (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-29040)) + (2147483647))) << (((/* implicit */int) (_Bool)0))))))));
                    arr_8 [i_2] = ((/* implicit */unsigned int) arr_2 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */short) arr_12 [i_4] [i_3] [i_2 - 3]);
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)13200), (((/* implicit */short) (_Bool)1)))))) + (((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0)))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -3160156401520910406LL)) ? (((/* implicit */int) (unsigned short)117)) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) (unsigned short)12326)) ? (arr_1 [(signed char)1]) : (arr_1 [i_0 + 1])))))));
                                var_12 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0 - 2] [i_2] [i_2] [i_3])), ((unsigned char)248)))) : ((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 2])))))));
                            }
                        } 
                    } 
                    var_13 &= ((/* implicit */unsigned short) ((long long int) (!(((3813245437U) != (3813245425U))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-29040)), (min((((/* implicit */unsigned short) (signed char)-53)), ((unsigned short)12320))))))) % (((min((((/* implicit */unsigned int) var_2)), (481721859U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max(((short)29039), (((/* implicit */short) (signed char)(-127 - 1)))))))))));
    var_15 = ((/* implicit */unsigned int) ((long long int) ((var_3) + (((/* implicit */unsigned long long int) 4228786113U)))));
    var_16 = ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) (_Bool)0))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (short)20495))) * (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_6)), ((signed char)-112))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1U)))))))));
}
