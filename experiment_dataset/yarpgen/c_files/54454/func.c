/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54454
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
    var_14 ^= ((/* implicit */long long int) var_1);
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-114))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_16 = ((long long int) var_2);
                            arr_11 [11LL] [i_1] [11LL] [i_1] [i_1] [13LL] = ((/* implicit */signed char) ((-3407713633064749841LL) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
                        }
                        var_17 = ((max((((/* implicit */long long int) (signed char)121)), (4720740965281243776LL))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (4343880296879990204LL) : (1152780767118491648LL)))) ? (2910376530076739066LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */signed char) max((max(((-(((/* implicit */int) arr_10 [i_0] [i_0] [4LL] [i_0] [(signed char)11])))), (((/* implicit */int) ((-3407713633064749841LL) > (-6721514671406669774LL)))))), (((((/* implicit */int) arr_1 [i_0])) >> ((((~(-8377949855676846234LL))) - (8377949855676846232LL)))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), ((signed char)112))))) ^ (max((var_4), (1008806316530991104LL))))))));
        var_20 += ((/* implicit */signed char) max((((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [(signed char)4] [i_0] [(signed char)13])) || (((/* implicit */_Bool) -6721514671406669774LL))))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (10897828849784312LL) : (((1631044024948390638LL) & (var_12)))))));
        var_21 = ((/* implicit */long long int) var_7);
    }
    var_22 = (((-(9223372036854775800LL))) & (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (signed char)48)), (-3407713633064749847LL))) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
}
