/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196664
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
    var_10 *= ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (min((((/* implicit */unsigned int) var_6)), (var_8))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)74)) - (((/* implicit */int) (signed char)90))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) var_6);
                    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-94))));
                    arr_9 [(_Bool)1] [i_1] [i_2] &= ((/* implicit */signed char) min((((((/* implicit */int) arr_5 [6U])) + (((/* implicit */int) arr_3 [i_1])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [(signed char)0])) : (((/* implicit */int) arr_8 [i_0] [14U] [i_2] [i_2]))))));
                    var_13 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) 737678931)))), (var_9)));
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        arr_22 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_6] [i_3] [i_3])) - (((/* implicit */int) arr_16 [i_5] [i_5] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_4] [i_4])) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5]))) >= (var_2))))))) : (((((/* implicit */int) (unsigned char)174)) % (((/* implicit */int) (signed char)87))))));
                        var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) var_5))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)115)) != (((/* implicit */int) arr_0 [i_6])))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_7 [i_3] [8U] [8U])))));
    }
}
