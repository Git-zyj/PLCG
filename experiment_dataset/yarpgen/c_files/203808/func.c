/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203808
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = min(((+(18446744073709551615ULL))), (14179652652609454041ULL));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (4267091421100097567ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)39))))) + ((+(arr_2 [21LL]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -2038134795)) >= (max((14179652652609454041ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [21U] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))))))) ^ (0ULL)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) arr_8 [i_1]);
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(short)8])) ? (-3863605602245026022LL) : (-5212077055595727708LL)))) ? (-5212077055595727708LL) : (((/* implicit */long long int) 1766714463U)))))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        var_15 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) == (var_10)));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_16 = (~(((/* implicit */int) arr_15 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1])));
                                arr_23 [i_3] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) arr_15 [i_2 - 1] [i_2 + 2] [(unsigned char)10] [(unsigned char)10])))));
                                arr_24 [i_3] [i_3] [i_4 + 1] [i_5] [i_6] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_14 [2ULL] [2ULL] [3LL] [12LL]))))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) 16194395591740901613ULL)) ? (((unsigned int) (_Bool)0)) : (arr_6 [14]))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((unsigned char) var_9));
                }
            } 
        } 
        arr_25 [i_2] [10LL] = ((/* implicit */long long int) arr_19 [i_2] [i_2] [(unsigned short)16] [i_2 - 1] [(unsigned char)6] [(unsigned short)4]);
        arr_26 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((948502048U) * (var_8))))));
    }
    var_19 += ((/* implicit */unsigned long long int) var_0);
    var_20 = ((/* implicit */unsigned int) (signed char)-40);
}
