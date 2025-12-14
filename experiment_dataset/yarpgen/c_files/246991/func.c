/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246991
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_0 [i_0] [i_0 - 1])), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_0])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (signed char)121))))) : (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) var_14)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
        arr_2 [(short)6] = ((/* implicit */unsigned char) min(((short)-520), (((/* implicit */short) (unsigned char)141))));
    }
    for (short i_1 = 2; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) min(((unsigned char)192), ((unsigned char)145)))) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)140)), ((short)520))))));
        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-520)) ? (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned short)21369)) : (((/* implicit */int) (short)-531)))) : (((/* implicit */int) max(((short)22095), (((/* implicit */short) (unsigned char)232))))))), (((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)8831))), (((/* implicit */unsigned short) (unsigned char)237)))))));
    }
    for (short i_2 = 2; i_2 < 20; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) max(((unsigned char)255), (min(((unsigned char)255), ((unsigned char)255)))));
                        var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)34575))))) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49795))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)234)), ((unsigned short)6))))));
                    }
                } 
            } 
        } 
        var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41527)) ? (((/* implicit */int) max(((unsigned char)67), ((unsigned char)188)))) : (((/* implicit */int) (unsigned char)2))));
    }
    var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (min((min((var_6), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) var_16))));
}
