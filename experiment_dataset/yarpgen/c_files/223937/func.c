/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223937
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_1 + 1]);
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
    var_11 = ((/* implicit */short) min((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) 2773489899U))))))))));
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_12 -= ((/* implicit */signed char) max((((/* implicit */long long int) arr_4 [i_2] [i_2] [(_Bool)1])), (((long long int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (arr_7 [i_2]))))));
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */int) ((signed char) (unsigned char)89))) : (((/* implicit */int) ((unsigned char) (+(12119308119987518815ULL)))))));
    }
}
