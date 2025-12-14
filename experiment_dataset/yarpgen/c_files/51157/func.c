/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51157
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -3604254394981293214LL)) >= (((max((((/* implicit */unsigned long long int) 1021429878)), (9244612285246299790ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) && (((/* implicit */_Bool) var_9))))))))));
                var_17 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-32765)))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(5152904818504597748ULL)))) ? (((((((/* implicit */_Bool) (short)-1)) ? (7118742367238146676LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42))))) / (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)5965), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107))))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) 428878109);
                    arr_12 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)1])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))))) && (((/* implicit */_Bool) (short)-32754)))) ? (((((((/* implicit */_Bool) 2029023112)) && (((/* implicit */_Bool) -4478090929200217771LL)))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) : (3519930173558770496ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((288230376151709696LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4015751364012256392LL)) ? (((/* implicit */long long int) ((var_0) ? (32767) : (1630714051)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34753))) / ((-9223372036854775807LL - 1LL)))))))));
                    arr_13 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((((_Bool)0) ? (-2878224240353642127LL) : (-1894622205080523879LL)))))) && (((/* implicit */_Bool) (signed char)-44))));
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) : (1476477171237188772ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [11ULL] [i_2]))))), (6541633989360513076ULL)));
                }
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (short)-10814))));
                                var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(8197771536022356669ULL)))) ? (14144404294641933072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                                arr_23 [i_3] [i_4] [i_3] [i_1] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15770))) | (2879513560067166570ULL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_5]))) - (628593635U)))) : (min((((/* implicit */long long int) (unsigned char)7)), (-9223372036854775800LL))))), ((+(((4063306298620965109LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)87)))))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (short)32740)))), (((/* implicit */int) (unsigned char)209))));
                    arr_24 [i_3] [(unsigned char)9] [(unsigned char)9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -664751278192674858LL)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((int) var_12))) : (((unsigned long long int) (signed char)117)));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) (_Bool)1);
                    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) var_7)))));
                }
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 437705493U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23446))) : (((((/* implicit */_Bool) -1610896643)) ? (arr_25 [i_1] [(unsigned short)3]) : (((/* implicit */unsigned long long int) 7323170463925558195LL))))))) && (((/* implicit */_Bool) 2825482638080981836LL))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((-2338342481722467685LL) / (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_1);
}
