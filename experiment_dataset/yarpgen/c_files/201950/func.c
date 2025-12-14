/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201950
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
    var_19 = ((/* implicit */unsigned int) (unsigned short)18315);
    var_20 = ((/* implicit */long long int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (_Bool)0))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) (-(var_9)))) : (((18446744073709551611ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-23381)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)239)))), (((/* implicit */int) ((14758440618053614276ULL) > (((/* implicit */unsigned long long int) 950847407)))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-598))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_19 [i_3] [i_3] = ((/* implicit */short) (unsigned char)8);
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65525)) : (2147483647)));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)133)) >> (((1019845296) - (1019845271))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (short)-14489)) / (-2147483628))))));
        var_26 = ((/* implicit */int) (signed char)79);
    }
}
