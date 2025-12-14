/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22243
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (((((/* implicit */_Bool) (unsigned short)19532)) ? (var_7) : (((/* implicit */unsigned int) 2147483647)))))) : (((/* implicit */unsigned int) min((((/* implicit */int) max((var_4), ((unsigned short)46003)))), ((-(((/* implicit */int) (unsigned short)19532)))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(min((var_0), (var_11)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_0 [i_0]), (arr_0 [i_0])))), (max((var_7), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (signed char)45)), (arr_1 [i_0])))))) : ((+(arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */int) var_3)), (var_2)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_8))))))))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(unsigned short)3])) ^ (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_5 [i_1]) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19533)))))) ? (2147483644) : (((/* implicit */int) min((((/* implicit */unsigned short) ((short) 987848916U))), (arr_4 [i_1]))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) -289465653))) ? (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_9)), (var_11))), (((/* implicit */unsigned int) (-(2147483647))))))) : (max((min((((/* implicit */long long int) arr_5 [(unsigned short)4])), (var_10))), (((/* implicit */long long int) var_8))))));
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((int) var_9)) < (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_9)) : (536870912)))))), (((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) -2147483624))))))));
    }
}
