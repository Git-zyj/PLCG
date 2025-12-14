/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19503
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((11168780437340775505ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((7277963636368776110ULL) > (((/* implicit */unsigned long long int) arr_3 [(unsigned char)14] [i_1])))) && (((/* implicit */_Bool) 11105303117256429378ULL)))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2] [i_0]))))), (((((/* implicit */_Bool) (short)-2)) ? (11168780437340775505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10107)))))))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((max((((/* implicit */short) ((((/* implicit */int) (short)16705)) > (((/* implicit */int) (short)10116))))), ((short)10116))), (((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (1037595888554605863ULL) : (12181923823007805328ULL))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))))))))));
                    var_17 += ((/* implicit */unsigned short) (-(((8149706704480925232ULL) + (7277963636368776111ULL)))));
                }
            } 
        } 
    } 
    var_18 = (!(((/* implicit */_Bool) var_8)));
    var_19 = ((/* implicit */short) ((unsigned long long int) var_14));
    var_20 = ((/* implicit */long long int) var_5);
}
