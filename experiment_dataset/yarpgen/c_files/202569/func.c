/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202569
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
    var_13 = ((/* implicit */unsigned short) var_11);
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) (-(var_7))))), (min((((/* implicit */int) ((unsigned short) var_3))), ((+(((/* implicit */int) (unsigned char)0))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32765))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 1] [(unsigned char)5])))))) : ((-(arr_1 [i_1 + 1] [i_1 + 1])))));
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (unsigned short)65535))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((19ULL), (((/* implicit */unsigned long long int) arr_4 [2] [i_1] [2] [(_Bool)1])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)8))))))))));
                    var_15 = ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
