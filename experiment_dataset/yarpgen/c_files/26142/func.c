/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26142
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
    var_18 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)162));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31731))))))));
                    arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) 11504077489455108926ULL))))))) != (((/* implicit */int) var_5))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_7 [13]))));
        arr_10 [i_0] = ((/* implicit */long long int) (+(max((((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1)))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_15 [(unsigned short)8] = ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_8)))) - (((/* implicit */int) (unsigned char)162))))) + (((long long int) max((var_10), (((/* implicit */short) arr_6 [(signed char)2]))))));
        arr_16 [i_3] [i_3] = ((/* implicit */_Bool) ((long long int) (+((+(((/* implicit */int) var_8)))))));
        arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41931)) ? ((+(12397948584932727544ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (634443212)));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_3] [i_3])), (var_1)))) ? (min((arr_8 [i_3]), (((/* implicit */long long int) arr_0 [i_3] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)128), (((/* implicit */unsigned char) arr_0 [i_3] [i_3])))))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+(1985974482)));
        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_4])) ? (var_12) : (var_12)));
    }
    var_24 = ((/* implicit */_Bool) ((unsigned int) ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_15)))))))));
    var_25 = ((/* implicit */unsigned int) var_11);
}
