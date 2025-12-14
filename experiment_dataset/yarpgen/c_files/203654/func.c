/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203654
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
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_9))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) ((signed char) (short)-28169))) : (((/* implicit */int) ((signed char) max((((/* implicit */long long int) arr_0 [i_0 - 1])), (arr_2 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])), (var_3)))), (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_16 = ((short) (short)12795);
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28169)) ? (((/* implicit */int) arr_6 [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 - 1]))));
                        var_18 = ((/* implicit */unsigned short) arr_10 [i_0] [i_2] [i_2] [(_Bool)1]);
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15888134441226155656ULL)) ? (arr_7 [i_0] [17ULL]) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) ? (arr_7 [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0 - 1])));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) (short)28138)), (arr_10 [i_2] [i_2] [i_2] [i_2])))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0])) >> (((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0])), (var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))))));
                        arr_13 [i_2] [i_4] [i_2] [5U] [i_2] = 2486301690U;
                    }
                    for (short i_5 = 1; i_5 < 24; i_5 += 1) 
                    {
                        arr_17 [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */_Bool) ((signed char) arr_1 [i_5] [(short)1]));
                        var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (short)28168)))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) (short)10465);
                        var_24 = ((((min((((/* implicit */int) (short)(-32767 - 1))), (arr_16 [i_2] [i_2] [i_2] [i_2]))) ^ (-1082763367))) << (((((/* implicit */int) ((_Bool) 16418223146311127029ULL))) - (1))));
                        var_25 = ((/* implicit */signed char) arr_4 [i_0 - 1] [i_0 - 1] [14]);
                    }
                    arr_21 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (16949802724644328136ULL)))) ? (((/* implicit */int) arr_6 [i_2])) : ((-(((/* implicit */int) arr_0 [8ULL]))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)13853))))), ((+(((/* implicit */int) (short)(-32767 - 1)))))));
        var_27 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_7] [i_7] [i_8])) ^ (((/* implicit */int) arr_20 [(short)1] [i_7] [i_8]))));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)31427))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24053)))))));
            var_30 += ((/* implicit */unsigned long long int) arr_18 [2U] [i_7] [6U] [i_7 - 1] [2U]);
        }
        arr_26 [i_7] = ((/* implicit */short) (-(((/* implicit */int) (short)10465))));
    }
}
