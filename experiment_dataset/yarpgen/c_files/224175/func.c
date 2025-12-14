/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224175
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_19 ^= (+(((((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                            arr_17 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((min((-9223372036854775807LL), (-2298656782874032728LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0])))));
                            var_20 &= ((/* implicit */long long int) min((((/* implicit */unsigned char) ((-1LL) == (-1756278147993632020LL)))), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]))))), (var_15)))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) min((arr_5 [i_2 + 1] [i_1 + 1] [i_1 - 2]), (arr_5 [i_2 - 1] [i_1 - 1] [i_1 - 2])))) : (((/* implicit */int) arr_5 [i_2 - 3] [i_1 + 1] [i_1 - 2]))));
                            arr_21 [i_2] = ((((/* implicit */_Bool) (unsigned char)110)) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))));
                            arr_22 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) ((var_16) % (arr_11 [i_1 + 1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)139)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) < (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)46))))))))) : (arr_2 [i_0] [i_0]));
                        }
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)159))))) < (min((((/* implicit */long long int) (unsigned char)74)), (var_11))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_23 += max((((/* implicit */unsigned char) ((-3446459793286199180LL) >= (9223372036854775805LL)))), (arr_15 [i_1] [i_1] [i_1]));
                        var_24 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (unsigned char)253)), (min((var_18), (var_8))))) ^ (((arr_19 [i_2 - 1] [i_2 - 1] [i_1 + 1] [i_1 + 1] [i_0]) - (var_14)))));
                        arr_27 [i_2] [i_2] [i_2] [i_2] = ((unsigned char) 9020919048056303890LL);
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((143547953522891332LL), (((/* implicit */long long int) arr_14 [i_1] [i_1] [i_1 - 1] [i_1]))))) ? (((-143547953522891332LL) - (min((var_14), (((/* implicit */long long int) var_9)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_6] [i_0]))) ^ (arr_23 [i_0] [i_0] [i_0] [i_0])))));
                    }
                    var_26 = ((/* implicit */unsigned char) arr_12 [i_1 + 1] [i_1 + 1]);
                    arr_28 [i_0] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0]))))), ((+(((/* implicit */int) (unsigned char)65))))))) && (((/* implicit */_Bool) 666824412326216619LL))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)244))))))));
                                arr_39 [i_8] = arr_34 [i_8] [i_7] [i_7] [i_8];
                                arr_40 [i_7] [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) arr_38 [i_8] [i_9] [i_8] [i_8])) || (((/* implicit */_Bool) var_7))))));
                                arr_41 [i_8] [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((long long int) -1LL)) >= (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) : (-143547953522891333LL)))));
                            }
                        } 
                    } 
                    arr_42 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) var_3);
                    var_28 = var_16;
                }
                arr_43 [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned char) arr_30 [i_7]))) || (((/* implicit */_Bool) ((long long int) -4132768961537068982LL))))), (((2360511742926302766LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_8] [i_7] [i_7] [i_7] [i_7] [i_7] [i_8])))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) : (var_18)));
}
