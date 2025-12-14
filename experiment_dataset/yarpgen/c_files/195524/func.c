/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195524
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
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min(((unsigned short)58872), ((unsigned short)6663)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_3 [i_2]))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])), ((unsigned short)6663)))))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (unsigned short)6653))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-3204876208082256573LL)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16348))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44495))) : (arr_9 [i_1] [i_1] [i_1] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) (signed char)114))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_1 - 1] [i_2] [i_1 - 1]), (((/* implicit */long long int) (unsigned short)6661))))) ? ((-(((/* implicit */int) (unsigned short)58872)))) : (((/* implicit */int) (unsigned char)254)))))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */long long int) ((min(((_Bool)0), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < (arr_7 [i_0] [i_1] [i_1]))))) ? (min((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_0])), (((((/* implicit */int) (unsigned char)252)) ^ (((/* implicit */int) (unsigned short)50994)))))) : (((/* implicit */int) (unsigned short)65511))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min(((unsigned short)44495), ((unsigned short)0)))), (var_0)));
}
