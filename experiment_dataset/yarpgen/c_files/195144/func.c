/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195144
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) var_6);
        var_13 = ((/* implicit */int) ((long long int) (_Bool)1));
        var_14 = ((/* implicit */_Bool) (-(arr_1 [i_0])));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            {
                arr_11 [i_2] [(unsigned char)10] = ((/* implicit */long long int) var_3);
                var_15 = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_16 |= ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)38)))) ? (arr_5 [i_3]) : (arr_7 [i_1] [i_1])));
                            var_17 = ((_Bool) (!(((/* implicit */_Bool) -1310083573699779492LL))));
                            arr_17 [i_2] [i_3 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 12254637935398390872ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((-1310083573699779492LL) / (((/* implicit */long long int) 1998093354))));
    var_19 |= 584507877351815596LL;
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 24; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_5])) < (((1998093357) / (((/* implicit */int) (unsigned char)11))))));
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (arr_22 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_11)))) >> (((((/* implicit */int) var_2)) - (13825)))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)9169)) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) ((arr_24 [i_5 - 2]) > (((/* implicit */unsigned long long int) (~(2759639551009082885LL)))))))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))))) ^ (var_8)))) | (((((/* implicit */_Bool) 2759639551009082885LL)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_22 [i_5 - 1])))));
                    arr_26 [i_5] [i_6] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_6]))));
                }
                arr_27 [i_5] [i_6] [i_5] = ((/* implicit */long long int) var_9);
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_20 [(short)20]))));
            }
        } 
    } 
}
