/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53570
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((unsigned long long int) (signed char)127));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (signed char)-54))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((arr_11 [i_0 - 3] [i_0 - 3] [i_1 + 3] [i_0]) < (arr_0 [i_1 + 1]))))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 15373323095788040625ULL)) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_3)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_10 [(signed char)8] [i_2] [i_0] [i_0])) : (var_6)));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        var_15 = ((long long int) (signed char)127);
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-107)))) - (((/* implicit */int) ((signed char) -7155948310115796506LL))))))));
                        arr_16 [i_0] = ((/* implicit */long long int) 6903556670482996619ULL);
                    }
                }
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    arr_20 [10LL] [i_1 + 2] [i_1 + 3] [i_0] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_9)) ? (67917394887301120LL) : (var_10))), (((((/* implicit */_Bool) 15536330280714238542ULL)) ? (-6426234208060988106LL) : (4370692664324687283LL))))), (22LL)));
                    arr_21 [i_5] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)109)) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (1422224535543994849LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_14 [i_0] [i_1] [i_0 + 1] [10ULL]), (arr_14 [i_0] [i_1] [i_0 - 1] [i_0]))))) : ((~(-5493553750503364221LL))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 - 1] [i_6] [i_6]))));
                    arr_25 [i_0] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_6] [(signed char)10]))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)81))) ^ (9223372036854775807LL)));
                }
                for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
                {
                    arr_28 [i_0] [i_1 + 2] [i_7] = ((/* implicit */long long int) min((7617591944063907980ULL), (((/* implicit */unsigned long long int) 6426234208060988112LL))));
                    arr_29 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (signed char)66))));
                    arr_30 [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-82)), (var_2)))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)70))) : (-1534891097242906701LL)))))));
                    var_18 = ((/* implicit */long long int) (signed char)86);
                }
                for (signed char i_8 = 2; i_8 < 17; i_8 += 3) 
                {
                    var_19 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (7534650214167371273ULL) : (((/* implicit */unsigned long long int) -1LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_8])) ? (-9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (min((((/* implicit */unsigned long long int) var_10)), (17873806067788018600ULL))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -23LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (8685005083628834235ULL)));
                    var_21 &= max((min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)123))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (1405000930053982253LL))))), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))))));
                    arr_33 [i_8] = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) -6903510661765430566LL)) ? (10579066473564300414ULL) : (((/* implicit */unsigned long long int) -1LL)))) >= (((/* implicit */unsigned long long int) max((5935443099284953892LL), (var_2))))))));
                }
                /* LoopNest 3 */
                for (signed char i_9 = 4; i_9 < 19; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) -7536685055012763832LL)) ? (5737251214993580010LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
                                var_23 = max((4384340162355670513LL), (((/* implicit */long long int) (signed char)-104)));
                                var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 18363262347265515025ULL)) ? (arr_18 [i_0 - 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 12133777998488017908ULL)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(-2286545704103400498LL)))) ? ((~(max((((/* implicit */unsigned long long int) var_10)), (6265775951094179918ULL))))) : (((((/* implicit */_Bool) ((signed char) var_2))) ? (min((((/* implicit */unsigned long long int) -451554604551037079LL)), (12096983085784812368ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 145478999910225220LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
}
