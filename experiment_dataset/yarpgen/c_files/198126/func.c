/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198126
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
    var_11 = ((/* implicit */unsigned char) var_2);
    var_12 = ((/* implicit */short) 3867743050U);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) ((_Bool) (short)-5227));
        var_14 = ((((int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)));
    }
    var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) (unsigned short)60495)) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : ((((_Bool)0) ? (var_6) : (var_10))))) : (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (min((((/* implicit */int) (_Bool)1)), (var_9))) : ((+(0))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 432802712)) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [13] [(_Bool)1]))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                arr_8 [i_1] [i_2] = ((/* implicit */short) var_1);
            }
        } 
    } 
}
