/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52225
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
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 691007880U)) ? (var_7) : (((/* implicit */long long int) 3060050979U))))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)33))) : (3674219756355505118LL)))) : ((-(((((/* implicit */_Bool) 18374686479671623680ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (448625301U)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 += ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) 9223372036854775680LL)))), (((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0]))))));
                    arr_10 [(unsigned short)5] = ((((/* implicit */_Bool) 2424722112259766241ULL)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 358778340453938294LL)))) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) arr_2 [i_2]))))) : (4255518111U));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53337))) ^ (((((/* implicit */_Bool) 536870880)) ? (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34070))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16022021961449785373ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)511))))))))))));
                }
            } 
        } 
    } 
}
