/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53098
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)40))) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (_Bool)1)))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) != (((/* implicit */int) (signed char)-34)))))) != (5646023817898475537LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (unsigned char)255);
                                var_22 = ((/* implicit */long long int) (signed char)-37);
                                var_23 = ((/* implicit */unsigned short) arr_0 [i_3]);
                            }
                        } 
                    } 
                } 
                var_24 *= ((/* implicit */signed char) ((((/* implicit */int) min((((_Bool) arr_3 [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) != (3666932363U)))))) << (((((unsigned long long int) max((var_9), (((/* implicit */unsigned int) (_Bool)1))))) - (1285637821ULL)))));
                var_25 = ((/* implicit */unsigned char) ((unsigned int) arr_11 [16LL] [i_1] [(unsigned char)15] [i_1]));
            }
        } 
    } 
}
