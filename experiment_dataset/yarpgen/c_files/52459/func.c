/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52459
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */int) ((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (-(528243946)));
                                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-64))));
                                var_21 = ((/* implicit */long long int) ((unsigned int) arr_11 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)53)) * (((/* implicit */int) (unsigned short)10))));
                    arr_13 [(_Bool)1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (signed char)-40))))));
                }
            } 
        } 
        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) || (((((/* implicit */int) (short)-15717)) == (32752)))));
    }
    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_24 += ((/* implicit */int) ((short) min((((/* implicit */int) var_11)), (arr_14 [18]))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -9006193786167722477LL)))) ? (((((/* implicit */_Bool) (short)4095)) ? (1) : (arr_16 [(short)17] [i_5 + 2]))) : ((+(((/* implicit */int) (short)16673))))));
                    arr_20 [i_5] = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (0U))))));
        var_27 ^= ((/* implicit */long long int) ((((var_5) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) -5049466189762918244LL)) || (((/* implicit */_Bool) 9223372036854775807LL))))) - (1)))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_28 = ((/* implicit */_Bool) max(((~(arr_16 [i_8] [i_8]))), ((~(arr_14 [i_8])))));
        arr_25 [i_8] = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_15 [i_8])))), (((((/* implicit */int) (signed char)20)) < (((/* implicit */int) ((688717045) >= (((/* implicit */int) (unsigned short)3840)))))))));
        var_29 = ((/* implicit */short) min((max((((((/* implicit */_Bool) 4723341025022694465LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16)))), (((int) (_Bool)1)))), (((/* implicit */int) var_15))));
        var_30 = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) arr_24 [i_8] [i_8])) : (((/* implicit */int) var_9)))))), (var_13)));
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-96))) - (7286448590678831967LL))) == (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
}
