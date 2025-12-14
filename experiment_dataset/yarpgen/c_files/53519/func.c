/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53519
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (7035735277659811903ULL))), (((((/* implicit */_Bool) 5475858425303939074ULL)) ? (11411008796049739723ULL) : (((/* implicit */unsigned long long int) 5241723650570064932LL))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1]))), (((((/* implicit */_Bool) 17804399984540082057ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6120079769504562303ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32208))) : (18446744073709551612ULL)));
                    var_16 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_0] [i_0]);
                    var_17 = ((/* implicit */signed char) var_3);
                    var_18 = arr_1 [i_0];
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (arr_7 [i_3] [i_4]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3 + 2] [i_3 + 2]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 - 1]))) - (((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_1 [(signed char)5]) : (var_3))))))));
                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_4] [i_4] [i_3 + 1])) <= (((/* implicit */int) arr_9 [i_3] [i_4] [i_3 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8113))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39931))) - (11411008796049739723ULL)))))));
                    var_22 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3 - 1] [(unsigned short)3])), ((+(arr_16 [i_3 + 1])))));
                }
                for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    var_23 = (+(-7737118058025004014LL));
                    var_24 ^= ((/* implicit */unsigned short) arr_19 [i_6] [i_3] [i_6 + 2]);
                }
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) var_6);
    var_26 = ((/* implicit */unsigned short) var_6);
}
