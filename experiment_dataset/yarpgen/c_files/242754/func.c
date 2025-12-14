/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242754
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
    var_11 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((5044204413605133719LL) & (-5044204413605133720LL)))))))) * (max(((-(var_7))), (min((var_0), (var_0)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((((long long int) arr_1 [i_0] [i_0])) != (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-95)) == (((/* implicit */int) var_5))))) << (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_13 += ((/* implicit */unsigned short) (((((~(arr_1 [(unsigned char)9] [(unsigned char)9]))) % (min((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_1 [(_Bool)1] [(_Bool)1]))))) + (((/* implicit */int) ((5044204413605133720LL) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [(unsigned short)10] [(unsigned short)10]))))) == ((((_Bool)1) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
    }
    var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned char) (signed char)117)), (var_5))))) ? (((long long int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))));
}
