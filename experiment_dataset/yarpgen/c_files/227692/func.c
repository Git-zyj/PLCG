/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227692
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((int) var_5))))) ? (((/* implicit */int) (short)(-32767 - 1))) : ((+(((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) arr_0 [i_0]))))))) ? (((((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) var_10)) - (90))))) | (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)43745)))))) : (((/* implicit */int) min((max((arr_1 [i_0 + 1]), (((/* implicit */unsigned char) arr_0 [i_0 + 1])))), (arr_1 [i_0 - 1])))));
        arr_3 [(unsigned short)2] = ((/* implicit */signed char) (unsigned char)1);
        arr_4 [(unsigned short)10] [i_0] = ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 2])) == (((/* implicit */int) arr_0 [i_0 + 2]))))), ((signed char)96)));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) 5920211387750493369ULL)) ? (-8896904852263789394LL) : (((/* implicit */long long int) 133169152U)))))));
    }
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) max((((/* implicit */unsigned short) max(((short)32767), (((/* implicit */short) (unsigned char)22))))), (var_5)))))))));
    var_14 = ((/* implicit */short) var_8);
}
