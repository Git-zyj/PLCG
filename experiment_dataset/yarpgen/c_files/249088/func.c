/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249088
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_2 [i_0] [i_0])))) | (((/* implicit */int) ((signed char) 8182838651591324550ULL)))))) ? (((/* implicit */int) arr_1 [8LL])) : ((-(((((/* implicit */_Bool) 4021289609U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)1))))))));
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (signed char)127))));
        arr_4 [(signed char)11] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (signed char)102)), (13144311791381090492ULL))), (((/* implicit */unsigned long long int) ((long long int) max((arr_1 [9U]), (arr_1 [i_1])))))));
        arr_9 [5] [5] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_1])))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [2ULL]))))) ^ (max((-5975816062140787314LL), (8756652921286540946LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(arr_7 [i_1])))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)113))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_1])), (arr_5 [i_1] [11U])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)119)) ^ (((/* implicit */int) (signed char)-118))))) : (arr_7 [i_1]))))))));
    }
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)162)))), (((unsigned long long int) var_7)))))));
    var_13 &= ((/* implicit */unsigned char) max((((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_7)))) * (((var_4) + (((/* implicit */int) (unsigned char)187)))))), (min(((~(((/* implicit */int) (signed char)23)))), (((int) -7270341582169569408LL))))));
}
