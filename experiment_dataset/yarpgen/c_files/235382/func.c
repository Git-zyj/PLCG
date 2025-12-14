/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235382
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192))) : (((long long int) (-(((/* implicit */int) var_2)))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) - (1055531162664960ULL))))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 18445688542546886664ULL))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((arr_7 [i_2] [i_1] [i_2] [i_0]) >= (arr_7 [(signed char)10] [i_1] [i_0] [i_0])))));
                    arr_10 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */signed char) (-(arr_1 [i_0])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) 1739883948)) && (((/* implicit */_Bool) var_9)))))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))), ((~(var_14)))))));
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) var_13)), ((~(var_9)))));
    var_19 = ((/* implicit */int) var_1);
    var_20 = ((/* implicit */unsigned short) (+(((unsigned long long int) 17461669263061208532ULL))));
}
