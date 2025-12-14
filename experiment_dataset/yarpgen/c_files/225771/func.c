/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225771
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_7)))))) : (var_11)))) || ((!((_Bool)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) (unsigned short)51669))) ^ (((((/* implicit */int) (unsigned short)60526)) | (((/* implicit */int) arr_0 [i_1])))))) > (((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_8 [i_2] [i_3]), (arr_8 [i_2] [i_3])))))))));
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_9 [i_2]), (arr_9 [i_2 - 4]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_19))))) || (((/* implicit */_Bool) var_5))));
    var_24 = ((/* implicit */unsigned short) 3354340366U);
}
