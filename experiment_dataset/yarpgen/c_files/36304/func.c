/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36304
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    var_11 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << ((((~(((3623036213U) >> (((((/* implicit */int) (short)-27531)) + (27548))))))) - (4294939651U)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (unsigned char)255)))));
                                var_13 = ((/* implicit */short) ((long long int) min((max((((/* implicit */unsigned long long int) 4294967295U)), (5473859049235210008ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)115))))))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (max((((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned long long int) (unsigned char)51)), (arr_3 [i_0] [i_0]))))), (min((((/* implicit */unsigned int) (_Bool)1)), (min((671931083U), (((/* implicit */unsigned int) arr_0 [i_0]))))))))));
                                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_8)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */_Bool) (+(((max((((/* implicit */unsigned int) (unsigned short)5)), (var_2))) / ((+(var_2)))))));
                arr_12 [i_1] &= ((/* implicit */signed char) (((+(262143U))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)41685), (((/* implicit */unsigned short) (signed char)-123))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) ^ (((/* implicit */int) var_4))))), ((~((-(var_6)))))));
}
