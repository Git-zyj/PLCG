/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243518
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
    var_14 = ((/* implicit */unsigned short) min(((+((~(((/* implicit */int) var_3)))))), (((/* implicit */int) ((min((((/* implicit */unsigned int) var_3)), (var_4))) < (((((/* implicit */_Bool) var_10)) ? (var_9) : (var_9))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) arr_2 [16U] [16U])) - (((/* implicit */int) arr_2 [i_0] [i_0])))) > (((/* implicit */int) var_7))))) * ((-((+(((/* implicit */int) (unsigned short)7967)))))))))));
        var_16 = min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_2 [i_0] [i_0]))))) + ((+(894031474U))))));
        var_17 -= var_10;
        var_18 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)11297))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (var_5))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_1 [i_1])))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_13)) - (((/* implicit */int) arr_5 [i_1 + 2])))))))))));
        var_20 = ((/* implicit */unsigned int) min((max((((/* implicit */int) max((var_2), (arr_0 [(unsigned short)13])))), ((~(((/* implicit */int) var_13)))))), ((+((+(((/* implicit */int) var_8))))))));
        arr_6 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)12313)))), (((((/* implicit */_Bool) (unsigned short)52102)) ? (((/* implicit */int) (unsigned short)31225)) : (((/* implicit */int) var_3))))))) != (((unsigned int) var_0))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_1 + 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (var_9))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (var_0)));
                        arr_15 [i_4 + 1] [i_1] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7967)) ? (4294967282U) : (149298293U)));
                    }
                } 
            } 
        } 
        arr_16 [i_1 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_1 + 2] [(unsigned short)6] [i_1] [i_1]))))) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))) & (((unsigned int) (~(((/* implicit */int) arr_10 [14U] [i_1 + 2] [i_1])))))));
    }
    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
    {
        var_23 = ((4145668990U) & ((-(4145669009U))));
        var_24 = ((((arr_12 [i_5 + 1] [i_5] [i_5]) + (arr_1 [i_5 - 1]))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [19U] [i_5 - 1] [i_5 - 1]))) - (arr_12 [i_5 + 1] [i_5] [i_5 + 1]))));
    }
}
