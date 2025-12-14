/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49120
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
    var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1473012645)) ? (((((/* implicit */_Bool) -1473012646)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_2)) ? (1428015296) : (((/* implicit */int) (unsigned short)3265)))))) : (((/* implicit */int) ((((var_13) >> (((-1473012645) + (1473012654))))) < ((~(((/* implicit */int) (unsigned short)57458)))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (max((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)8938)) : (((/* implicit */int) (signed char)94)))), ((-(((/* implicit */int) var_12))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 += ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)8930)), (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_3))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)9] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) 13174658104782217827ULL))) << (((((-1473012645) | (((/* implicit */int) var_5)))) + (1472995851)))));
                        var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16727730592365432234ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-26103)) : (((/* implicit */int) (unsigned short)65521))))) ? (((145405582U) << (((var_2) - (865018054565256551LL))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (var_6))))))));
                    }
                } 
            } 
        } 
    }
}
