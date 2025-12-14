/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248819
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
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-118)), (-22924608)));
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)74))) : (5429201454135930742LL)));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((signed char) ((long long int) (unsigned char)126)));
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)95))))))) ? (min(((-(3611229318530782975ULL))), (((/* implicit */unsigned long long int) ((unsigned short) 11484024073749680966ULL))))) : (max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) < (var_9))))))));
    var_20 = var_11;
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23751)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23750))) : (3160030670U)))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_8)) & (min((((/* implicit */unsigned int) (unsigned short)12205)), (3160030693U)))))) : (8195224255698994420ULL));
}
