/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224446
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1695988670065704693ULL) | (((((/* implicit */_Bool) 6580729562159774074LL)) ? (1695988670065704693ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125)))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) 0ULL)))), ((_Bool)0)))) : ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) ((arr_7 [i_0] [i_1] [i_1]) == (12327253108251253389ULL)))), (max((((/* implicit */short) var_9)), (var_10)))))) < ((~((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]))))))));
                    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((int) arr_7 [(short)10] [i_1] [i_1]))) : (((((/* implicit */_Bool) 409119430395743850ULL)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    var_15 = ((/* implicit */_Bool) ((short) ((min((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_7 [i_0] [i_0 - 1] [i_1]))) * (((unsigned long long int) var_12)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_3 + 2])))) ^ (((((/* implicit */_Bool) arr_14 [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [(_Bool)1])) : (var_3))))));
                var_17 = ((short) ((unsigned int) ((_Bool) (_Bool)1)));
                var_18 = ((/* implicit */unsigned long long int) ((_Bool) (+(((unsigned long long int) 16750755403643846923ULL)))));
                var_19 = ((/* implicit */_Bool) ((short) ((_Bool) ((var_3) / (arr_7 [i_3] [i_3] [i_3])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((signed char) 86119898U))), (((unsigned long long int) (unsigned char)140)))) / (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)1)))))) : (max((12846057922684936337ULL), (((/* implicit */unsigned long long int) (short)-11351))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) | (((6119490965458298227ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) max((((/* implicit */short) var_0)), ((short)22613)))) : (((int) var_11)))))));
}
