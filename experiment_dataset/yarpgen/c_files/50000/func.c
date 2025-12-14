/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50000
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-67)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [(_Bool)1] = var_5;
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 4; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */int) (_Bool)1);
                        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(arr_5 [i_2])))))) ? ((+(var_1))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)67)))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = var_13;
    }
    var_22 = ((/* implicit */_Bool) -1398929095);
}
