/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229714
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [(short)6] &= ((/* implicit */long long int) min((((((var_15) << (((/* implicit */int) arr_2 [i_0] [i_0])))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1)))) - (108))))), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29172))) >= ((-9223372036854775807LL - 1LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -64)) ? (((/* implicit */int) (unsigned short)29172)) : (((/* implicit */int) (_Bool)1))))))))));
        var_18 = ((/* implicit */unsigned int) var_13);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (3434542027870026274ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43638))) & (5244594729344975834LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [19LL]))))))));
        var_20 = ((/* implicit */int) ((arr_6 [i_1]) ^ (arr_6 [i_1])));
        arr_8 [(signed char)4] [(signed char)4] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((144115188075855871LL) - (144115188075855871LL)))))) ? ((+(var_9))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) -5244594729344975835LL)) + (14328327757708048104ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) << (((max((3434542027870026283ULL), (((/* implicit */unsigned long long int) var_1)))) - (3434542027870026260ULL)))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1])) != (((/* implicit */int) (_Bool)1))))) : ((+(((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1]))))));
                    var_23 = ((/* implicit */unsigned char) max(((+(((unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_16)) : (min((-3923481004393830980LL), (((/* implicit */long long int) (short)12698)))))))));
                }
            } 
        } 
        arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) 1158238464)) | (min((4273995628U), (((/* implicit */unsigned int) ((-335966674) % (335966696))))))));
        arr_17 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12690)) ? (((/* implicit */unsigned long long int) 3731875721U)) : (arr_15 [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29340)) || (((/* implicit */_Bool) (short)-12694))))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12694))) <= (3752016136U))))))) : ((+(((unsigned long long int) (short)2847))))));
    }
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        var_24 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_5]))))) > (arr_5 [i_5 - 1] [i_5 - 1])));
        arr_21 [i_5] [i_5 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) * (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 1] [i_5]))) : (arr_5 [(unsigned short)10] [i_5 + 1])));
    }
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(11ULL))))));
}
