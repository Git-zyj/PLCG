/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196967
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 69805794224242688ULL))))), (min((((/* implicit */unsigned int) arr_12 [i_3])), (958517213U)))))));
                                var_15 += min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5608)) & (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0]))))), (917504U));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) (~(((((/* implicit */int) arr_12 [i_1])) << (((arr_10 [i_1]) + (3052687442936027132LL))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((4294967295U) >> ((-(((((/* implicit */int) (unsigned char)0)) * (2147483647)))))));
    var_17 = ((/* implicit */short) var_13);
    var_18 = ((/* implicit */unsigned int) (!(min(((_Bool)1), (((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
}
