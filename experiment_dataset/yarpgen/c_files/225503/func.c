/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225503
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)12)), ((short)29042)))), (min((((/* implicit */unsigned int) (unsigned char)186)), (2459166516U))))));
                            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (13938027904537999795ULL)))), (((signed char) 1835800780U))))) * (((/* implicit */int) (!(((/* implicit */_Bool) -7691094832043320632LL)))))));
                            var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2 + 2] [i_1]))));
                            arr_14 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_3] [i_0])) ? (((/* implicit */int) arr_4 [i_3] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))) * (((/* implicit */int) var_5))))), ((-(arr_11 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) 18446744073709551592ULL)) ? (-465540594) : (((/* implicit */int) (short)32767)))))) != (((/* implicit */int) ((short) ((arr_5 [(short)6] [(short)6]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned int) (+((-((-(((/* implicit */int) arr_18 [i_4] [i_5] [i_6]))))))));
                    arr_24 [i_6] [i_6] = var_5;
                    arr_25 [6U] [10ULL] [6U] [6U] |= ((/* implicit */signed char) ((short) var_3));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [16U])) : (((/* implicit */int) arr_9 [2U] [18] [i_7] [2U])))), (((int) var_10))));
        var_22 = ((/* implicit */short) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) arr_7 [(signed char)4])))));
    }
    for (signed char i_8 = 1; i_8 < 17; i_8 += 1) 
    {
        arr_31 [i_8] [i_8] = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned short)13365)))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_8] [i_8])) + (((/* implicit */int) ((_Bool) arr_17 [i_8])))));
    }
}
