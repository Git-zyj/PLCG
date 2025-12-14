/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45995
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */long long int) 4294967283U)) - (var_6))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) arr_2 [i_0] [i_0])) : (((7421473144011949236LL) + (((/* implicit */long long int) 2301531993U))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_4 [i_0] [i_0]))));
            var_25 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-110))));
        }
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_26 = ((/* implicit */long long int) (signed char)110);
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
            {
                arr_17 [i_0] = ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33361))) : (arr_5 [i_4 + 1]));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 3; i_5 < 15; i_5 += 3) 
                {
                    var_27 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)93))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_28 -= ((/* implicit */unsigned long long int) arr_18 [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]);
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(arr_19 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_4 + 2] [i_4 + 1] [i_4 + 2]))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_4] [i_5 - 2] [1LL] [i_5] [1LL] [i_4])))))));
                        var_31 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)44177)))))));
                    }
                    var_32 = (+(-5906300163118058940LL));
                }
            }
            var_33 &= ((/* implicit */signed char) (~((-(arr_12 [i_3])))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        var_34 = (signed char)38;
        var_35 ^= ((/* implicit */unsigned short) (signed char)76);
    }
    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) -2801807504693609652LL))));
    var_37 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_13)))) ? (var_14) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_15)))) << (((((((((/* implicit */_Bool) 1129599991369005380LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) - (-9223372036854775793LL))) + (31LL))))))));
}
