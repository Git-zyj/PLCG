/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50138
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_9);
                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)78))));
                arr_7 [i_0] = ((((/* implicit */int) arr_4 [i_0] [i_1])) <= (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) min((arr_3 [i_1] [(unsigned short)7]), (((/* implicit */unsigned char) arr_4 [i_0] [i_1]))))) : (((/* implicit */int) (unsigned short)31771)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0 - 1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)33758);
                            var_20 = ((((((/* implicit */int) max(((unsigned short)31792), ((unsigned short)9)))) + (((/* implicit */int) (unsigned short)40069)))) - ((+(((/* implicit */int) arr_4 [i_2] [i_2])))));
                            var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 - 1])) & (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((arr_10 [i_0 + 2] [i_1] [i_0 + 2] [i_2] [i_2] [i_3 + 1]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1]))))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_3 + 1])))), (((/* implicit */int) arr_0 [i_0] [14ULL]))));
                            var_22 = ((/* implicit */int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)33744)), (arr_11 [(signed char)0] [i_0 + 2] [i_1] [i_2] [i_3 - 1]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    arr_17 [i_0] [i_1] [i_4 + 1] = ((/* implicit */long long int) var_13);
                    var_23 = ((/* implicit */int) ((unsigned int) arr_12 [9] [9] [9] [i_0 - 1] [i_4 - 2] [i_4 + 2]));
                    arr_18 [i_1] = max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)33765));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    arr_29 [i_7] [i_7] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned short)12]))) >= (var_13)))), (arr_28 [i_5] [i_5] [i_5 - 1]))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    var_24 = ((/* implicit */short) max((min(((+(arr_26 [i_7]))), (((/* implicit */unsigned long long int) (-(var_12)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
