/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213762
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) var_8);
        var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) -739221580)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) var_1);
                    var_16 &= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)51108)) - (51083)))));
                    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) 12022237241385224652ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20013)))))) ? (((/* implicit */int) (unsigned short)41248)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5 - 3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_5 - 1])))))) : (((var_7) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (var_0)))));
                    var_19 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_10)), (max((var_6), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))))));
                }
            } 
        } 
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) ? (max((var_0), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3])))) : (((/* implicit */unsigned long long int) 1544248023))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_3])), (-1544248027)))) : (-1764771827142532399LL));
    }
    for (signed char i_6 = 2; i_6 < 14; i_6 += 1) 
    {
        arr_17 [i_6] = ((/* implicit */unsigned short) var_11);
        arr_18 [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_2))) - (((((/* implicit */_Bool) -3281024430935991036LL)) ? (((/* implicit */int) arr_3 [i_6])) : (((/* implicit */int) arr_0 [(short)16]))))))), (max((9782347973403269705ULL), (((/* implicit */unsigned long long int) (short)-8192))))));
        var_21 = ((/* implicit */int) ((short) ((min((-1544248024), (((/* implicit */int) var_7)))) != (max((((/* implicit */int) (signed char)28)), (1544248033))))));
    }
    var_22 = ((/* implicit */signed char) (_Bool)0);
}
