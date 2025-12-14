/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54874
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)121)), (arr_4 [i_0] [i_1])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_1 + 1] [i_3]), (((/* implicit */signed char) var_6)))))) - (arr_6 [i_0] [i_3])));
                            arr_12 [i_1] = ((/* implicit */long long int) ((arr_8 [i_0] [i_2] [i_1]) + (((/* implicit */int) ((unsigned char) ((unsigned short) arr_8 [i_0] [i_2] [i_1]))))));
                            var_17 = (-(max((((/* implicit */long long int) arr_7 [i_1 - 1] [i_2 + 2] [i_2] [i_1])), (max((1048575LL), (((/* implicit */long long int) var_7)))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (max((((unsigned int) max((((/* implicit */int) arr_1 [i_0])), (116176605)))), (((/* implicit */unsigned int) (~(max((1593219915), (var_15))))))))));
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (arr_3 [i_0] [i_1]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) + (12636153136887408211ULL)));
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (-3076638808601729714LL) : (3076638808601729713LL))))));
            }
        } 
    } 
    var_21 = ((((_Bool) -5251247075472398952LL)) ? (((/* implicit */unsigned long long int) var_4)) : (max((((/* implicit */unsigned long long int) 2147483647)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (12636153136887408219ULL))))));
}
