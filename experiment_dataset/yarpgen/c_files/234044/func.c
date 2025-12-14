/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234044
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
    var_16 *= ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(497993018U)))) - (max((arr_6 [(unsigned short)6]), (((/* implicit */long long int) var_2))))))) ? (((((/* implicit */_Bool) ((arr_5 [i_2] [i_4 + 1]) ^ (arr_8 [i_3] [i_2] [i_2] [(short)6])))) ? (max((arr_5 [i_0] [(signed char)0]), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_11 [i_0] [i_1] [i_1] [i_2] [(unsigned short)0] [i_4]) : (((/* implicit */long long int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) max((arr_10 [i_2 - 1] [i_4 - 1] [i_4 - 1] [i_2] [i_4] [1LL] [i_4]), (arr_10 [i_2 - 1] [i_4 - 1] [i_4] [i_2] [i_4] [i_4 + 1] [i_2]))))));
                                var_18 *= min((((/* implicit */int) (unsigned short)7011)), ((((~(((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) (unsigned char)6)))))));
                                arr_13 [(signed char)0] [i_1] [(signed char)0] [i_3] [i_2] = ((/* implicit */long long int) ((min((((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_3 [(signed char)2] [(signed char)8] [i_0])))), ((+(((/* implicit */int) arr_2 [i_4 + 1] [i_3] [i_0])))))) * ((-(((/* implicit */int) ((short) (short)19633)))))));
                                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) ((_Bool) arr_6 [i_2 - 1]))) : (((/* implicit */int) ((signed char) arr_12 [i_3] [(unsigned char)4] [i_3] [i_3] [i_3] [i_3] [i_3])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [(signed char)3] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)19628)) : (var_3)))) : (min((((/* implicit */long long int) (unsigned short)7011)), (arr_6 [(signed char)8]))))))));
                    var_21 = ((/* implicit */signed char) ((long long int) ((unsigned short) arr_10 [i_2] [i_2 - 1] [i_2] [i_2] [i_1] [i_2] [i_0])));
                    var_22 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) (unsigned char)45)) ? (3880099329848298469LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12851))))))), (min((-3170265869479844586LL), (((/* implicit */long long int) (short)19618))))));
                }
            } 
        } 
    } 
}
