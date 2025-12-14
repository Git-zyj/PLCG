/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43458
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_11 ^= max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))) <= (arr_0 [i_0])))), (min((min((((/* implicit */long long int) (short)12191)), (-4981986062225604630LL))), (((((/* implicit */_Bool) 7433911882059002681LL)) ? (arr_8 [i_1] [i_2] [i_3 + 1] [i_2]) : (2271612282990833473LL))))));
                                var_12 = ((unsigned long long int) (short)10596);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                    {
                        {
                            arr_17 [i_0] = ((((((/* implicit */_Bool) max(((short)992), ((short)-16384)))) ? (var_5) : (((/* implicit */unsigned long long int) max((arr_5 [i_6] [i_5] [14ULL] [i_0]), (((/* implicit */long long int) var_8))))))) + (((/* implicit */unsigned long long int) min((arr_8 [i_5] [i_6 - 1] [i_6 - 1] [i_5]), (((/* implicit */long long int) arr_6 [i_6 - 1] [i_1] [i_1] [i_5]))))));
                            var_13 = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) ((((/* implicit */_Bool) 7091671880360912893ULL)) || (((/* implicit */_Bool) arr_10 [i_1] [i_1] [4LL]))))))));
                            arr_18 [i_6] [7ULL] [9LL] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1])) >= (var_0)))), (min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0])), (1751132329521654804ULL)))))) ? (max((((unsigned long long int) 4981986062225604638LL)), (((/* implicit */unsigned long long int) arr_6 [(short)16] [i_5] [i_5] [i_0])))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_14 [11ULL] [i_1] [i_1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))), (arr_14 [i_6 - 1] [i_6 - 2] [i_6] [i_6 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (16ULL) : (var_5)));
    var_15 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)27418))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((var_1), (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (min((((long long int) (short)-12192)), ((~(-3809691208608012482LL))))));
    var_16 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)26836))))), (17704257289845376691ULL));
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4240534771741199442ULL)) ? (((/* implicit */unsigned long long int) -3394044109990182044LL)) : ((~(((((/* implicit */_Bool) 12312019295754672262ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10596))) : (16695611744187896816ULL)))))));
                    var_18 += max((((/* implicit */short) ((((/* implicit */_Bool) min((1541985221580104108ULL), (((/* implicit */unsigned long long int) arr_19 [i_8]))))) && (((var_0) <= (13987368447414864352ULL)))))), ((short)-24455));
                }
            } 
        } 
    } 
}
