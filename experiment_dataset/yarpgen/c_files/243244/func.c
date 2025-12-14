/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243244
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
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */short) (~(2027215916871788519ULL)));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min(((unsigned short)27452), (((/* implicit */unsigned short) (signed char)52))));
                                arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)6))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) (-(3901649720U)));
                    arr_15 [(signed char)16] [i_1] [(signed char)16] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) * (arr_13 [i_0])))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
        {
            {
                var_20 ^= arr_3 [i_5];
                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)19269)))) ? (min((min((((/* implicit */unsigned long long int) (unsigned short)19253)), (10856821418557510686ULL))), (((/* implicit */unsigned long long int) arr_7 [(short)21] [(short)21] [14LL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46283)))));
                arr_22 [i_5] = ((/* implicit */short) var_9);
            }
        } 
    } 
}
