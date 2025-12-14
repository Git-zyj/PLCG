/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22264
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)60)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = (signed char)-118;
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) & ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-115)) || (((/* implicit */_Bool) (signed char)-116))))))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_10 [i_3] [i_2] [(signed char)0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-2)) || (((/* implicit */_Bool) (signed char)-66))))) + (((/* implicit */int) (signed char)31))));
                        arr_11 [(signed char)4] [(signed char)4] [(signed char)9] [(signed char)4] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)90)))) - (((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)1)))))) + (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (signed char)-126))))));
                        arr_12 [i_3] [i_2] [i_0] [i_0] = (signed char)-66;
                        arr_13 [i_2] [(signed char)4] [i_1] [i_3] [(signed char)7] [i_1] = (signed char)-60;
                    }
                } 
            } 
        } 
    }
}
