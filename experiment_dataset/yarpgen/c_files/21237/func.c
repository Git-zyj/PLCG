/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21237
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = (-((~(3330986030541782390LL))));
        var_13 |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)28348)) >> (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) > (17592186044415LL))))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_12))));
        var_15 = ((/* implicit */unsigned short) ((max((9223372036854775807LL), (((/* implicit */long long int) (signed char)127)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))));
    }
    for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        var_16 = min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) ((signed char) -14057254178692903LL))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33804))) / (-8277135399853952466LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))))));
        var_17 = ((/* implicit */long long int) (signed char)(-127 - 1));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_9))) * (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)7434))))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) var_7);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((-2710001210326502526LL) - (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) + (var_7))) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                    arr_20 [i_3] [i_4] [(signed char)0] |= ((/* implicit */unsigned short) ((-5129960994785448651LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33804)))));
                }
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59249))) <= (arr_26 [4LL] [i_3 + 1] [i_7] [i_7])));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)8))) ? (((/* implicit */int) ((arr_26 [i_3] [i_4] [14LL] [i_4 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12)) || (((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_6])))))));
                            arr_30 [i_3] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                            arr_31 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7] = (unsigned short)65527;
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) (unsigned short)14149))) : (((/* implicit */int) var_1))));
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_4 + 1] [i_4 + 1] [i_4 - 2]))));
                        }
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3186)) ? (((/* implicit */int) (unsigned short)9794)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6] [i_7]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_23 [i_3]))))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29689)) == (((/* implicit */int) arr_16 [i_4 - 1] [i_7]))));
                            var_27 = arr_10 [i_3 - 1];
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)31725)))))));
                        }
                    }
                    var_29 += ((/* implicit */unsigned short) ((signed char) arr_32 [i_4] [i_4]));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((signed char) ((((((/* implicit */int) (unsigned short)44616)) << (((((arr_18 [(unsigned short)14] [i_4 - 1]) + (5532884130210219062LL))) - (28LL))))) / ((-(((/* implicit */int) var_12))))))))));
                }
                arr_36 [i_3] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(17592186042368LL)))))))) == (var_0)));
                arr_37 [i_4] = ((/* implicit */signed char) (-(min((var_8), (((/* implicit */long long int) var_5))))));
            }
        } 
    } 
}
