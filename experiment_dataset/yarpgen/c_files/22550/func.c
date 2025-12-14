/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22550
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (short)62)))))) ? (min((min((((/* implicit */long long int) var_2)), (var_13))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_15 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_11)))))));
    var_16 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_0)))))) / (min((((/* implicit */unsigned int) (short)62)), (159455958U)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-45)))), (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_13)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (short)-49))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (14181424314101937704ULL));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((var_3) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)0))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (arr_3 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1])))));
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_7 [i_1] [(unsigned short)14])))));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2 - 2] [i_2] [i_4] = ((/* implicit */_Bool) (~(-6756300661700658703LL)));
                        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_10))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1]))))))));
                    }
                } 
            } 
        } 
    }
}
