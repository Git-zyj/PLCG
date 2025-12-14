/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225493
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(arr_1 [(unsigned short)15])))))) ? (((((/* implicit */_Bool) -3816601843251677646LL)) ? (10337590614645670908ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(-1703852592726046116LL))) : (var_9)))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1544740651)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) -1544740651)), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)32912))))) : (6027143653282506424LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32915)) ? (((/* implicit */unsigned long long int) var_8)) : (var_0))))))))));
        var_12 ^= ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) arr_0 [i_0]))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)384)) : (((/* implicit */int) (unsigned char)249))))))) == (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)125))))), (var_10))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3195688491967627289LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_5))))) : (var_8)))) ? (9064312002924419864ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_1 [10LL]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32617)) + (-194961233)))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = (~(((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
        arr_6 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
        var_15 -= arr_4 [4LL];
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [11] = ((/* implicit */_Bool) max((max((9064312002924419864ULL), (var_4))), (((/* implicit */unsigned long long int) min((var_5), ((!(var_5))))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [14]))) : (((((/* implicit */_Bool) (signed char)-108)) ? (var_1) : (var_0)))))));
        arr_12 [0LL] [i_2] = ((/* implicit */long long int) var_8);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned char) (+((+(arr_9 [i_3])))));
        arr_16 [i_3] = ((/* implicit */long long int) max(((unsigned short)32928), (min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25528))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5849949978296087473ULL)))))))));
    }
}
