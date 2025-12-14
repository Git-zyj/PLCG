/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26075
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
    var_17 = ((/* implicit */long long int) (signed char)99);
    var_18 += var_2;
    var_19 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_11)))));
                var_21 = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned short)62420)) | (((/* implicit */int) var_14))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -1921253103)) : (4716108844403351796ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1872841713)), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17677))) : (((unsigned int) var_0)))))));
                /* LoopSeq 2 */
                for (short i_4 = 3; i_4 < 17; i_4 += 3) 
                {
                    var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_4 + 2]))) : (3620228105U)))));
                    var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4)) && (((/* implicit */_Bool) var_7))));
                    var_25 = ((/* implicit */unsigned short) arr_6 [i_2] [i_2]);
                    var_26 -= ((/* implicit */unsigned int) (_Bool)1);
                    var_27 ^= 0U;
                }
                for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    arr_17 [i_2] [i_3] [6LL] = 9007199254740991LL;
                    arr_18 [i_2] = var_5;
                }
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */int) arr_16 [i_3] [i_2] [(signed char)13])) : (var_12)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((signed char) var_9))))))));
            }
        } 
    } 
}
