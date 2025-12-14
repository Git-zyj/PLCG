/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23636
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
    var_14 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (9223372036854775793LL)))) ? (((long long int) var_10)) : (((((/* implicit */_Bool) -9223372036854775801LL)) ? (-9223372036854775800LL) : (-9223372036854775801LL))))) : (var_12));
    var_15 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (min((((/* implicit */long long int) var_6)), (((36011204832919552LL) >> (((((/* implicit */int) var_8)) - (106))))))))))));
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32749)) ? (var_9) : (var_12)))) ? (min((((/* implicit */long long int) -1)), (9223372036854775799LL))) : (((long long int) var_3)))), (max((((/* implicit */long long int) 1960310316)), (20LL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) ((unsigned int) (+(var_7))));
            var_18 += ((/* implicit */int) ((unsigned long long int) min((9223372036854775799LL), (-9223372036854775801LL))));
        }
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            for (unsigned char i_3 = 4; i_3 < 13; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) var_2))))), (var_7)))) ? (((/* implicit */unsigned long long int) max((9223372036854775791LL), (9223372036854775804LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [i_2] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0])))))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_8 [i_3]))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) (-(((/* implicit */int) var_13))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 3; i_6 < 15; i_6 += 3) 
            {
                for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_21 -= (+(((/* implicit */int) ((unsigned short) arr_18 [i_0 - 2]))));
                        var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0]))))), ((~(11739405771830175364ULL)))));
                    }
                } 
            } 
        } 
    }
}
