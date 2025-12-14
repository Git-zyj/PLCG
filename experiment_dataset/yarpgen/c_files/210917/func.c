/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210917
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (6130203733966833176ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-37)))) : (min((((/* implicit */unsigned long long int) 3551358415U)), (13755895571535000278ULL)))))) ? (max((var_9), (((/* implicit */unsigned int) (+(var_7)))))) : (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(17021779593484321114ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (min((((/* implicit */unsigned int) -1151131429)), (((unsigned int) 4913734949696536764ULL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned int) var_6);
                        arr_10 [i_0] [i_1] [5] [i_2] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_0]))) + (4913734949696536762ULL))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(4913734949696536762ULL))))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (4913734949696536762ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30720)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((-1244256856) + (((/* implicit */int) var_0))))))))));
                        }
                        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            var_17 ^= ((/* implicit */unsigned char) ((unsigned long long int) 0));
                            var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_2]))));
                            arr_19 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1] [i_2]);
                        }
                        var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0]))));
                        arr_20 [i_1] [i_1] [i_2] [(unsigned char)0] [i_0] = ((/* implicit */signed char) 13533009124013014851ULL);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 148738596)) ? (((/* implicit */int) (_Bool)1)) : (var_8)));
                        var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (8054720177270782796ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2])) ? (arr_13 [(unsigned short)7] [(unsigned short)7] [i_2] [(unsigned short)7]) : (var_9))) ^ (max((((/* implicit */unsigned int) 1244256853)), (4294967295U))))))));
                    var_23 = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_2] [i_1]);
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_9 [i_0] [4ULL] [10U] [i_0])))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)13493)))) : (max((((/* implicit */int) var_0)), (var_8)))))) & (((unsigned int) 433545845U))));
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [(signed char)4] [i_0] [i_0] [i_0]))) : (arr_18 [i_0] [0ULL] [0ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1151131429)))) <= (10392023896438768823ULL))))) : (((((/* implicit */_Bool) ((8054720177270782792ULL) / (((/* implicit */unsigned long long int) 1244256856))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)1))))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [4LL] [i_0] [i_0])))))))));
        var_25 = ((((/* implicit */_Bool) (((~(var_1))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0])) ? (((/* implicit */int) (unsigned short)7429)) : (var_4))))))) ? (((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (3984968981U)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-106)) > ((-(var_10))))))));
        arr_25 [i_0] = ((int) (_Bool)1);
    }
}
