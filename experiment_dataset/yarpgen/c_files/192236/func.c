/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192236
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
    var_16 = ((/* implicit */unsigned int) (-((((-(((/* implicit */int) (signed char)-61)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)103)) <= (((/* implicit */int) (signed char)50)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 ^= (+(((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) / (4294967295U))));
                var_18 = ((/* implicit */signed char) ((unsigned long long int) (signed char)81));
                arr_8 [i_1] [i_1] &= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-29121)), ((unsigned short)21573)))), ((((_Bool)0) ? (2097136U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))))))), (((/* implicit */unsigned int) (signed char)-104))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)117)))))) != (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (((unsigned short) 2577516510U)))))));
    var_20 = ((/* implicit */long long int) var_10);
    var_21 = ((/* implicit */unsigned int) (short)1);
}
