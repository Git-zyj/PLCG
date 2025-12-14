/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195677
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = min(((((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((((arr_1 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)7)) - (6))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)127))))))), (((arr_1 [i_0]) + (((/* implicit */long long int) ((((/* implicit */int) (short)511)) >> (((((/* implicit */int) (short)21399)) - (21377)))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (((516467274142531675LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-(min((((/* implicit */long long int) (signed char)102)), (arr_1 [i_0])))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (unsigned char)249)), (8306859715972360641ULL)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 2865560835U))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 255))))))) : ((+(255)))));
        arr_4 [i_0] = ((/* implicit */_Bool) (short)17430);
    }
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)104)), ((unsigned char)1)))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)52754)) >= (((/* implicit */int) var_3))))))))));
}
