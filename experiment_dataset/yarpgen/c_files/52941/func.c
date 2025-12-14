/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52941
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
    var_12 &= ((/* implicit */unsigned long long int) ((unsigned char) max((((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */long long int) var_5)) : (var_7))), (584875067800220356LL))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) arr_0 [i_0]);
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (max((((((/* implicit */_Bool) 3556134527575590538ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-584875067800220357LL))), (((/* implicit */long long int) var_2))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))) * (((((/* implicit */_Bool) max((3556134527575590538ULL), (14934507933506412659ULL)))) ? (4616103121178375813LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 4; i_2 < 12; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (short i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1990298149051061567ULL)) ? (((/* implicit */int) (unsigned short)40801)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24711)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned char)28))))) > ((-(14890609546133961077ULL))))))));
                        var_17 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (signed char)-98)), (4294967295U))) > (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (var_11)))) : (((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = var_7;
}
