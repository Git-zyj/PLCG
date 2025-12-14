/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29865
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
    var_13 ^= ((/* implicit */unsigned int) var_12);
    var_14 = ((((/* implicit */_Bool) (((-(((/* implicit */int) var_8)))) >> ((((+(((/* implicit */int) var_10)))) + (89)))))) || (var_8));
    var_15 = ((/* implicit */short) 436323601);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (-2109713547) : (((/* implicit */int) (unsigned short)17586))))) || (((/* implicit */_Bool) ((max((((/* implicit */long long int) (signed char)94)), (-3315691173126941729LL))) - (3315691173126941733LL))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_2] = min(((+(((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) || (((/* implicit */_Bool) arr_4 [i_0]))))));
                        var_17 = ((/* implicit */unsigned int) var_10);
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) || (var_6))) || (((((/* implicit */_Bool) 6258754671473802417ULL)) || (((/* implicit */_Bool) 14LL)))))))));
                        var_19 -= ((/* implicit */unsigned int) var_10);
                    }
                } 
            } 
        } 
    }
}
