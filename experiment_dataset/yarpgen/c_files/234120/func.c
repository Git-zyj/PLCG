/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234120
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
    var_17 += var_1;
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (max((((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_16)))), ((~(((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((arr_3 [6LL] [i_1] [i_0]) - (var_10)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (arr_0 [i_0] [i_0])))) : (arr_5 [i_0] [i_0] [i_2])))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(4199446160U))))));
                    var_21 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_4 [i_0] [(unsigned short)0] [i_2] [i_2]))))));
                    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 95521142U)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_23 = max(((~(((arr_3 [i_3] [i_1] [i_2]) % (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_1)))))));
                                var_24 = ((/* implicit */unsigned int) (!((_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)205)) > ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))))), ((+(max((5139403547970796281LL), (((/* implicit */long long int) 1269607674U))))))));
        var_26 += (unsigned char)226;
        var_27 = ((((((/* implicit */int) ((unsigned short) (signed char)120))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(unsigned char)3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)103)) & (((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))))) : (((1661583716) >> (((((((/* implicit */_Bool) -1674120527956838534LL)) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)7] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (4127330388U))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_28 = ((unsigned char) 0U);
        var_29 = ((/* implicit */_Bool) (-(arr_3 [i_5] [i_5] [i_5])));
    }
}
