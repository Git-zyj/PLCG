/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215625
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(var_12))) ? (arr_2 [i_0]) : (var_9)))) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) max(((unsigned short)20), (((/* implicit */unsigned short) ((0) < (((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
                    arr_9 [(_Bool)1] |= ((/* implicit */unsigned short) arr_8 [i_0 - 2]);
                }
            } 
        } 
        var_15 ^= -13;
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        var_16 = arr_8 [i_3];
                        var_17 += ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned long long int) (signed char)-99);
    var_19 = ((/* implicit */unsigned long long int) (+(var_11)));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)67)))))))) ? (((/* implicit */int) ((unsigned short) var_8))) : ((+(((/* implicit */int) var_2))))));
    var_21 &= ((/* implicit */long long int) var_8);
}
