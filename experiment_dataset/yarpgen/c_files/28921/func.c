/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28921
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 *= ((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (((arr_2 [i_3] [i_1] [2U]) - (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))));
                            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [10ULL] [10ULL]))))) : (((arr_6 [i_0] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : ((~(max((((/* implicit */unsigned int) (_Bool)1)), (var_7)))))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (-1391409503892159470LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (((unsigned int) (unsigned char)56))));
            }
        } 
    } 
    var_21 *= ((/* implicit */short) max((((/* implicit */int) var_14)), (min((((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned char)231)))), (((/* implicit */int) var_3))))));
}
