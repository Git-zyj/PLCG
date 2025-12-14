/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195608
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
    var_15 += ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned int) var_14)), (var_10))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) (signed char)-116))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_2), (2147483648U))) * (((227511820U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57835)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (var_5) : (((/* implicit */long long int) var_10)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = (signed char)112;
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)112)) && (((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)65509)))), (((/* implicit */int) max((arr_6 [i_0] [i_1] [(short)12] [i_2 - 2]), (arr_6 [i_1] [i_1] [(short)16] [i_1])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_2))));
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [i_3 - 1])), (((((/* implicit */int) (unsigned short)4533)) % (((/* implicit */int) arr_5 [i_3 + 1]))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_16 [i_3] [i_3] [(short)2] [i_3] = ((/* implicit */int) arr_6 [i_3] [i_4] [(_Bool)1] [i_5]);
                    arr_17 [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) arr_13 [i_3] [i_4] [i_5]);
                    var_20 |= ((/* implicit */short) max((max((((/* implicit */int) max((arr_0 [(_Bool)1] [(_Bool)1]), ((signed char)118)))), (min((((/* implicit */int) arr_14 [i_3] [(short)6] [(short)6])), (-1591813457))))), (((/* implicit */int) arr_5 [i_3]))));
                }
            } 
        } 
    }
}
