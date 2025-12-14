/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29834
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] = min((var_2), (((/* implicit */unsigned short) (!(((((/* implicit */int) arr_8 [i_0] [i_0] [8LL])) <= (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3]))))))));
                            arr_11 [i_0] [3] [3] [3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2251798739943424ULL)) ? (4323455642275676160ULL) : (14469149281702136114ULL)))) ? (arr_4 [(unsigned short)3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_5 [i_2] [i_1]))))))))));
                            var_15 = ((((/* implicit */_Bool) min((3977594792007415502ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL)))))))) ? (min((3977594792007415493ULL), (3977594792007415502ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3977594792007415493ULL))));
                var_16 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3977594792007415510ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])), (arr_4 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12692723087645361394ULL)))))) : (((((/* implicit */_Bool) 3977594792007415523ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) : (14469149281702136146ULL))))) : (var_4)));
            }
        } 
    } 
    var_17 = var_1;
}
