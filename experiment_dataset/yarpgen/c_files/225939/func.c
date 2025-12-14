/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225939
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
    var_15 &= ((/* implicit */long long int) var_2);
    var_16 = var_7;
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        var_17 += ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_7)) ? (2675744394952521713LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) != (((/* implicit */long long int) ((arr_0 [(signed char)8]) << (((((/* implicit */int) var_14)) - (77))))))));
        var_18 = ((/* implicit */signed char) (-(2675744394952521713LL)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) arr_3 [(_Bool)1]);
        var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (12708797111362811930ULL) : ((~(5737946962346739686ULL)))))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1293334086062464400LL)))))));
                var_22 += ((/* implicit */unsigned short) (!(var_3)));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_5] [(signed char)12] [i_5] &= ((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_3 + 1])))) + (((/* implicit */int) ((arr_9 [i_2] [i_5 + 1] [i_5 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                            arr_20 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */short) (~(min((((unsigned int) var_8)), (max((arr_1 [i_2]), (arr_0 [i_3])))))));
                            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_3]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
