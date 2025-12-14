/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229758
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
    var_12 = ((short) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]);
                    var_14 ^= min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0] [i_1]))))), ((-(arr_6 [i_1] [i_2]))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 12708118991291848706ULL)) && (((/* implicit */_Bool) 5738625082417702921ULL)))))) ? (((int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) : (18446744073709551613ULL)))) : ((+(arr_8 [i_0] [i_0]))))))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_3])) % (((/* implicit */int) arr_14 [i_3] [i_3]))))) ? ((+(1524603495))) : (((((/* implicit */int) arr_14 [i_3] [i_3])) << (((((/* implicit */int) arr_14 [i_3] [i_3])) - (24509))))));
        var_18 = ((/* implicit */short) 5ULL);
        var_19 *= arr_11 [i_3];
        var_20 = ((/* implicit */int) ((((/* implicit */int) var_0)) == ((-(((/* implicit */int) var_9))))));
    }
    var_21 = ((/* implicit */signed char) var_2);
}
