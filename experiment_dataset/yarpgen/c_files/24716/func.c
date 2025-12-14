/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24716
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
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 26388279066624LL)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (_Bool)1))))))) ? (3777061713U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) - (((/* implicit */int) var_11))));
    var_20 = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) 4294967277U))));
    var_21 -= ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)17)) + (((/* implicit */int) ((_Bool) ((unsigned char) -1))))));
                                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) arr_2 [(unsigned short)9])), (1210227895)))) * (((arr_5 [i_4]) - (arr_5 [i_1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_20 [(unsigned short)9] [i_0] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */long long int) 0U)) / (-6043179645984810905LL)))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((14354798652915465318ULL) ^ (((/* implicit */unsigned long long int) -4)))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) arr_10 [7U]))));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */unsigned char) ((int) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (123904237819503422LL)))));
                    arr_22 [i_0] [i_0] [(unsigned char)5] = ((/* implicit */short) min(((unsigned short)50066), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))))))));
                    var_24 = ((/* implicit */unsigned char) arr_10 [7U]);
                }
            } 
        } 
    } 
}
