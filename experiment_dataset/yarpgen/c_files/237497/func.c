/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237497
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
    var_15 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_2)))))))) : (((/* implicit */int) (unsigned char)2))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_6))));
                            arr_17 [i_2] [i_1] [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)8)) - (((/* implicit */int) (unsigned char)11))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_10))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) != (((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (4949974404941521398LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))))) : (((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)31)) ^ (((/* implicit */int) (unsigned char)147)))), (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)25))))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_5 [i_2 - 1] [i_2]))));
                        }
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) var_3);
                            arr_21 [i_2] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)16355)) == (((/* implicit */int) var_9)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) -995328027)) == (var_6))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_1] [i_3 - 1] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)38)))))) ? (13282534523149133818ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_20 = ((/* implicit */unsigned long long int) ((long long int) 4949974404941521401LL));
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_21 *= ((/* implicit */unsigned long long int) 4949974404941521392LL);
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((-4949974404941521390LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))))))));
                        }
                    }
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((((/* implicit */unsigned long long int) max((-1979771151), (-761095004)))) & (11351666765165856513ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) - (var_3))) != (((/* implicit */unsigned long long int) ((int) var_3)))))))))));
                    arr_29 [i_0] [i_2] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((-761095031) ^ (761094995)))) == (var_6))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((-(((/* implicit */int) var_12))))));
                }
            } 
        } 
    } 
}
