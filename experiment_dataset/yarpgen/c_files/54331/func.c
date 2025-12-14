/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54331
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
    var_15 ^= ((unsigned char) -1759347851);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (864691128455135232ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [(unsigned char)2] [i_2])) - (((/* implicit */int) (_Bool)1))))))))));
                    arr_7 [i_0] [(unsigned char)11] [(_Bool)1] [i_0] = 4190732079653563279ULL;
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1] [i_1 - 1])) ? (arr_3 [(unsigned short)12] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))))))));
                    var_18 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_1 - 2] [i_3]);
                    arr_10 [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned short) ((((arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2]) + (2147483647))) << (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))));
                }
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)47)), ((unsigned short)8290))))) & (max((7ULL), (var_5)))))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) min((((unsigned short) arr_9 [i_0] [i_1] [13U] [i_5])), (((/* implicit */unsigned short) ((unsigned char) 7526087896001101091ULL))))))));
                            var_21 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((unsigned short) var_13))))));
                            arr_17 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)321))))) ? (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (arr_14 [i_0] [i_1] [i_4] [i_5] [i_5]))))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3806321702721715139ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((~(var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1248582756)))) : (4051008269704122272ULL)));
                arr_19 [(_Bool)1] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 5894575168235600868ULL)) ? (((/* implicit */int) (unsigned char)105)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? ((+(((/* implicit */int) arr_12 [18U] [i_1] [i_1] [(_Bool)1])))) : (((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
