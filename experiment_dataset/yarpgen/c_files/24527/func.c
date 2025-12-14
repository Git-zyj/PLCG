/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24527
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
    var_20 = var_11;
    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-15345))));
    var_22 *= ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)127)), (var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (-739772924)))) : (arr_0 [i_0]))) << (((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0] [i_1]))))) + (5089202956325850660LL))));
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_3)))) ? (((long long int) ((short) 787803068))) : (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_19), ((signed char)-63)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0])))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (((/* implicit */int) var_18))))))) : (arr_3 [i_0] [i_1] [i_0])));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 8683999362905194883LL))));
                var_25 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0 - 1])) ? (((((/* implicit */_Bool) (unsigned short)25939)) ? (var_7) : (((/* implicit */long long int) 3703890152U)))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) > (9108351805795838497LL)));
            }
        } 
    } 
}
