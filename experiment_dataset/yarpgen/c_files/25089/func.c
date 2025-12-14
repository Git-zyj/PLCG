/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25089
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0)))))));
        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 4]))));
    }
    var_15 = ((/* implicit */short) min((min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (unsigned short)17888))));
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned short)29314))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((arr_3 [i_1 - 2]) ? (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_2))))) : ((~(var_1)))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)17104)) == (((/* implicit */int) var_10))))))))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) arr_3 [i_1]))) : (((/* implicit */int) ((unsigned char) var_2)))));
        }
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_2 [i_3])))));
        arr_12 [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_3]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */short) ((long long int) arr_5 [i_4] [i_4]));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (short i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_18 [i_6 + 1] [i_6] [i_6]))))));
                    var_19 = ((/* implicit */int) min((var_19), ((+(((((/* implicit */int) (short)-9670)) ^ (((/* implicit */int) arr_15 [i_6 + 1]))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_6))));
    }
}
