/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1982
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)31))))) ^ (((((/* implicit */_Bool) arr_5 [5U] [10ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (arr_3 [i_1] [i_1]))))));
                arr_7 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_17));
                arr_8 [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((16938603508376478312ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1]))))))));
                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_6 [i_1] [i_0 + 1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
    var_22 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((var_0) >= (((/* implicit */long long int) var_2))))))) ^ (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) var_4)), (27ULL)))))));
        arr_14 [i_2] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) / (arr_12 [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_2] [i_2])))) == (576179277326712832LL))))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_17 [5ULL] = ((/* implicit */unsigned int) max(((signed char)-69), (((/* implicit */signed char) (_Bool)1))));
        arr_18 [i_3] = ((/* implicit */unsigned char) 576179277326712815LL);
        var_23 *= ((/* implicit */signed char) 576179277326712836LL);
    }
    var_24 = (((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_18)))) ? (((/* implicit */int) (signed char)14)) : (((((/* implicit */int) (unsigned short)44573)) % (((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned long long int) (-(var_4)))) : (8756740153324726160ULL))));
}
