/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43030
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((max((10974811383312967147ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    arr_9 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) arr_3 [i_1]);
                    var_13 = ((((((/* implicit */_Bool) 8538619788372708566LL)) ? (((/* implicit */unsigned int) var_3)) : (1329548508U))) < ((+(min((arr_6 [i_2]), (((/* implicit */unsigned int) arr_3 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            {
                var_14 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [12ULL] [i_4] [i_4])) ? (((/* implicit */int) arr_5 [i_3 - 2])) : (((int) var_8))))), (max((max((var_9), (((/* implicit */long long int) arr_5 [4ULL])))), (((/* implicit */long long int) var_5))))));
                var_15 -= ((/* implicit */_Bool) var_11);
                arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3 - 1])) / (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */unsigned long long int) (+(arr_7 [i_4] [i_3])))) : (max((max((arr_1 [i_3 - 1]), (((/* implicit */unsigned long long int) arr_15 [8ULL] [8ULL])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (226346486U))))))));
            }
        } 
    } 
}
