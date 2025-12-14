/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3296
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [(unsigned char)3]);
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [(unsigned char)8])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) (unsigned char)223)))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) (unsigned char)209)))) ? (((((/* implicit */_Bool) (unsigned char)32)) ? (6126308384353505862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19541))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-14030)) | (((/* implicit */int) (unsigned char)209)))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)0] [i_3])))))) <= (arr_3 [i_2] [i_3]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)173))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || ((_Bool)0)))) : (((/* implicit */int) ((unsigned char) var_10)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : ((-(arr_11 [i_2])))))));
                arr_13 [i_2] [i_3] = ((/* implicit */signed char) ((unsigned char) ((unsigned int) (~(((/* implicit */int) var_12))))));
            }
        } 
    } 
}
