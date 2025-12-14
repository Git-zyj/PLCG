/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35980
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
    var_20 = ((((/* implicit */_Bool) -1189520723155448325LL)) ? (var_4) : (((/* implicit */int) (unsigned short)16368)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_4 [i_1]))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (-((((~(8796091973632ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7905903908914959801LL)) ? (((/* implicit */int) var_10)) : (var_2))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */int) arr_2 [i_2]);
                        var_23 = ((/* implicit */long long int) max((18446735277617577983ULL), (((/* implicit */unsigned long long int) (short)-1))));
                        var_24 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)118))))), (min((((/* implicit */long long int) (unsigned char)250)), (arr_1 [i_4] [i_5 + 1]))))), (max((((/* implicit */long long int) (short)32640)), (((((/* implicit */long long int) arr_4 [i_4])) ^ (arr_0 [i_5])))))));
                    }
                    arr_14 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) var_19);
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (_Bool)1)))))))) ^ (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_2] [i_2]) : (((/* implicit */int) (unsigned char)83))))) | ((+(arr_4 [i_2])))))));
                    var_26 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 8796091973639ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4900))) : (18446735277617577999ULL))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_13)))) + ((+(((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (var_4)));
}
