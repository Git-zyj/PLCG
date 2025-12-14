/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45009
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    var_11 = var_3;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_1]), (arr_1 [i_2] [i_2]))))) % (min((var_9), (428489475688025501LL)))))) ? (10532565331557006087ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-5198092297450711958LL) : (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (arr_8 [i_1] [i_1] [i_1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 &= ((/* implicit */unsigned short) (unsigned char)255);
                                arr_15 [i_0] [i_1] [18LL] [i_3] [i_0] = ((((-1639936528127850359LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((143974450587500544LL) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [2ULL] [i_1]))))))))) & (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [13LL] [i_2]))))) * (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (unsigned char)52)))))))));
                                var_13 = ((/* implicit */unsigned short) min((((-1593178861456573369LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65276))))), (min((var_9), (((/* implicit */long long int) arr_5 [i_3] [i_0] [i_0]))))));
                                var_14 = (+(((((/* implicit */_Bool) var_7)) ? (((arr_0 [i_2]) / (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
