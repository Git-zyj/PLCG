/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219057
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_12 = ((13746709209205147081ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))));
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 18; i_4 += 2) /* same iter space */
                        {
                            arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4398046511072LL)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)79))))) ? (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (unsigned short)30049)) : (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) ((936377658003424195ULL) <= (((/* implicit */unsigned long long int) var_9)))))));
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (signed char)85))));
                        }
                        for (short i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [6U] [i_5] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) var_10)) : (170517811595026606LL)));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2047)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)))) : (arr_2 [i_1] [i_1 + 3])));
                        }
                    }
                    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        arr_21 [i_1] [i_1] [i_2 + 2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) + (((((/* implicit */int) var_3)) - (((/* implicit */int) (short)16759))))));
                        var_15 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_6 + 1] [i_6 - 1])) / (((int) var_10))))), (((((/* implicit */_Bool) (short)-29402)) ? (((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_2] [i_1 + 3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6 - 1]))) : (13325795302173583849ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)123))))))));
                    }
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-95)))) ^ (((/* implicit */int) arr_9 [i_1] [i_1 + 3] [i_2 + 3] [i_2 - 1] [i_2 + 3]))))) ^ (((((/* implicit */_Bool) (unsigned char)13)) ? (((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */long long int) 2657821899U)) : (-7312112074976706954LL))) : (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) (unsigned char)19)))))))));
                    var_17 = ((/* implicit */signed char) 5120948771535967761ULL);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) var_6)))), (((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
}
