/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22158
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) max((var_11), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (((_Bool)1) ? (3402519821U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) : (var_2)))));
                var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)61942)))) ? (((/* implicit */unsigned long long int) 7079576468947854988LL)) : ((-(var_12)))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_11);
                var_16 = ((/* implicit */long long int) ((var_11) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)8)) == (((/* implicit */int) (signed char)-103))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_0 [i_2] [1U]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (arr_3 [2ULL] [2ULL])))) ? (((unsigned int) -5686794015201378479LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_2] [i_2] [i_2])))))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((15LL) != (((/* implicit */long long int) 16352U))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-13978))))))) ? (max((var_1), (((/* implicit */long long int) (unsigned short)17612)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_2] [i_2]) : (((/* implicit */unsigned int) -1340354146))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) (short)-16250))))) ^ (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11))));
        arr_14 [4U] &= ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) % (arr_3 [i_3] [i_3]))) << (((((/* implicit */int) (signed char)45)) - (37))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_3] [i_3]))))));
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((var_5) ? (((/* implicit */int) arr_2 [9LL] [i_3] [i_3])) : (((/* implicit */int) (short)16))))))) == (max((((/* implicit */unsigned int) arr_7 [i_3])), (((264211764U) - (1726525226U)))))));
    }
}
