/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224075
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
    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)29)))))))), (var_0)));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - ((+(max((((/* implicit */unsigned long long int) (short)22749)), (var_7)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_8 [i_2] [i_3 - 1] [(unsigned short)11] [i_2]), (arr_8 [i_2] [i_2] [i_2] [i_2]))))));
                            var_13 = ((/* implicit */unsigned short) (_Bool)1);
                            var_14 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) (+((~(((unsigned long long int) arr_9 [(signed char)1] [i_1] [i_1] [i_0]))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (520093696U))))) / (min((((((/* implicit */_Bool) 520093669U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)0)))), (min((arr_5 [i_0] [11LL] [1ULL] [11LL]), (((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_3);
}
