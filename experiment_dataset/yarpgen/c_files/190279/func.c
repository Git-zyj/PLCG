/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190279
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)7032)) <= (((/* implicit */int) (_Bool)1))))) | ((-(((/* implicit */int) (short)27002))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (((((/* implicit */_Bool) -521416620)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-14677))))) : (max((((/* implicit */unsigned long long int) 0U)), (11387114935365790598ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [4U] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((4294967295U) >> (((4294967295U) - (4294967271U))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-58)), ((short)-11597))))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32758)))))) ? (min((((/* implicit */unsigned int) (short)-6702)), (3101757803U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)56708)) : (((/* implicit */int) (unsigned char)15)))))))));
                arr_5 [16] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) (-(max((((/* implicit */int) (unsigned short)7853)), (1695093377)))))), ((+(((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6702))) : (4294967295U)))))));
                arr_6 [i_0] [i_1] [6] = ((/* implicit */short) (signed char)0);
            }
        } 
    } 
    var_16 = (short)14677;
}
