/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193357
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                var_17 -= ((/* implicit */long long int) ((short) (+(((/* implicit */int) ((((/* implicit */_Bool) -1)) && (var_13)))))));
                var_18 = ((/* implicit */unsigned short) (-(((6013402006063215569ULL) + (6013402006063215579ULL)))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 134217472)) ? (12433342067646336021ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15123)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_1))))) << (((((((/* implicit */_Bool) -335136783)) ? (13685790867505064352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) - (13685790867505064352ULL)))));
}
