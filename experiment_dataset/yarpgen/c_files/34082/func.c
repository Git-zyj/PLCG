/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34082
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) == (min((var_11), (((/* implicit */unsigned long long int) var_8))))))), (((long long int) ((((/* implicit */_Bool) -153523771524509343LL)) ? (-6206799609089472295LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30395))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_0] [(unsigned char)1]))) == (((/* implicit */long long int) 335986283)))))));
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_1]), (arr_4 [i_1])))) || ((!(((/* implicit */_Bool) (unsigned short)53582))))));
                arr_6 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
                var_18 = ((/* implicit */unsigned char) (~(arr_1 [i_0 - 2] [i_0])));
            }
        } 
    } 
}
