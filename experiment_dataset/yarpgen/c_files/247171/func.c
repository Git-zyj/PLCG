/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247171
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
    var_19 = ((/* implicit */unsigned long long int) max(((+(4206723524416854734LL))), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */int) var_15))))))));
    var_20 = max((var_10), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4085923661399241146LL))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)38465);
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_22 |= ((/* implicit */unsigned char) max((-4206723524416854735LL), (((/* implicit */long long int) (unsigned short)38477))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */long long int) max((max(((short)-1), (((/* implicit */short) (signed char)31)))), (((/* implicit */short) arr_6 [i_0] [i_1] [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) max(((~(((5034086562076256844ULL) | (((/* implicit */unsigned long long int) -3645992410891900817LL)))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_3] [i_2] [i_1]))) | (18013848753668096ULL)))))));
                                var_24 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_3]);
                                var_25 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                                arr_13 [i_4] [i_1] [i_2] [13LL] = ((/* implicit */signed char) (~(arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])));
                                var_26 = ((-4206723524416854734LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) 18446744073709551615ULL)))));
                    arr_19 [i_1] = var_8;
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [(signed char)2] [i_1] [i_1])) && (((/* implicit */_Bool) -1456719163)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-24)) || (var_15))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_9 [i_0] [(unsigned short)13] [(unsigned short)13] [i_0] [(unsigned short)13])))));
                }
                for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) 
                {
                    arr_24 [i_6] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_6 - 3])) ? (arr_0 [i_6 - 2]) : (arr_0 [i_6 + 3]))) == (max((((/* implicit */int) (short)16586)), (arr_21 [i_6] [i_6 - 2])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [i_7])) || (((/* implicit */_Bool) arr_17 [i_1])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */int) arr_27 [(signed char)7] [(signed char)7] [i_6] [i_7] [i_1] [i_6]);
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)19886)) || (((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_6] [i_1] [i_8 + 1]))));
                        }
                    }
                }
            }
        } 
    } 
}
