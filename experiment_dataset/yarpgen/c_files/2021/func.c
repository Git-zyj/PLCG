/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2021
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
    var_11 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) 3249220295265901568LL)) ? (-4680582210689597400LL) : (3249220295265901570LL)))) | (max((((/* implicit */long long int) max((var_3), (((/* implicit */signed char) var_4))))), (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) var_2))))))));
    var_12 = var_8;
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_6)))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((arr_3 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [(_Bool)1])))))), (((arr_3 [(_Bool)0]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((int) arr_13 [i_0] [6LL])))) : (((/* implicit */int) ((short) var_7)))));
                                var_14 = ((/* implicit */long long int) arr_2 [i_1]);
                                arr_17 [6] [i_1] [i_2] [i_1] [i_4] [2LL] [i_2] = ((/* implicit */_Bool) max((8027057943195180632LL), (((/* implicit */long long int) ((short) arr_3 [i_0 + 1])))));
                                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 8192749945139941112ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) : (16361892505884482766ULL)));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_2]) ? (5222655386211739625LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_3 [i_0 - 1])) & (((/* implicit */int) arr_3 [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1])) == (((/* implicit */int) arr_3 [i_0 + 1])))))));
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) ((arr_2 [i_5]) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) var_5)))))) : ((+(((int) arr_20 [i_5]))))));
        var_18 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
        arr_23 [i_5] [5LL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5]))) <= (-8027057943195180637LL))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    arr_28 [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)38204)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (3471468110137599482LL))))));
                    arr_29 [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_5]))));
                    arr_30 [(unsigned short)11] [i_7] [i_7] [i_5] = ((/* implicit */int) (+(min((((/* implicit */long long int) min((arr_4 [15LL] [(unsigned short)0] [(_Bool)1]), ((signed char)-10)))), (var_10)))));
                }
            } 
        } 
    }
    var_19 -= ((/* implicit */unsigned long long int) (signed char)-71);
}
