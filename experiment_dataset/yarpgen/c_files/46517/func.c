/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46517
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
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
    var_16 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) var_13);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_9)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))) : (4294967285U)));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_5))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)55630)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        arr_12 [5LL] [6U] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))));
    }
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)225)))))))) * ((+(((((/* implicit */int) (signed char)6)) / (((/* implicit */int) (_Bool)1)))))))))));
            arr_18 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)896)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_10))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_11)))))));
            var_21 = ((/* implicit */unsigned char) (-((+((+(var_0)))))));
            var_22 = (-((~(((/* implicit */int) var_7)))));
        }
        arr_19 [i_3] = ((/* implicit */unsigned short) var_5);
    }
}
