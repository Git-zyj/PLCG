/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247904
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
    var_16 = var_10;
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 7169576733580754794LL))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-2346781022624285622LL))) : (-1270002947256064646LL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2 + 2])) ? (arr_2 [i_1] [i_1]) : (-1515606367421036821LL)))) ? (((arr_2 [i_0] [i_2 + 2]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1 - 1] [i_0]) > (arr_2 [(unsigned char)16] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [i_1] [i_2] [i_1])) << (((var_3) + (2977057474999198924LL)))))) | (((long long int) var_4))));
                                arr_16 [i_0] [i_0] [i_3] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) (unsigned char)0))))))) ? (-6019509023440746979LL) : (max((((((/* implicit */_Bool) -221593564899238681LL)) ? (-221593564899238681LL) : (var_8))), (((/* implicit */long long int) (unsigned char)63)))));
                                arr_17 [i_0] [i_1 - 2] [3LL] [i_2] [(unsigned char)15] = ((arr_7 [i_0] [i_0]) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 2] [i_2 - 4]))))));
                                arr_18 [i_0] [i_0] [21LL] [i_3] [i_4] [i_2] = ((/* implicit */unsigned char) 7169576733580754794LL);
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) 9223372036854775801LL);
                }
            } 
        } 
    } 
}
