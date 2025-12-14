/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210073
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-((+(7589158596696758990LL)))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_3] [i_2] [i_0] &= ((/* implicit */long long int) (unsigned short)65534);
                            var_10 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_7 [i_1] [i_2] [i_2] [i_3]))))));
                        }
                        var_11 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    }
                } 
            } 
        } 
        var_12 += ((/* implicit */unsigned char) ((long long int) var_5));
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))));
        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (short)(-32767 - 1))))))));
        arr_19 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6] [i_6] [i_6]))))))))));
        var_15 += ((/* implicit */long long int) min((((unsigned long long int) (short)(-32767 - 1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) && (((/* implicit */_Bool) arr_20 [i_6] [i_6])))))));
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_6] [i_6]))))) : ((~(-7589158596696758990LL)))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3901546320146643516ULL)) ? (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7]))))) : (min(((-2147483647 - 1)), (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)122))))))) : (((((/* implicit */_Bool) var_3)) ? (8191U) : (arr_24 [i_7])))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_24 [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7]))))) : ((-(((/* implicit */int) var_9))))));
        arr_25 [i_7] [i_7] &= ((/* implicit */_Bool) ((short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))), ((+(((/* implicit */int) (short)(-32767 - 1))))))));
    }
    var_18 = ((/* implicit */long long int) (-(max((((((/* implicit */int) var_3)) / (var_6))), (var_6)))));
    var_19 = ((/* implicit */unsigned short) (+(((18446744073709551615ULL) / (((/* implicit */unsigned long long int) var_2))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 920674249U)) ? (((/* implicit */int) (_Bool)1)) : (1099194271)))))) ? (((/* implicit */long long int) var_6)) : ((~((~(-6383511645905764213LL)))))))));
}
