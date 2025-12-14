/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20185
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) max((var_9), (var_2))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 144784738U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)82)))))))) : (((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) == (min((((/* implicit */long long int) (signed char)-74)), (376613780299277816LL)))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-((-(((/* implicit */int) ((unsigned short) var_9))))))))));
                        arr_9 [i_3 - 1] [i_3 - 1] [i_0] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))))) : ((~(((((/* implicit */_Bool) (unsigned short)2362)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)82))))))));
                    }
                    arr_10 [i_0] [i_1] [i_0] [10U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-88)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))) ? ((-((-(((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), ((unsigned short)65535)))) ? (((/* implicit */int) min(((unsigned short)584), (((/* implicit */unsigned short) (short)12288))))) : (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        arr_11 [i_0] = (((_Bool)1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39550))));
    }
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4032)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)584))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+(max((((/* implicit */long long int) var_5)), (var_10)))))));
}
