/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50091
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
    var_19 = ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_0)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) ((signed char) max((((((/* implicit */long long int) 511)) + (arr_1 [i_0] [i_0]))), (max((((/* implicit */long long int) var_16)), (arr_0 [i_0]))))));
        var_21 = ((/* implicit */_Bool) (-(min((((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0 + 1]))), (arr_1 [i_0] [i_0 + 1])))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((((/* implicit */int) var_7)) - (((((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3])) + (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 511)))))) ? (max((min((((/* implicit */unsigned long long int) -860149708)), (0ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (13018867814798834109ULL))))) : (((/* implicit */unsigned long long int) (~(1665267070)))))))));
                            var_24 = (~(max(((+(((/* implicit */int) (_Bool)1)))), (max((-860149708), (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_2] [i_3])))))));
                            var_25 = (_Bool)1;
                            var_26 = 1913153812;
                        }
                        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_27 = ((/* implicit */int) max((var_27), ((~((((_Bool)1) ? (-156988601) : (((/* implicit */int) (_Bool)1))))))));
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2 + 1] [i_3] [i_5])))))));
                            var_29 &= ((/* implicit */int) ((unsigned short) (+(5427876258910717511ULL))));
                            var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1665267070)))) ? (arr_1 [i_2 + 2] [i_5]) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) arr_12 [i_0] [i_1] [(_Bool)0] [i_3] [i_5]))));
                        }
                        for (long long int i_6 = 4; i_6 < 11; i_6 += 4) 
                        {
                            var_31 = ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_7 [i_2 + 2] [i_3] [(signed char)6]))))) << ((+(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_3]))))));
                            var_32 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_2] [i_0 + 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_3] [i_6])) : (((/* implicit */int) arr_7 [i_1] [i_2 + 1] [i_3])))), (((((/* implicit */int) arr_17 [i_0 + 1] [i_2] [i_6 - 3] [i_6 - 4] [i_6])) % (((/* implicit */int) arr_17 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1] [i_6]))))));
                        }
                        var_33 = max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3])) ? (arr_0 [i_2]) : (((/* implicit */long long int) -522)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (_Bool)1)) : (9104124)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_3]))))) : (((/* implicit */int) ((unsigned short) 511))))));
                        var_34 = ((/* implicit */unsigned long long int) (((~(arr_1 [i_2 + 1] [i_2]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0 + 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0 + 1] [i_2 + 3] [i_0])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_2 + 2] [i_2] [i_0 - 1] [i_2 - 2])))))));
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (unsigned short)32697))));
                    }
                } 
            } 
        } 
        var_36 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1] [11] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32859)))))));
    }
}
