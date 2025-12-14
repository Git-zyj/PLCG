/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52120
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)119)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)125))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)117)), ((unsigned char)79)))) : (((/* implicit */int) var_5))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6)))))))));
                        var_13 += ((/* implicit */_Bool) var_6);
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned char)62))))) ? (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)117)))) : ((-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (arr_4 [i_0 - 1] [i_0 - 1])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        var_15 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) < (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned char)142)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))));
                        var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)-22)))))))));
                        var_17 ^= ((/* implicit */signed char) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)95)))) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0])) : ((~(((/* implicit */int) (unsigned char)47))))))), (((arr_4 [i_4] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_18 = ((/* implicit */signed char) min((arr_3 [(unsigned char)3] [(unsigned char)11]), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                }
                var_19 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)100))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((long long int) var_1));
}
