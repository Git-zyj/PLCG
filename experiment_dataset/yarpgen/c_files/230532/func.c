/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230532
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
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-26)))))) : ((~(var_1)))))) & (15248565162880699661ULL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 2])))) ? (arr_4 [i_0 - 1]) : (min((arr_4 [i_0 + 1]), (arr_4 [i_0 + 2]))))))));
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18202))) : (((((/* implicit */_Bool) arr_5 [1ULL] [i_1] [i_2])) ? (min((arr_2 [15LL]), (var_5))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_2] [i_1]))))))));
                    var_18 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_13))))) < (5339902816499876613ULL)))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16805)) ? (arr_6 [i_0 + 2] [i_1] [i_2] [i_1]) : (((/* implicit */int) (unsigned short)42726))))) ? (((/* implicit */int) ((arr_2 [(_Bool)1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) : (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) >> (((var_10) - (2547820398U)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11604113247885810389ULL)) || (((/* implicit */_Bool) arr_2 [i_0 + 2])))))) : (-6573545347011108962LL));
                    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) var_9)))))));
}
