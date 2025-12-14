/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244857
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (8735064780528326533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3959))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) var_5))))) : (min((((/* implicit */long long int) var_2)), (((var_8) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (16579140536323371708ULL)))));
        arr_3 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)57))) && (((/* implicit */_Bool) (unsigned char)250))))), (((unsigned short) 736185013))));
        var_17 += ((/* implicit */unsigned char) (((-(6878532159815078094LL))) * (((/* implicit */long long int) ((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) arr_1 [8LL]))))))));
    }
    var_18 |= ((/* implicit */unsigned char) var_15);
    var_19 ^= ((/* implicit */long long int) var_4);
    var_20 ^= ((/* implicit */unsigned short) var_5);
}
