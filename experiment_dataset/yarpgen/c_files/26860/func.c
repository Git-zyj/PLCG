/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26860
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_0))) >> (((max((((/* implicit */long long int) (unsigned char)255)), (var_6))) - (224LL))))))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2770950133U)))))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))))) ? (((unsigned long long int) ((unsigned long long int) var_11))) : (((/* implicit */unsigned long long int) var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_14 += ((/* implicit */signed char) (~(((((/* implicit */int) var_9)) / (((/* implicit */int) arr_0 [i_0]))))));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_1] [i_1])))) && (((/* implicit */_Bool) ((long long int) 3973462270692193454ULL)))));
        }
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)13])) : (((/* implicit */int) var_4)))) <= (arr_1 [i_0] [i_0]))))));
        arr_5 [i_0] = ((/* implicit */short) (unsigned short)29182);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)172)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (arr_7 [i_2]))))))) >= (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))));
        var_18 += ((/* implicit */_Bool) 14473281803017358169ULL);
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((long long int) ((long long int) (-(((/* implicit */int) var_9))))))));
                arr_14 [i_3] [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) arr_11 [i_4] [i_3 - 1])) : (((/* implicit */int) ((arr_6 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))) ? (min((max((var_11), (3973462270692193447ULL))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (var_5))))) : (((/* implicit */unsigned long long int) -4949164757006706514LL))));
            }
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_18 [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)511)) ? (3973462270692193454ULL) : (((/* implicit */unsigned long long int) arr_16 [i_5] [i_3] [i_5]))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) 0ULL))) ? (((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_12 [i_5] [(signed char)2] [18U] [(short)7]))))))));
                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 42347002U)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) arr_10 [i_5]))))), (((((/* implicit */_Bool) arr_6 [i_3])) ? (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_0))))));
            }
            arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((-4949164757006706494LL) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((signed char) var_9)), (min(((signed char)-126), (((/* implicit */signed char) (_Bool)0)))))))) : (((long long int) (short)768))));
            var_21 += ((/* implicit */signed char) arr_6 [i_2]);
            arr_20 [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) var_10));
            arr_21 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */signed char) max((3973462270692193454ULL), (((/* implicit */unsigned long long int) ((((arr_16 [i_3 - 1] [i_3] [i_3]) + (2147483647))) >> (((/* implicit */int) arr_9 [i_3 + 1])))))))) : (((/* implicit */signed char) max((3973462270692193454ULL), (((/* implicit */unsigned long long int) ((((((arr_16 [i_3 - 1] [i_3] [i_3]) - (2147483647))) + (2147483647))) >> (((/* implicit */int) arr_9 [i_3 + 1]))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            arr_25 [i_6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_6]))))), (arr_23 [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_9 [i_2])))))))));
            var_22 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_6])))));
            arr_26 [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_6] [i_6])) ? (585046723U) : (914623709U)))) ? (((/* implicit */int) ((arr_13 [i_2] [i_6] [i_6] [i_6]) >= (arr_13 [i_6] [i_2] [i_2] [i_6])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_2])) : (arr_13 [i_2] [i_6] [i_6] [i_6])))));
        }
    }
}
