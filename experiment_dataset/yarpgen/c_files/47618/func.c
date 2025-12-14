/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47618
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [3LL] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(short)13])) ? (((((/* implicit */_Bool) -7761142196781060975LL)) ? (-7761142196781060979LL) : (-7761142196781060958LL))) : (7761142196781060975LL)));
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7761142196781060964LL)) ? (((/* implicit */unsigned long long int) -7761142196781060976LL)) : (5171016049508196251ULL)))) ? (((/* implicit */unsigned int) -538607136)) : (arr_1 [i_0] [i_0])));
    }
    for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        arr_6 [(unsigned short)3] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))), (((((/* implicit */_Bool) 4133435677806766987ULL)) ? (13277048505466559746ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214)))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)(-32767 - 1)))))), (max((arr_4 [i_1] [(_Bool)1]), (((/* implicit */unsigned int) arr_3 [i_1]))))))));
            arr_9 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)0)))) - (((/* implicit */int) arr_3 [i_1]))))), ((((_Bool)1) ? (13275728024201355365ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (-7761142196781060976LL))))))));
        }
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(arr_1 [i_1] [i_1])))))) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 2])) : ((~(((/* implicit */int) arr_3 [i_1]))))));
    }
    var_16 = ((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
            {
                {
                    var_17 -= ((/* implicit */short) (((~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_0 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 3] [i_3]))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 2] [i_5 + 1])))));
                    arr_17 [i_4] [i_5] [10] [i_5 - 3] = ((/* implicit */signed char) max((((/* implicit */short) (_Bool)1)), (((short) -7761142196781060945LL))));
                    var_18 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32762))) ^ (arr_1 [i_5 - 1] [i_4 + 2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [(signed char)12])))));
                    arr_18 [i_5] [i_4 + 1] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_14 [i_5 - 2])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) 7761142196781060945LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
}
