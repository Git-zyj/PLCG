/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45512
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
    var_16 = ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) ((var_13) == (((/* implicit */int) (unsigned short)0)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(((/* implicit */int) (signed char)-84))))))) == (4200515283U)));
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((unsigned short) arr_0 [i_0]);
                    arr_8 [i_1] [(unsigned short)5] [20] [(_Bool)1] = ((/* implicit */int) ((long long int) min(((+(((/* implicit */int) (signed char)103)))), (((((/* implicit */int) arr_7 [i_0] [i_0])) ^ (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) var_15);
    var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)19599))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) ^ (((/* implicit */int) var_5))))), (max((var_11), (((/* implicit */long long int) var_2))))))));
    var_21 = ((/* implicit */unsigned long long int) (signed char)107);
}
