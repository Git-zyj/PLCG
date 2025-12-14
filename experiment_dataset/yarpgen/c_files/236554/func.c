/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236554
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_9)))))))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)0), ((signed char)-1))))) : ((+(var_5)))))));
    var_14 += ((/* implicit */unsigned short) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), (var_8)))) % (((/* implicit */int) max((((/* implicit */short) (unsigned char)44)), ((short)27788))))))));
    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(var_12)))) ? (((long long int) var_2)) : (((/* implicit */long long int) (+(var_7)))))), (((/* implicit */long long int) var_4))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) max((min(((unsigned short)512), (((/* implicit */unsigned short) (short)-27789)))), (((/* implicit */unsigned short) min((var_4), (var_8))))))) * (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > ((+(arr_1 [i_0]))))))));
        var_17 |= min((((/* implicit */unsigned int) var_2)), (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))));
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-9)) & (((/* implicit */int) var_9)))) << ((((~((~(((/* implicit */int) arr_3 [i_0] [i_0])))))) - (47)))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_19 -= ((/* implicit */unsigned int) arr_0 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_1])), ((unsigned short)47223)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [(unsigned char)7] [i_1])))) : (min((5313167053499351861LL), (((/* implicit */long long int) (short)-27783)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1])))))));
    }
}
