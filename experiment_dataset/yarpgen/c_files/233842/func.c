/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233842
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            arr_8 [i_0] [i_0] [i_0] = 5627558902561076853ULL;
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_11 [i_0] [i_1 - 1] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned long long int) -939137296726341771LL)))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) -939137296726341771LL)) ? (((((/* implicit */_Bool) 1560789482094351315LL)) ? (33488896U) : (4261478400U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            }
            var_20 = ((/* implicit */short) var_13);
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((-9126034063422909861LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_2)) - (7182))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
            var_22 = ((((/* implicit */int) (_Bool)0)) / (((((/* implicit */_Bool) 4261478400U)) ? (((/* implicit */int) (short)25723)) : (((/* implicit */int) var_6)))));
        }
        arr_12 [i_0] = ((/* implicit */int) (short)25723);
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_15 [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)8190)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4294967295U)) ? (2199023255552ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) : (((((/* implicit */_Bool) 10837670462073874361ULL)) ? (((/* implicit */unsigned int) 2147483647)) : (((((/* implicit */_Bool) 10037666833650382664ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17009))) : (4261478399U)))))));
            arr_16 [i_0] [i_3] = (+(((/* implicit */int) ((unsigned char) 192578116U))));
            var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 16125481160635535124ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)46)) && (((/* implicit */_Bool) var_2))))) : ((-(((/* implicit */int) (unsigned char)112))))))) ^ ((+(var_11)))));
            arr_17 [i_0] [i_3] = ((/* implicit */int) (unsigned short)27937);
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_24 &= ((/* implicit */long long int) 8409077240059168951ULL);
            arr_20 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-25724)) ? (2275702305224294501LL) : (var_0)))));
            var_25 = ((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_17))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 24; i_5 += 3) 
        {
            arr_23 [i_0] [i_5 - 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-3092)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-104))))));
            var_26 = ((/* implicit */unsigned long long int) -7327754454175861458LL);
            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)209)) ? ((~(11483980158735943139ULL))) : (((((/* implicit */_Bool) -696188792)) ? (10037666833650382671ULL) : (((/* implicit */unsigned long long int) 3758096384U))))));
            arr_24 [i_0] = ((/* implicit */signed char) (unsigned char)65);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)25742)) % (((/* implicit */int) (_Bool)1))));
        var_29 = ((/* implicit */_Bool) (unsigned char)255);
    }
    var_30 += ((/* implicit */unsigned int) (+(((((8409077240059168951ULL) <= (((/* implicit */unsigned long long int) var_18)))) ? (((((/* implicit */_Bool) 8409077240059168951ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((int) (signed char)75)))))));
    var_31 |= ((/* implicit */long long int) (signed char)69);
}
