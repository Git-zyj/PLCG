/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205011
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
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_0 + 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])))))));
                arr_8 [15ULL] [i_0] [15ULL] = ((/* implicit */unsigned short) min((((/* implicit */int) (((+(((/* implicit */int) var_13)))) > (arr_0 [i_0] [i_1])))), (((int) var_1))));
                var_18 = ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((var_14) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0 + 2] [12LL]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)58311)), (((((/* implicit */_Bool) 9000996736626776145ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58311)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1])))))));
                    var_20 = ((/* implicit */_Bool) (unsigned char)206);
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) var_10);
                    arr_15 [i_0] [i_0] [(unsigned char)16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_11 [(signed char)1] [3LL] [i_0] [i_0 + 1]) : (arr_11 [9LL] [i_0] [i_0] [i_0 + 1]))))));
                }
            }
        } 
    } 
    var_22 &= ((/* implicit */short) (-(((unsigned int) max((3679563298433598529ULL), (((/* implicit */unsigned long long int) (short)-6986)))))));
}
