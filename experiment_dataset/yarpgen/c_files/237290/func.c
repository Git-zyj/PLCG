/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237290
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_1] |= ((/* implicit */signed char) ((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (arr_3 [10ULL] [i_0] [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-9))))))) - (min((arr_3 [19ULL] [i_0] [i_1]), (((/* implicit */unsigned int) var_6))))));
                var_14 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_0 [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((var_12) <= (((/* implicit */unsigned long long int) var_10))));
    var_16 = ((/* implicit */signed char) min((11437247940637630253ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 4; i_4 < 22; i_4 += 3) 
                {
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((6852117322642458272ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_7)), (arr_7 [i_2]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105)))));
                            var_18 = ((/* implicit */short) ((((((1514561287118627950ULL) != (((/* implicit */unsigned long long int) var_5)))) && (((/* implicit */_Bool) ((unsigned short) var_5))))) ? (min((((/* implicit */unsigned long long int) min((var_11), (var_11)))), (min((((/* implicit */unsigned long long int) (signed char)-127)), (1514561287118627974ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))));
                            var_19 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_7 [i_2 - 1])), (max((1063694285U), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 1514561287118627943ULL))) != (((/* implicit */int) ((((/* implicit */long long int) 18U)) != (-2132871192872252675LL)))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_15 [i_2 - 1] [i_3 + 1] [i_3] [i_3 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2132871192872252660LL))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-22643)) ? (((/* implicit */unsigned long long int) var_9)) : (18446744073709551615ULL)))))));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_14 [i_3] [i_3] [i_2 - 2])))));
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_23 [i_3] [i_6] [i_6] [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6])))))) && (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_21 [i_2] [(signed char)15] [(signed char)12] [i_7]))))))))));
                            var_22 = ((/* implicit */unsigned int) var_0);
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3 + 2])) ? (arr_8 [i_2 - 1] [i_3 + 2]) : (arr_8 [i_2 - 1] [i_3 + 2])))) || (((/* implicit */_Bool) max((arr_8 [i_2 - 1] [i_3 + 2]), (((/* implicit */unsigned int) var_6)))))));
                            var_24 = ((/* implicit */unsigned int) ((unsigned short) arr_6 [i_3]));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((-226155280200816074LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_6 + 3])) : (((/* implicit */int) var_6)))))))) ^ (var_12))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
