/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46449
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
    var_13 = ((/* implicit */unsigned int) var_0);
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned int) max((-411011327611728833LL), (411011327611728835LL)));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2106))) : (var_4))) : (var_11))), (((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) (signed char)124))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) -411011327611728833LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (3551758933716751317ULL))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                            arr_10 [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_0]))) * (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_6))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1]))))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7LL)))) ? (-957480161656671582LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62708)))))) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) arr_1 [i_0] [i_1])), ((unsigned short)62717))), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_2 [i_3]))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) == (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))))));
            }
        } 
    } 
}
