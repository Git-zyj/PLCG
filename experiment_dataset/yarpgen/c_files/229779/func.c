/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229779
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
    var_11 = ((/* implicit */long long int) var_5);
    var_12 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)62)))) : ((((-(((/* implicit */int) (short)0)))) & (((/* implicit */int) (short)25631)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [(unsigned short)10] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */int) (short)255)) / (((/* implicit */int) (short)-238)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) 140078517)) || (((/* implicit */_Bool) -1517132933)))))));
                var_13 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) max(((unsigned char)77), ((unsigned char)77)))) * (((((/* implicit */int) (short)1024)) / (((/* implicit */int) (short)-2)))))));
                arr_6 [i_1] = ((/* implicit */short) ((signed char) (unsigned char)179));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((_Bool) var_2));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((var_8) & (((((((/* implicit */int) (unsigned char)178)) * (((/* implicit */int) var_9)))) / (((/* implicit */int) ((unsigned short) var_2))))))))));
}
