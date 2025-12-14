/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225550
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_0] [i_0])) ? (323357841U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0LL] [(signed char)1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)2])) ? (arr_0 [i_2]) : (((/* implicit */long long int) arr_3 [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [11] [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) (unsigned char)0)))))));
                            arr_10 [i_1] [i_3] [11LL] = ((/* implicit */unsigned long long int) -8637594600695077116LL);
                            var_14 = ((/* implicit */int) ((arr_4 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3971609456U)) ? (arr_6 [i_0] [11] [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) 1104153732)))))));
                            var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_3])) ? (323357841U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3 + 1] [i_3] [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) ((unsigned short) (unsigned char)210))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) < (var_10))))))) ? (((/* implicit */unsigned long long int) 323357815U)) : (var_3)));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (var_0)))), (max((var_9), (((/* implicit */unsigned long long int) 4179276323U)))))) - (24ULL)))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3971609480U)) ? (min((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((0ULL) >= (var_9)))), (var_7)))))));
}
