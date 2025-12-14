/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22848
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_9))));
                var_21 = ((/* implicit */long long int) min(((-(((/* implicit */int) var_18)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) * (arr_3 [i_0])))) && (arr_0 [i_0]))))));
                arr_5 [i_0] = ((/* implicit */_Bool) (~(arr_3 [(_Bool)1])));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_6);
    var_23 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) ((unsigned short) arr_7 [i_2 + 2]))))))));
        var_25 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42829))) ^ (arr_7 [i_2])))) ? ((~(arr_7 [i_2 + 1]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)90))))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)44609)) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) <= (((long long int) (signed char)-59))))) == (((/* implicit */int) ((signed char) min((arr_7 [i_2]), (arr_7 [(_Bool)1])))))));
    }
}
