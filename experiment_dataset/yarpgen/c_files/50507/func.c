/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50507
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned short)17] [i_0 - 1] = ((/* implicit */signed char) ((unsigned int) (unsigned char)189));
                arr_6 [i_0] [(signed char)16] [15] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 0U))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)44680)), (-2414460960972035168LL)))) : (17545271307309728077ULL)));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-114)) <= (-973461600)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 8U)) ? (767169124U) : (((/* implicit */unsigned int) -772125752)))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (unsigned char)211)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) (short)-4436))), (var_15)))) : (((0U) << (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */_Bool) ((unsigned short) var_12));
    var_20 = ((/* implicit */short) 2310409911896418478LL);
}
