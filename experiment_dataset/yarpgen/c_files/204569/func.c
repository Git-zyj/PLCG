/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204569
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(var_4)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) (((~(var_15))) & (var_15)));
                        var_17 = ((/* implicit */short) min((var_17), (var_6)));
                        arr_13 [i_0] [(short)18] [i_2] [i_1] [i_1 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 2; i_4 < 18; i_4 += 1) 
    {
        var_18 -= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_1)))))) / ((~(var_15))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)98))))) > ((-(var_8)))))))));
        var_19 = ((/* implicit */long long int) (-((~((+(var_9)))))));
        arr_16 [i_4] = ((/* implicit */long long int) (~((~((~(var_10)))))));
    }
    var_20 = ((/* implicit */unsigned char) (+((~((+(((/* implicit */int) var_14))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */int) var_14))))) == ((+(3893441482854077196ULL)))))) & (((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) && (((/* implicit */_Bool) (+(var_4)))))))));
    var_22 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) + ((-(((/* implicit */int) (unsigned short)65522)))))))));
}
