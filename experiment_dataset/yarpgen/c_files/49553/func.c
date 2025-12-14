/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49553
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
    var_12 = (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) var_4)), (var_5))))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_5))))) ? ((+(var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (var_0)))) : (((((/* implicit */_Bool) 2147483647)) ? (1247135893U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((var_8) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((var_1) - (1480474889585151042LL)))))) : (((unsigned int) var_1))))) : ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_3)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133)))))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (var_11))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((var_1) == (var_1)))))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (short)32242))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) min((var_3), (((/* implicit */short) var_4))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))) : (max((2052110946U), (3645346509U)))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(min((var_10), (max((var_6), (((/* implicit */unsigned int) var_3)))))))))));
        var_17 = ((unsigned int) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 3645346523U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : (3645346509U)))));
    }
}
