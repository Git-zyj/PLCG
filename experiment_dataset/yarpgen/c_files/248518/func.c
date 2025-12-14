/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248518
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
    var_20 = ((/* implicit */signed char) 18446744073709551615ULL);
    var_21 = ((/* implicit */_Bool) max((var_21), (var_0)));
    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-51)), (((unsigned long long int) (+(var_14))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = -3291013241846545801LL;
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : ((+(min((var_15), (0U))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [3U] [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [18U] [i_1])) ? (10627727277936361533ULL) : (((/* implicit */unsigned long long int) -1252183788504013940LL))));
            arr_7 [(unsigned short)12] = ((/* implicit */unsigned char) arr_2 [9ULL] [(short)17]);
            arr_8 [i_1] = ((/* implicit */signed char) ((arr_1 [i_0]) - (arr_1 [i_1])));
        }
        for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            var_25 = ((/* implicit */int) var_16);
            var_26 = ((/* implicit */unsigned long long int) arr_9 [i_2 + 2] [i_2 + 2]);
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_15)) / ((+(arr_4 [i_0] [i_0])))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_16 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1252183788504013916LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13357))) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1252183788504013916LL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32752))) > (7712328882528846166LL)))) : (((arr_14 [i_3] [i_3]) + (((/* implicit */int) (signed char)103))))))) : (((0ULL) - (((/* implicit */unsigned long long int) 1252183788504013920LL)))));
        var_27 = (~(-2186854649549838246LL));
        arr_17 [i_3] = ((/* implicit */signed char) (~(arr_1 [i_3])));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) 2129442049U)), (max((13617681474874611363ULL), (((/* implicit */unsigned long long int) 149707029)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3])) >> (((((/* implicit */int) (short)32752)) - (32728)))))))))))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            var_29 = ((/* implicit */_Bool) max((12651194303754511129ULL), (((/* implicit */unsigned long long int) 101680661))));
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4])))))));
            arr_20 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((1252183788504013916LL) != (((/* implicit */long long int) -873351963)))))) - (min((((/* implicit */long long int) (unsigned char)38)), (-1252183788504013897LL)))));
            var_31 = ((/* implicit */unsigned int) arr_10 [i_4]);
            arr_21 [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3])) && (((((/* implicit */_Bool) arr_4 [i_4] [i_4 + 1])) || (((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 - 1]))))));
        }
    }
    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_32 = (short)-32487;
        var_33 = ((/* implicit */short) min((var_33), (arr_10 [i_5])));
    }
}
